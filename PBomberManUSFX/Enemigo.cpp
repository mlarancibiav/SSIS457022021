#include "Enemigo.h"
#include "Pila.h"

	Pila<Enemigo> Pila_enemigo(2);
	Pila_enemigo.Insertar(enemigo1);
	Pila_enemigo.Insertar(enemigo2);

	cout << Pila_enemigo.Sacar() << endl;
	cout << Pila_enemigo.Sacar() << endl;

