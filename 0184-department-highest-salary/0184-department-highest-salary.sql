# Write your MySQL query statement below

select Department,Employee,Salary from (
Select d.name as Department,e.name as Employee,e.salary as Salary,
dense_rank()over(partition by d.id order by salary desc ) as rnk
from Employee e
join Department d
on e.departmentId = d.id ) a
where rnk=1;