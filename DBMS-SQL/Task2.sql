create database employee;
use employee;
create table employee_details(
emp_id int not null primary key,
emp_name varchar(100) not null,
age int not null,salary decimal(10,2) not null,address varchar(100) not null);

create table working_hours(emp_id int not null,
emp_name varchar(100) not null,
working_date date not null,
working_hours decimal(5,2) not null,foreign key(emp_id) references employee_details(emp_id));

insert into employee_details values(1,'Sian',21,20000.00,'Calicut'),(2,'Siya',22,25000.00,'Idukki'),(3,'Anvin',23,20000.00,'Ernakulam'),
(4,'Jessy',27,25000.00,'Kannur'),(5,'Avin',21,20000.00,'Calicut'),(6,'Nandu',23,24000.00,'Calicut');

insert into working_hours values(1,'Sian','2015-01-24',12),(2,'Siya','2015-01-24',10),(3,'Anvin','2015-01-24',9),
(4,'Jessy','2015-01-25',6),(5,'Avin','2015-01-25',12),(6,'Nandu','2015-01-25',10);

select *from working_hours where working_date='2015-01-25' and working_hours > 8;
select *from working_hours where working_date='2015-01-25' or working_hours < 10;
select *from working_hours where emp_id=1 and (working_date='2015-01-25' or working_hours < 10);
select distinct emp_name from working_hours where working_date='2015-01-24';
select *from working_hours order by working_hours asc;
select *from working_hours order by working_date desc;

select emp_name,sum(working_hours) as totalworking_hours from working_hours group by emp_name order by totalworking_hours desc;
select emp_name,count(*) as workcount from working_hours group by emp_name order by workcount;
select emp_name,min(working_hours) as minwork_hours from working_hours group by emp_name order by minwork_hours asc;
select emp_name,max(working_hours) as maxwork_hours from working_hours group by emp_name order by maxwork_hours desc;
select emp_name,avg(working_hours) as avgwork_hours from working_hours group by emp_name order by avgwork_hours asc;

select e.emp_name, e.age, sum(w.working_hours) AS total_working_hours from employee_details e 
inner join working_hours w on e.emp_id = w.emp_id
group by e.emp_name, e.age;

select e.*
from employee_details e
left join working_hours w on e.emp_id = w.emp_id;

select w.*
from working_hours w
right join employee_details e on e.emp_id = w.emp_id;
