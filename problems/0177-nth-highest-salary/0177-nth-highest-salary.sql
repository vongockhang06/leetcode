CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    # Write your MySQL query statement below.
    SELECT 
        salary
    FROM (
        SELECT
            id,
            salary,
            DENSE_RANK() OVER(ORDER BY salary DESC) AS rs
        FROM Employee e
    ) AS ranking
    WHERE rs = N 
    LIMIT 1
  );
END