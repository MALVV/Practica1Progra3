#pragma once
#include <string>
#include <iostream>
using namespace std;

class Persona
{
private:
	string nombre;
	int edad;
public:
	Persona(string nombre, int edad);
	~Persona();
	int getEdad();
	string getNombre();
	void mostrarPersona();
	static bool cmpNom(Persona* p1, Persona* p2);
	static bool cmpEdad(Persona* p1, Persona* p2);
};


