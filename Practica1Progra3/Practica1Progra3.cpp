
#include <iostream>
#include "ListaEstudiantes.h"

void ejr1()
{
	cout << "Ejercicio 1" << endl;
	ListaEstudiantes univalle;

	univalle.registrarEstudiante("Valeria", 26);
	univalle.registrarEstudiante("Ana", 20);
	univalle.registrarEstudiante("Luis", 12);
	univalle.registrarEstudiante("Carlos", 15);

	//a)Persona con la menor edad
	cout << "a)" << endl;
	univalle.estudianteCondicion(Persona::cmpEdad)->mostrarPersona();
	//b)Ordenar por nombre
	cout << "b)" << endl;
	univalle.ordenarCondicion(Persona::cmpNom);
	univalle.mostrarEstudiantes();
	//c)Ordenar por edad
	cout << "c)" << endl;
	univalle.ordenarCondicion(Persona::cmpEdad);
	univalle.mostrarEstudiantes();

}
void ejr2()
{
	cout << "Ejercicio 2" << endl;
	int arr[10] = { 8,4,6,2,10,5,13,11,9,0 };
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		for (int j = i; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				int aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;

			}
		}

	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

}
int main()
{
	ejr1();
	ejr2();

}