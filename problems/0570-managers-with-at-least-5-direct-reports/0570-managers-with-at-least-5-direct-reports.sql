# Write your MySQL query statement below
#1: SELF JOIN - Fail, just can check only one level
SELECT E1.name
FROM Employee E1
JOIN (
    SELECT managerId, COUNT(*) AS directReports
    FROM Employee
    GROUP BY managerId
    HAVING COUNT(*) >= 5
) E2 ON E1.id = E2.managerId;
#2: RECURSIVE
-- WITH RECURSIVE Manager AS(
--     SELECT e1.id, e1.managerId, e1.name, 1 AS depth
--     FROM Employee e1
--     WHERE e1.managerId IS NULL
--     UNION ALL
--     SELECT e.id, e.managerId, e.name, m.depth+1
--     FROM Employee e 
--     JOIN Manager m ON m.id= e.managerId
-- )
-- SELECT 
--     e.name
-- FROM (SELECT 
--     m.managerId
-- FROM Manager m
-- GROUP BY m.managerId HAVING COUNT(*)>=5) AS n
-- JOIN Employee e ON e.id=n.managerId