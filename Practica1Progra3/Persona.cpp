#include "Persona.h"

Persona::Persona(string nombre, int edad)
{
	this->nombre = nombre;
	this->edad = edad;
}

Persona::~Persona()
{
}

int Persona::getEdad()
{
	return edad;
}

string Persona::getNombre()
{
	return nombre;
}

void Persona::mostrarPersona()
{
	cout << nombre << "|" << edad << endl;
}

bool Persona::cmpNom(Persona* p1, Persona* p2)
{
	return p1->nombre > p2->nombre;
}

bool Persona::cmpEdad(Persona* p1, Persona* p2)
{
	return p1->edad > p2->edad;
}
