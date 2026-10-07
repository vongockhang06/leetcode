# Write your MySQL query statement below
#1/ find out who have the same tiv_2015
#2/ check the city
#3/ find sum
-- WITH SameCity AS (
--     SELECT
--         i.pid AS ins1,
--         i2.pid AS ins2
--     FROM Insurance i
--     JOIN Insurance i2 ON i.pid<i2.pid
--     WHERE i.lat=i2.lat AND i.lon=i2.lon
-- ),
-- satisfied AS(
-- SELECT 
--     SUM(i.tiv_2016) AS "tiv_2016"
-- FROM  Insurance i 
-- WHERE i.pid NOT IN (SELECT ins1 FROM SameCity)
--     AND i.pid NOT IN (SELECT ins2 FROM SameCity)
-- GROUP BY i.tiv_2015 
-- HAVING COUNT(*)>=2
-- )
-- SELECT ROUND(SUM(tiv_2016),2) AS "tiv_2016" FROM satisfied
SELECT 
    ROUND(SUM(tiv_2016), 2) AS tiv_2016
FROM Insurance
WHERE (lat, lon) IN (
    SELECT lat, lon
    FROM Insurance
    GROUP BY lat, lon
    HAVING COUNT(*) = 1
)
AND tiv_2015 IN (
    SELECT tiv_2015
    FROM Insurance
    GROUP BY tiv_2015
    HAVING COUNT(*) > 1
);