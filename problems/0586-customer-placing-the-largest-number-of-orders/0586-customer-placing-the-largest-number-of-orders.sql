# Write your MySQL query statement below
SELECT customer_number FROM Orders o
GROUP BY customer_number
ORDER BY COUNT(order_number) DESC
LIMIT 1