#pragma once
#include "Persona.h"
#define CANT_MAX_EST 10
class ListaEstudiantes
{
private:
	int ind;
	Persona* estudiantes[CANT_MAX_EST];
public:
	ListaEstudiantes();
	~ListaEstudiantes();
	void registrarEstudiante(string nombre, int edad);
	void mostrarEstudiantes();
	Persona* estudianteCondicion(bool(*funcomp)(Persona*, Persona*));
	void ordenarCondicion(bool(*funcomp)(Persona*, Persona*));
};
