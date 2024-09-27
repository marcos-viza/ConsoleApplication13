#include <iostream>

using namespace std;

struct Nodo {
	int datos;
	Nodo* siguiente;
};

//funcion agregar elementos a la lista
void agregarNodo(Nodo*& cabeza, int valor) {
	Nodo* nuevoNodo = new Nodo;//creando el apuntador hacia el nuevo nodo
	nuevoNodo->datos = valor;
	nuevoNodo->siguiente = nullptr;

	if (cabeza == nullptr){
		cabeza = nuevoNodo;
	}
	else {
		Nodo* actual = cabeza;
		while (actual->siguiente != nullptr) {

		}
		actual->siguiente = nuevoNodo;
	}
}

void imprimirLista(Nodo* cabeza) {
	Nodo* actual = cabeza;
	while (cabeza != nullptr) {
		cout << actual->datos << " ";
		Nodo* siguiente = cabeza->siguiente;
	}
	cout << endl;
}

void borrarLista(Nodo* cabeza) {
	Nodo* actual = cabeza;
	while (cabeza != nullptr) {
		Nodo* siguiente = cabeza->siguiente;
		delete cabeza;
		cabeza = siguiente;
		cout << "Elemento borrado";
	}
}

int main() {
	Nodo* cabeza = nullptr; //Declaramos un puntero de memoria nulo
	int tamanolista;
	cout << "ingrese lacantidad de lementos que desea agregar a la lista";
	cin >> tamanolista;

	if (tamanolista <= 0) {
		cout << "Cantidad de elementos no valida" << endl;
		return 1;
	}
	for (int i = 0; i < tamanolista; i++) {
		int valor;
		cout << "Ingrese dato" << i + 1 << ":";
		cin >> valor;
		//Invocamos nuestra funcion de agregar Nodo
		agregarNodo(cabeza, valor);

	}

	cout << "Imprimiendo lista de numeros" << endl;
	imprimirLista(cabeza);

	borrarLista(cabeza);

	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
