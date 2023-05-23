CREATE DATABASE dbGymFit

USE dbGymFit

CREATE TABLE Jornada(
	id_jornada INT PRIMARY KEY NOT NULL IDENTITY (1,1),
	horaInicio TIME NOT NULL,
	horaFinal TIME NOT NULL
)

CREATE TABLE Membresia(
	id_membresia INT PRIMARY KEY NOT NULL IDENTITY(1,1),
	tipoMembresia VARCHAR(100) NOT NULL,
	tieneSPA VARCHAR(10) NOT NULL,
	tieneMaquinas VARCHAR(10) NOT NULL,
	tieneDucha VARCHAR(10) NOT NULL,
	tieneEntrenador VARCHAR(10) NOT NULL,
	precio DECIMAL(6,2) NOT NULL
)

CREATE TABLE Inscripcion(
	id_inscripcion INT PRIMARY KEY NOT NULL IDENTITY(1,1),
	fechaInscripcion DATE NOT NULL
)

CREATE TABLE Sede(
	id_sede INT PRIMARY KEY NOT NULL IDENTITY(1,1),
	sede_Nombre VARCHAR(100) NOT NULL,
	sede_Direccion VARCHAR(100) NOT NULL,
	sede_Departamento VARCHAR(100) NOT NULL
)

CREATE TABLE Cliente(
	id_cliente INT PRIMARY KEY NOT NULL IDENTITY(1,1),
	cliente_Nombre VARCHAR(100) NOT NULL,
	cliente_Apellido VARCHAR(100) NOT NULL,
	cliente_Direccion VARCHAR(100) NOT NULL,
	cliente_Telefono VARCHAR(100) NOT NULL,
	id_sede INT NOT NULL,
	id_membresia INT NOT NULL,
	id_inscripcion INT NOT NULL,
	CONSTRAINT FK_SEDE_CLIENTE FOREIGN KEY (id_sede) REFERENCES Sede(id_sede),
	CONSTRAINT FK_MEMBRESIA_CLIENTE FOREIGN KEY (id_membresia) REFERENCES Membresia(id_membresia),
	CONSTRAINT FK_INSCRIPCION_CLIENTE FOREIGN KEY (id_inscripcion) REFERENCES Inscripcion(id_inscripcion),
)

CREATE TABLE Empleado(
	id_empleado INT PRIMARY KEY NOT NULL IDENTITY(1,1),
	empleado_Nombre VARCHAR(100) NOT NULL,
	empleado_Apellido VARCHAR(100) NOT NULL,
	empleado_Direccion VARCHAR(100) NOT NULL,
	empleado_Telefono VARCHAR(100) NOT NULL,
	empleado_FechaNac DATE NOT NULL,
	empleado_Titulo VARCHAR(100) NOT NULL,
	id_sede INT NOT NULL,
	id_jornada INT NOT NULL,
	CONSTRAINT FK_SEDE_EMPLEADO FOREIGN KEY (id_sede) REFERENCES Sede(id_sede),
	CONSTRAINT FK_JORNADA_EMPLEADO FOREIGN KEY (id_jornada) REFERENCES Jornada(id_jornada),
)

CREATE TABLE Usuario(
	id_usuario INT PRIMARY KEY NOT NULL IDENTITY(1,1),
	usuario VARCHAR(100) NOT NULL,
	contrasenia VARCHAR(100) NOT NULL,
)

INSERT INTO Jornada VALUES ('07:00:00','16:00:00') 
INSERT INTO Jornada VALUES ('08:00:00','18:00:00') 

INSERT INTO Membresia VALUES ('Basico', 'No', 'Si', 'Si', 'No', '150.00')
INSERT INTO Membresia VALUES ('Premium', 'Si', 'Si', 'Si', 'Si', '450.00')

INSERT INTO Sede VALUES ('Centro Comercial Metronorte', 'Zona 17 Ciudad de Guatemala', 'Guatemala')
INSERT INTO Sede VALUES ('Centro Comercial Oakland Mall', 'Zona 12 Ciudad de Guatemala', 'Guatemala')

INSERT INTO Inscripcion VALUES ('2023-05-16')
INSERT INTO Inscripcion VALUES ('2023/05/21')

INSERT INTO Cliente VALUES ('Alvaro', 'Flores', 'Zona 17 Guatemala', '45642012', '1', '10', '1')

INSERT INTO Empleado VALUES ('Juan', 'Lopez', 'Zona 15 Guatemala', '21548960', '2001-12-03', 'Monitor de Crossfit', '1','1')

INSERT INTO Usuario VALUES ('admin','1234');
INSERT INTO Usuario VALUES ('user','user12345');

SELECT * FROM Usuario WHERE usuario = 'admin' AND contrasenia = 'admin'
SELECT * FROM Usuario 

SELECT * FROM Inscripcion

ALTER TABLE Inscripcion ALTER COLUMN fechaInscripcion DATE;