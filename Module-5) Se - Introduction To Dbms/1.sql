-- Module:5)Se - Introduction To Dbms
create schema bank;
-- Create a Bank table, attributes are : branch id, branch name, branch city
create table bank
(
branch_id int primary key,
branch_name varchar(25) not null,
branch_city varchar(25) not null
);
insert into bank values(1,'HDFC BANK','Ahmedabad');
insert into bank values(2,'ICICI BANK','Vadodra');
insert into bank values(3,'Carada Bank','Rajkot');

-- Create a Loan table, attributes are : loan no, branch id, account holder’s id, loan amount and loan type 
create table loan 
(
loan_no int primary key,
branch_id int not null,
acc_holders_id int not null,
loan_amount int not null,
loan_type varchar(25) not null
);
insert into loan values(111,1,101,50000,'Home Loan');
insert into loan values(121,2,102,30000,'Car Loan');
insert into loan values(131,3,103,70000,'Personal Loan');
insert into loan values(141,1,104,70000,'Education Loan');
insert into loan values(151,3,105,2400000,'Gold Loan');
alter table loan add foreign key (branch_id) references bank(branch_id);
alter table loan add foreign key (acc_holders_id) references account_holder(acc_holders_id);

-- Create a table named as Account holder for the same scenario containing the attributes are account 
-- holder’s id, account no, account holder’s name, city,contact, date of account created, account status (active or terminated),account type and balance.
create table account_holder
(
acc_holders_id int primary key,
acc_no int not null,
name varchar(25) not null,
city varchar(25) not null,
contact int,
date_of_acc_created date,
acc_status varchar(15) default "activated",
acc_type varchar(15) not null,
balance int not null
);
alter table account_holder modify contact long;

insert into account_holder values(101,987654321,'Yuvraj','Ahmedabad',9988776651,'2022-03-15',default ,'saving',60000);
insert into account_holder values(102,887654322,'Smit','Mehsana',9988776651,'2022-03-15',default ,'saving',50000);
insert into account_holder values(103,637654323,'Divyesh','Ahmedabad',9988776651,'2022-03-15','terminated','Current',10000);
insert into account_holder values(104,787654323,'Meet','Rajkot',9988776645,'2024-04-12',default,'Current',3000);
insert into account_holder values(105,787654324,'Rajesh','Mehsana',9966776642,'2024-04-26','terminated','Saving',13000);

select * from account_holder;
select *from loan;
select *from bank;

delimiter &&
create procedure credit(in amt int,in id int)
update account_holder
set balance = balance + amt
where acc_holders_id = id;
end &&

delimiter &&
create procedure debit(in amt int,in id int)
update account_holder
set balance = balance - amt
where acc_holders_id = id;
end &&

call credit(6000,104);
call debit(5000,105);

-- Also fetch the details of the account holder who are related from the same city 
select *from account_holder where city = 'Ahmedabad';

-- write a query to fetch account number and account holder name, whose accounts were created after 15th of any month
select acc_no,name from account_holder where day(date_of_acc_created)> 15;

-- Write a query to display the city name and count the branches in that city. Give the count of branches an alias name of Count_Branch.
select branch_city,count(*) as count_branch from bank group by branch_city;


-- Write a query to display the account holder’s id, account holder’s name,branch id, and loan amount for people who have taken loans.
select account_holder.acc_holders_id,account_holder.name,loan.branch_id,loan.loan_amount
from account_holder right join loan 
on account_holder.acc_holders_id=loan.acc_holders_id;

