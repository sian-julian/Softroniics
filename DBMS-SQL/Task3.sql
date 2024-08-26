create database school;
use school;

create table student(student_id int not null primary key,student_name varchar(100) not null,
age int not null,gender char(1) not null,address varchar(255) not null);

create table marks(mark_id int not null primary key,student_id int not null,
the_subject varchar(100) not null,marks int not null,foreign key(student_id) references student(student_id));

alter table student add DOB date null;

insert into student values(1,'Sian',21,'M','Calicut','2003-06-21'),(2,'Siya',19,'F','Idukki','2005-06-23'),
(3,'Anvin',20,'M','Ernakulam','2004-05-21'),(4,'Jessy',22,'F','Calicut','2002-08-17'),
(5,'Avin',19,'M','Kannur','2005-06-01'),(6,'Eric',21,'M','Calicut','2003-09-18');

insert into marks values(1,1,'Maths',88),(2,2,'Maths',99),(3,3,'Maths',79),
(4,4,'Maths',95),(5,5,'Maths',91),(6,6,'Maths',84);

select Student_name from student where age=20 or student_id in
(select student_id from marks where the_subject='Maths' and marks > 90);

select distinct the_subject from marks;

select *from student order by age asc,student_name desc;

select sum(marks) as totalmarks,avg(marks) as avgmarks,min(marks) as minmarks,max(marks) as maxmarks 
from marks where the_subject='Maths';

select s.student_name,m.the_subject,m.marks from student s 
inner join marks m on s.student_id=m.student_id 
group by  s.student_name,m.marks,m.the_subject;

select s.student_name,m.the_subject,m.marks from student s 
left join marks m on s.student_id=m.student_id
group by s.student_name,m.marks,m.the_subject;

select s.student_name,m.the_subject,m.marks from student s 
right join marks m on s.student_id=m.student_id
group by s.student_name,m.marks,m.the_subject;

select student_name from student where student_name like 'A%';
select student_name from student where student_name not like '%a%';

select *from student order by age desc limit 3;

select the_subject from marks group by the_subject having avg(marks) > 85;

select * from student where age between 20 and 22;

select student_name from student where student_name regexp '^[AB]';





