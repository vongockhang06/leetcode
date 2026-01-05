# Write your MySQL query statement below
WITH highest_salary AS(
    SELECT
        departmentId, 
        MAX(salary) AS "hsalary"
    FROM Employee GROUP BY departmentId
)
SELECT 
    d.name AS "Department",
    e.name AS "Employee",
    e.salary AS "Salary"
FROM Employee e 
JOIN highest_salary t ON e.departmentId = t.departmentId
JOIN Department d ON e.departmentId = d.id
WHERE e.salary = t.hsalary;