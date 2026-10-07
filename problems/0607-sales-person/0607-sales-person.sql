# Write your MySQL query statement below
WITH Choose_red AS(
    SELECT com_id FROM Company c 
    WHERE c.name = "RED"
),
Choose_Order AS(
    SELECT sales_id
    FROM Orders o
    WHERE o.com_id=(SELECT com_id FROM Choose_red)
)
SELECT s.name FROM SalesPerson s
WHERE s.sales_id NOT IN (SELECT sales_id FROM Choose_Order)