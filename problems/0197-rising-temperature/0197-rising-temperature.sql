# Write your MySQL query statement below
SELECT id FROM (
    SELECT 
    w1.id, 
    w1.temperature,
    w1.recordDate,
    LAG(temperature) OVER() AS yestemp,
    LAG(recordDate) OVER() AS yest
    FROM Weather w1 ORDER BY w1.recordDate) AS temp
WHERE temp.temperature > temp.yestemp AND DATEDIFF(recordDate, yest) = 1