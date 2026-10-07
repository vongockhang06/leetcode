WITH ranking AS (
    SELECT 
        departmentId,
        name,
        salary,
        DENSE_RANK() OVER(PARTITION BY departmentId ORDER BY salary DESC) AS drnk
    FROM Employee
)
SELECT 
    d.name AS Department,
    r.name AS Employee,
    r.salary AS Salary
FROM ranking r
JOIN Department d ON r.departmentId = d.id
WHERE r.drnk <= 3;