-- create database bank;
-- use bank;

-- create table loans(acno int not null primary key,cust_name varchar(100) not null,loan_amt int not null,
-- instalments int not null,int_rate decimal(4,2) null,start_date date not null,interest int not null);

insert into loans values(1,'Sian',300000,36,12.00,'2007-07-19',1200),(2,'Siya',500000,48,10.00,'2008-03-22',1800),
(3,'Anvin',300000,36,NULL,'2007-03-08',1600),(4,'Avin',800000,60,10.00,'2008-12-06',2250),
(5,'Anil',200000,36,12.50,'2010-01-03',4500),(6,'Milan',700000,60,12.50,'2008-06-05',3500),(7,'Sanjay',500000,48,NULL,'2008-03-05',3800);

-- select *from loans;
-- select acno,cust_name,loan_amt from loans;
-- select *from loans where instalments<40;
-- select acno,loan_amt from loans where Start_Date < '2009-04-01';
-- select int_rate from loans where Start_Date > '2009-04-01';
-- select *from loans where int_rate is NUll;
-- select *from loans where int_rate is not NUll;

-- select distinct loan_amt from loans;
-- select distinct instalments from loans;

-- select *from loans where start_date > '2008-12-31' and instalments > 36;
-- select cust_name,loan_amt from loans where instalments!=36;
-- select cust_name,loan_amt from loans where loan_amt < 500000 or int_rate > 12;

-- select *from loans where loan_amt between 400000 and 500000;
-- select *from loans where int_rate between 11 and 12;

-- select cust_name,loan_amt from loans where instalments in(24,26,48);

-- select acno,cust_name,loan_amt from loans where cust_name like '%n';
-- select acno,cust_name,loan_amt from loans where cust_name like '%a';
-- select acno,cust_name,loan_amt from loans where cust_name like '%a%';
-- select acno,cust_name,loan_amt from loans where cust_name not like '%n%';
-- select acno,cust_name,loan_amt from loans where cust_name like '%a_';

-- select *from loans order by loan_amt asc;
-- select *from loans order by start_date desc;

-- update loans set int_rate=11.50 where int_rate is null;
-- update loans set int_rate=int_rate + 0.5 where loan_amt > 400000;
-- update loans set interest=(loan_amt*int_rate*instalments)/(12*100);

-- delete from loans where cust_name='Anvin';
-- alter table loans add column category char(1);

-- select sum(loan_amt) as total_loanamt from loans where int_rate > 10;
-- select max(interest) as max_interest from loans;
-- select count(*) as totalcount from loans where cust_name like '%n';
-- select count(*) as totalcount from loans where interest is null;

-- select interest,acno,cust_name,loan_amt,instalments,int_rate,start_date from Loans order by interest;
-- select interest,acno,cust_name,loan_amt,instalments,int_rate,start_date from Loans where instalments >=10 order by interest;
-- select interest, COUNT(*) from loans where instalments > 5 group by interest;


