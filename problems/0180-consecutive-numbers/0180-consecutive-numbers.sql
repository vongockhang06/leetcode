# Write your MySQL query statement below
SELECT DISTINCT
    num AS "ConsecutiveNums" 
FROM (
    SELECT
        id,
        num,
        LAG(num,1) OVER() AS ln,
        LAG(num,2) OVER() AS lln
    FROM Logs as l
) temp WHERE num = ln  AND num =lln;