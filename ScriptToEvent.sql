--AQUI EMPIEZA
IF OBJECT_ID('dbo.EVENT', 'U') IS NOT NULL
	DROP TABLE dbo.EVENT
GO
IF OBJECT_ID('dbo.ASISTANCE', 'U') IS NOT NULL
	DROP TABLE dbo.ASISTANCE
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
GO--ASIENTO COMO SI ASISTANCE SEA EL SALE DETAIL DE EVENT
ALTER TABLE ASISTANCE
ADD CONSTRAINT FK_ASISTANCE_EVENT_ID FOREIGN KEY (sale_id)
REFERENCES EVENT(id)
ON DELETE CASCADE
GO--CRUD PARA EVENTO
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
	@iid INT
) AS
	SELECT * FROM EVENT
	WHERE	id = @iid
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
	@iid INT
) AS
	BEGIN
		UPDATE EVENT
		SET status='I' --Evnt no tiene status
		WHERE id=@iid
	END
--AQUI TERMINA