# Write your MySQL query statement below
WITH 
first_logins AS(
    SELECT
        player_id,
        MIN(event_date) AS "first_login"
    FROM Activity GROUP BY player_id
)
SELECT
    ROUND(COUNT(*)/(SELECT COUNT(DISTINCT player_id) FROM Activity),2) AS "fraction"
FROM first_logins fl JOIN Activity a ON fl.player_id = a.player_id
AND a.event_date = ADDDATE(fl.first_login,1)