GO
CREATE TABLE REPORT (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	bad_user VARCHAR(150) NOT NULL,
	reporter VARCHAR(150) NOT NULL,
	description VARCHAR(500) NOT NULL,
	state CHAR(1) NOT NULL
)
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddReport]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddStoreProduct]
END
GO
CREATE PROCEDURE dbo.usp_AddReport(
	@bad_user VARCHAR(150),
	@reporter VARCHAR(150),
	@description VARCHAR(500),
	@state CHAR(1),
	@id INT OUT
)
AS
	BEGIN
		INSERT INTO REPORT(bad_user, reporter, description, state)
		SELECT @bad_user, @reporter, @description, @state
		
		SET @id=SCOPE_IDENTITY()
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryReportByUsername]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryReportByUsername]
END
GO
CREATE PROCEDURE dbo.usp_QueryReportByUsername(
	@value VARCHAR(250)
) AS
	SELECT * FROM REPORT
	WHERE	reporter LIKE '%' + @value + '%' 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllReportByReportedUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllReportByReportedUser]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllReportByReportedUser(
	@value VARCHAR(250)
) AS
	SELECT * FROM REPORT
	WHERE	bad_user LIKE '%' + @value + '%' 
--AQUI EMPIEZA
GO
CREATE TABLE EVENT (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	name VARCHAR(250) NOT NULL,
	relevance VARCHAR(100) NOT NULL,
	type_event VARCHAR(100) NOT NULL,
	date VARCHAR(100) NOT NULL,
	hour INT NOT NULL,
	minutes INT NOT NULL,
)
GO
CREATE TABLE ASISTANCE (
	id INT NOT NULL PRIMARY KEY,
	event_id INT NOT NULL,
	username VARCHAR(100) NOT NULL,
	confirmation VARCHAR(100) NOT NULL,
)
GO
ALTER TABLE ASISTANCE
ADD CONSTRAINT FK_ASISTANCE_EVENT_ID FOREIGN KEY (event_id)
REFERENCES EVENT(id)
ON DELETE NO ACTION
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateAsistance]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateAsistance]
END
GO
CREATE PROCEDURE dbo.usp_UpdateAsistance(
	@id INT,
	@event_id VARCHAR(250),
	@username VARCHAR(100),
	@confirmation VARCHAR(100)
) AS
	BEGIN
		UPDATE ASISTANCE 
		SET @event_id=@event_id, username=@username, confirmation=@confirmation
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteAsistance]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteAsistance]
END
GO
CREATE PROCEDURE dbo.usp_DeleteAsistance(
	@id INT
) AS
	BEGIN
		UPDATE ASISTANCE
		SET confirmation='I'
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddAsistance]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddAsistance]
END
GO
CREATE PROCEDURE dbo.usp_AddAsistance(
	@event_id INT,
	@username VARCHAR(100),
	@confirmation VARCHAR(50),
	@id INT OUT
) 
AS
	BEGIN
		INSERT INTO EVENT (event_id, username,confirmation)
		SELECT @username, @event_id, @confirmation
		SET @id = SCOPE_IDENTITY()
	END
GO
-- aqui termina la funcion agregar asistentes
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddEvent]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddEvent]
END
GO
CREATE PROCEDURE dbo.usp_AddEvent(
	@name VARCHAR(250),
	@relevance VARCHAR(100),
	@type_event VARCHAR(100),
	@date VARCHAR(100),
	@hour INT,
	@minutes INT,
	@id INT OUT
) AS
	BEGIN
		INSERT INTO EVENT (name, relevance, type_event, date, hour, minutes)
		SELECT @name, @relevance, @type_event, @date, @hour, @minutes
		SET @id = SCOPE_IDENTITY()
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateEvent]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateEvent]
END
GO
CREATE PROCEDURE dbo.usp_UpdateEvent(
	@id INT,
	@name VARCHAR(250),
	@relevance VARCHAR(100),
	@type_event VARCHAR(100),
	@date VARCHAR(100),
	@hour INT,
	@minutes INT
) AS
	BEGIN
		UPDATE EVENT 
		SET name=@name, relevance=@relevance, type_event=@type_event, date=@date, hour=@hour, minutes=@minutes
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllEvent]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllEvent]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllEvent AS
	SELECT * FROM EVENT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryEventById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryEventById]
END
GO
CREATE PROCEDURE dbo.usp_QueryEventById(
	@id INT
) AS
	SELECT * FROM EVENT
	WHERE	id = @id
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteEvent]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteEvent]
END
GO
CREATE PROCEDURE dbo.usp_DeleteEvent(
	@id INT
) AS
	BEGIN
		UPDATE EVENT
		SET status='I' --Evnt no tiene status
		WHERE id=@id
	END
--AQUI TERMINA
CREATE TABLE COURSE (
	sec_id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
    id VARCHAR(30) NOT NULL,
	name VARCHAR(100) NOT NULL,
	type VARCHAR(100) NOT NULL,
	status CHAR(1) NOT NULL,
	professor VARCHAR(100) NOT NULL,
    parcial VARCHAR(100) NOT NULL,
    final VARCHAR(100) NOT NULL,
	student_list VARCHAR(900) NOT NULL,
)
GO
ALTER TABLE COURSE
ADD CONSTRAINT FK_COURSE_CLIENT_ID FOREIGN KEY (client_id)
REFERENCES CLIENTE(id)
ON DELETE NO ACTION
GO

--INSERT INTO COURSE (id;name, type,status, professor, parcial,final)
--VALUES ('INF32','LPOO','Curricular','A','JBaldeon','','')
--GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddCourse]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddCourse]
END
GO
CREATE PROCEDURE usp_Addcourse(
    @id VARCHAR(30) ,
	@name VARCHAR(100) ,
	@type VARCHAR(100),
	@status CHAR(1) ,
	@professor VARCHAR(100) ,
    @parcial VARCHAR(100) ,
    @final VARCHAR(100) ,
	@student_list VARCHAR(900),
	@sec_id INT OUT
) AS
	BEGIN
		INSERT INTO PRODUCT (id;name, type,status, professor, parcial,final,student_list)
		SELECT @id, @name, @type, @status, @professor, @parcial, @final, @student_list
		SET @sec_id = SCOPE_IDENTITY() 
	END
GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateCourse]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateCourse]
END
GO
CREATE PROCEDURE usp_UpdateCourse(
    @sec_id INT,
    @id VARCHAR(30) ,
	@name VARCHAR(100) ,
	@type VARCHAR(100),
	@status CHAR(1) ,
	@professor VARCHAR(100) ,
    @parcial VARCHAR(100) ,
    @final VARCHAR(100) ,
	@student_list VARCHAR(900)
	
) AS
	BEGIN
		UPDATE PRODUCT 
		SET id=@id, name=@name, type=@type, status=@status, professor=@professor, parcial=@parcial, final=@final, student_list=@student_list
		WHERE sec_id=@sec_id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteCourse]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteCourse]
END
GO
CREATE PROCEDURE dbo.usp_DeleteCourse(
	@iid VARCHAR(30)
) AS
	BEGIN
		UPDATE COURSE
		SET status='I'
		WHERE id LIKE '%' + @id + '%'
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllCourses]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllCourses]
END
GO
CREATE PROCEDURE usp_QueryAllCourses AS
	SELECT * FROM COURSE
    WHERE status!='I'
GO
-- IF EXISTS ( SELECT * 
--             FROM   sysobjects 
--             WHERE  id = object_id(N'[dbo].[usp_QueryCourseById]') 
--                    and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
-- BEGIN
--     DROP PROCEDURE [dbo].[usp_QueryCourseById]
-- END
-- GO
-- CREATE PROCEDURE usp_QueryCourseById(
-- 	@id VARCHAR(30)
-- ) AS
-- 	SELECT * FROM COURSE
-- 	WHERE	id LIKE '%' + @id + '%'
-- GO

--static List<Course^>^ QueryCourseByName(String^ value);
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryProductsByName]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryProductsByName]
END
GO
CREATE PROCEDURE usp_QueryProductsByName(
	@value VARCHAR(100)
) AS
	SELECT * FROM PRODUCT
	WHERE	name LIKE '%' + @value + '%'
GO

GO
IF OBJECT_ID('dbo.PLACE', 'U') IS NOT NULL
	DROP TABLE dbo.PLACE
GO
CREATE TABLE PLACE(
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	location VARCHAR (250)NOT NULL ,
	availability VARCHAR(10) NOT NULL,
	participants INT NOT NULL	,
	poweroutlet	INT NOT NULL,
	typeplace VARCHAR (250)NOT NULL ,
	optimumplace VARCHAR (250)NOT NULL ,
)
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddPlace]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddPlace]
END
GO
CREATE PROCEDURE usp_AddPlace(
	@location VARCHAR(250),
	@availability VARCHAR(500),
	@participants INT,
	@poweroutlet INT,
	@typeplace VARCHAR(250),
	@optimumplace VARCHAR(250),
	@id INT OUT
) AS
	BEGIN
		INSERT INTO PLACE (location, availability, participants, poweroutlet, typeplace, optimumplace)
		SELECT @location, @availability, @participants, @poweroutlet, @typeplace, @optimumplace
		SET @id = SCOPE_IDENTITY()
	END
	
	--UPDATE

	GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdatePlace]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdatePlace]
END
GO
CREATE PROCEDURE usp_UpdatePlace(
	@location VARCHAR(250),
	@availability VARCHAR(500),
	@participants INT,
	@poweroutlet INT,
	@typeplace VARCHAR(250),
	@optimumplace VARCHAR(250),
	@id INT OUT
) AS
	BEGIN
		UPDATE PLACE 
		SET location=@location, availability=@availability, participants=@participants, poweroutlet=@poweroutlet, typeplace=@typeplace, optimumplace=@optimumplace
		WHERE id=@id
	END

	--QUERYPLACE BY NAME 

	GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryPlaceByName]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryPlaceByName]
END
GO
CREATE PROCEDURE usp_QueryPlaceByName(
	@location VARCHAR(250)
) AS
	SELECT * FROM PLACE
	WHERE	location LIKE '%' + @location + '%' 

	--QUERY ALL PLACES

	GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllPlace]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllPlace]
END
GO
CREATE PROCEDURE usp_QueryAllPlace AS
	SELECT * FROM PLACE
	
	--QUERY PlACE BY ID

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryPlaceById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryPlaceById]
END
GO
CREATE PROCEDURE usp_QueryPlaceById(
	@id INT
) AS
	SELECT * FROM PLACE
	WHERE	id = @id



