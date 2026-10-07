-- # Write your MySQL query statement below
-- WITH 
--     no_requests AS(
--         SELECT
--             t.request_at,
--             COUNT(status) AS "No_request"
--         FROM Trips t 
--         JOIN Users u ON t.client_id = u.users_id
--         JOIN Users u2 ON t.driver_id = u2.users_id
--         WHERE u.banned = 'No'and u2.banned ='No'
--         GROUP BY t.request_at
--     ),
--     cancel AS(
--         SELECT
--             t.request_at,
--             COUNT(status) AS "No_cancelled"
--         FROM Trips t 
--         JOIN Users u ON t.client_id = u.users_id
--         JOIN Users u2 ON t.driver_id = u2.users_id
--         WHERE u.banned = 'No' and u2.banned ='No' and t.status != 'completed' 
--         GROUP BY t.request_at
--     )
-- SELECT 
--     nr.request_at AS "Day",
--     ROUND(IFNULL(c.No_cancelled, 0) / nr.No_request,2) AS "Cancellation Rate"
-- FROM no_requests nr LEFT JOIN cancel c ON nr.request_at= c.request_at
-- WHERE nr.request_at BETWEEN '2013-10-01' AND '2013-10-03'

-- Method 2
SELECT 
    request_at AS Day,
    ROUND(
        SUM(CASE WHEN status != 'completed' THEN 1 ELSE 0 END) / COUNT(*), 
        2
    ) AS "Cancellation Rate"
FROM Trips t
JOIN Users u ON t.client_id = u.users_id
JOIN Users u2 ON t.driver_id = u2.users_id
WHERE u.banned = 'No' 
  AND u2.banned = 'No'
  AND request_at BETWEEN '2013-10-01' AND '2013-10-03' -- Usually required for this problem
GROUP BY request_at;