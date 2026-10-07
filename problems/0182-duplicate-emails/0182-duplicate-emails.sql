# Write your MySQL query statement below
SELECT
    p2.email AS "Email"
FROM (
    SELECT
        p.email,
        COUNT(p.email) AS "freq"
    FROM Person p GROUP BY p.email
) p2
WHERE p2.freq >1;