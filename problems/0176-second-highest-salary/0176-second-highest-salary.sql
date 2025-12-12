# Write your MySQL query statement below
WITH salary_rank AS(
    SELECT
        id,
        salary,
        DENSE_RANK() OVER(ORDER BY salary DESC) AS "Rank_sal"
    FROM Employee
)
SELECT
    IFNULL(
        (SELECT salary
         FROM salary_rank
         WHERE Rank_sal = 2
         LIMIT 1), -- Use LIMIT 1 to ensure only one row is processed
        NULL
    ) AS "SecondHighestSalary";