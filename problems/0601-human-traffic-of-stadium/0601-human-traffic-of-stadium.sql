-- # Write your MySQL query statement below
-- WITH 
--     over100 AS (
--         SELECT
--             id,
--             visit_date,
--             people,
--             LEAD(id,1) OVER() AS "next1", 
--             LEAD(id,2) OVER() AS "next2",     
--             LAG(id,1) OVER() AS "prev1", 
--             LAG(id,2) OVER() AS "prev2"       
--         FROM Stadium 
--         WHERE people >= 100
--     )
-- SELECT
--     id,
--     visit_date,
--     people
-- FROM over100 
-- WHERE (next1 = id + 1 AND next2 = id + 2) 
--     OR (prev1 = id -1 AND prev2 = id - 2)
--     OR (next1 = id + 1 AND prev1 = id -1) 

WITH GrpCTE AS (
    SELECT *,
        -- Subtracting row_number from id creates a 'group' ID
        id - ROW_NUMBER() OVER(ORDER BY id) as grp
    FROM Stadium
    WHERE people >= 100
),
Counts AS (
    SELECT *,
        -- Count how many rows are in each 'island'
        COUNT(*) OVER(PARTITION BY grp) as cnt
    FROM GrpCTE
)
SELECT id, visit_date, people
FROM Counts
WHERE cnt >= 3
ORDER BY visit_date;