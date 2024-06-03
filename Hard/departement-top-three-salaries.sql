-- # Write your MySQL query statement below
select
department,
employee,
salary
from (
    select
        e.name employee,
        salary,
        d.name as department,
        dense_rank() over(partition by d.name order by salary desc) ranking
    from
        Employee e
    join Department d on e.departmentId = d.id
) a
where ranking <4