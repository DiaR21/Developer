DROP DATABASE IF EXISTS libreria_cf;
CREATE DATABASE IF NOT EXISTS libreria_cf;

USE libreria_cf;

CREATE TABLE autores(
  autor_id INT,
  nombre VARCHAR(25),
  apellido VARCHAR(25),
  genero CHAR(1), -- M o F
  fecha_nacimiento DATE,
  pais_origen VARCHAR(40)
);

SHOW COLUMNS FROM autores;

DESC autores /*Equivale a SHOW COLUMNS FROM*/
/*
CREATE TABLE usuarios LIKE autores; /*crea una tabla identica*/


/*Insertar valores */
SELECT * FROM autores;

/*Insertar valores */
INSERT INTO autores(autor_id, nombre, genero, fecha_nacimiento, pais_origen)
VALUES  (1, 'Diana', 'Rangel','F', '1996-01-21', 'México'),
        (2, 'Andrea', 'Soto','F', '1993-02-25', 'México'),
        (3, 'Kevin', 'Diaz','M', '1999-07-30', 'México'),
        (4, 'Juan', 'Lorem','M', '1994-11-13', 'México'),
        (5, 'Lucy', 'Castro','F', '1990-12-12', 'México');

SELECT * FROM autores;