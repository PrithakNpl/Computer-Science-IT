


----Link https://www.sqlshack.com/use-window-functions-sql-server/

CREATE TABLE [Zorba].[dbo].[Orders]
(
	order_id INT,
	order_date DATE,
	customer_name VARCHAR(250),
	city VARCHAR(100),	
	order_amount MONEY
)
 
INSERT INTO [Zorba].[dbo].[Orders]
SELECT '1001','04/01/2017','David Smith','GuildFord',10000
UNION ALL	  
SELECT '1002','04/02/2017','David Jones','Arlington',20000
UNION ALL	  
SELECT '1003','04/03/2017','John Smith','Shalford',5000
UNION ALL	  
SELECT '1004','04/04/2017','Michael Smith','GuildFord',15000
UNION ALL	  
SELECT '1005','04/05/2017','David Williams','Shalford',7000
UNION ALL	  
SELECT '1006','04/06/2017','Paum Smith','GuildFord',25000
UNION ALL	 
SELECT '1007','04/10/2017','Andrew Smith','Arlington',15000
UNION ALL	  
SELECT '1008','04/11/2017','David Brown','Arlington',2000
UNION ALL	  
SELECT '1009','04/20/2017','Robert Smith','Shalford',1000
UNION ALL	  
SELECT '1010','04/25/2017','Peter Smith','GuildFord',500



----RANK()

SELECT order_id,order_date,customer_name,city, 
RANK() OVER(ORDER BY order_amount DESC) [Rank]
FROM [dbo].[Orders]


----DENSE_RANK()

SELECT order_id,order_date,customer_name,city, order_amount,
DENSE_RANK() OVER(ORDER BY order_amount DESC) [Rank]
FROM [dbo].[Orders]

SELECT order_id,order_date,customer_name,city, order_amount,
DENSE_RANK() OVER(PARTITION BY city ORDER BY order_amount DESC) [Rank]
FROM [dbo].[Orders]



-----ROW_NUMBER()
--SELECT order_id,order_date,customer_name,city, order_amount,
--ROW_NUMBER() OVER(ORDER BY order_id) [row_number]
--FROM [dbo].[Orders]


SELECT order_id,order_date,customer_name,city, order_amount,
ROW_NUMBER() OVER(PARTITION BY city ORDER BY order_amount DESC) [row_number]
FROM [dbo].[Orders]



SELECT order_id,order_date,customer_name,city, order_amount,
NTILE(4) OVER(ORDER BY order_amount) [row_number]
FROM [dbo].[Orders]


---Highest Salary 





SELECT *  FROM TestHighestSalary 

;WITH cteRowNum AS (
SELECT *,
       DENSE_RANK() OVER(PARTITION BY deptId ORDER BY Sal DESC) AS RowNum
	   --,ROW_NUMBER() OVER(PARTITION BY deptId ORDER BY Sal DESC) AS RowNum1
    FROM TestHighestSalary
 )
 SELECT *
 FROM cteRowNum
 WHERE RowNum = 2;


 



SELECT * ,ROW_NUMBER() OVER(PARTITION BY deptId ORDER BY Sal DESC) AS RowNum1  from  TestHighestSalary

--order by deptid,sal desc

SELECT * FROM TestHighestSalary e1 WHERE 3 = (SELECT COUNT(DISTINCT sal)
                                  FROM TestHighestSalary e2 
                                 WHERE e1.sal <= e2.sal
                                   AND e1.deptId = e2.deptid
                               );


SELECT COUNT(DISTINCT sal)
                                  FROM TestHighestSalary e2 
                                 WHERE 1000 <= e2.sal
                                   AND 1 = e2.deptid

SELECT * FROM TestHighestSalary 
order by sal desc

SELECT MAX(sal) AS Max_Sal
FROM TestHighestSalary
WHERE sal < (SELECT MAX(sal) FROM TestHighestSalary)

CREATE TABLE Departments(deptid int, DeptName Varchar(50),Modal Varchar(10))

INSERT INTO Departments VALUES(1,'Forest','S')
                              ,(2,'Survey','SR')
							  ,(3,'Health','H')

SELECT T.* FROM TestHighestSalary T
INNER JOIN Departments D ON D.DEPTID=T.deptId
WHERE D.Modal='S'


SELECT * FROM TestHighestSalary 
order by sal desc

BEGIN TRANSACTION DELETE FROM TestHighestSalary 
WHERE  DEPTID IN ( SELECT deptId FROM Departments
WHERE Modal='S')
SELECT * FROM TestHighestSalary 
order by sal desc
ROLLBACK TRANSACTION

SELECT UPPER(SUBSTRING(name,1,1))+LOWER(SUBSTRING(name,2,LEN(NAME))) from TestHighestSalary

UPDATE T
SET Name=UPPER(SUBSTRING(name,1,1))+LOWER(SUBSTRING(name,2,LEN(NAME)))
from TestHighestSalary T