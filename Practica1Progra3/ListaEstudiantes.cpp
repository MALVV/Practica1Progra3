#include "ListaEstudiantes.h"

ListaEstudiantes::ListaEstudiantes()
{
	ind = 0;
}

ListaEstudiantes::~ListaEstudiantes()
{
}

void ListaEstudiantes::registrarEstudiante(string nombre, int edad)
{
	if (ind < CANT_MAX_EST)
	{
		estudiantes[ind] = new Persona(nombre, edad);
		ind++;
	}
}

void ListaEstudiantes::mostrarEstudiantes()
{
	for (int i = 0; i < ind; i++)
	{
		cout << i << ".";
		estudiantes[i]->mostrarPersona();
	}
}

Persona* ListaEstudiantes::estudianteCondicion(bool(*funcomp)(Persona*, Persona*))
{
	Persona* mayor = estudiantes[0];
	for (int i = 1; i < ind; i++)
	{
		if ((*funcomp)(mayor, estudiantes[i]))
		{
			mayor = estudiantes[i];
		}
	}
	return mayor;
}

void ListaEstudiantes::ordenarCondicion(bool(*funcomp)(Persona*, Persona*))
{
	Persona* temp = NULL;
	for (int i = ind - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if ((*funcomp)(estudiantes[j], estudiantes[j + 1]))
			{
				temp = estudiantes[j + 1];
				estudiantes[j + 1] = estudiantes[j];
				estudiantes[j] = temp;
			}
		}
	}
}
