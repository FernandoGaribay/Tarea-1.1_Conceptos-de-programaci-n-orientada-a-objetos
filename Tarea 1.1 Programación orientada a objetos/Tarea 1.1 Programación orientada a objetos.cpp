#include <iostream>
using namespace std;

class Calculadora { // Se crea nuestra clase llamada "Calculadora".
private: // Encapsulamos a todos los atributos usando la palabra reservada "private".
	float numero_Uno; // Elemento encapsulado.
	float numero_Dos; // Elemento encapsulado.
	float resultado; // Elemento encapsulado.
	int operacion; // Elemento encapsulado.
public: // Delcaración de los métodos de la clase de forma pública usando la palabra reservada "public".
	void operaciones(int operacion);
	void operando();
	float obtener_Resultado();
	Calculadora() { // Se establece un constructor que no tiene parámetros de entrada, la inicialización de las variables se hace con valores de "0".
		this->numero_Uno = 0.0f; //
		this->numero_Dos = 0.0f; // Con la palabra reservada "this", le decimos que busque el atributo de esta clase.
		this->resultado = 0.0f; //
		this->operacion = 0; //
	}
	Calculadora(float numero_Uno, float numero_Dos) { // Se establece un constructor que tiene parámetros de entrada, los cuales se utilizan para la inicialización de las variables de clase.
		this->numero_Uno = numero_Uno;
		this->numero_Dos = numero_Dos;
	}
};

// Implementación de la función fuera de la definición de la clase "Calculadora".
void Calculadora::operaciones(int operacion) {
	this->operacion = operacion;
}

// Implementación de la función fuera de la definición de la clase "Calculadora".
void Calculadora::operando() {
	switch (this->operacion)
	{
	case 1:
		this->resultado = this->numero_Uno + this->numero_Dos;
		break;
	case 2:
		this->resultado = this->numero_Uno - this->numero_Dos;
		break;
	case 3:
		this->resultado = this->numero_Uno * this->numero_Dos;
		break;
	case 4:
		this->resultado = this->numero_Uno / this->numero_Dos;
		break;
	default:
		cout << "Opcion no encontrada." << endl;
		break;
	}
}

// Implementación de la función fuera de la definición de la clase "Calculadora".
float Calculadora::obtener_Resultado() {
	return this->resultado;
}

int main() // Creación de nuestro método “main”.
{
	int operacion;
	float numero_Uno, numero_Dos, resultado;

	cout << "Ingrese un primer valor: ";
	cin >> numero_Uno;

	cout << "Ingrese un segundo valor: ";
	cin >> numero_Dos;

	cout << "\nSelecciona una operacion: \n 1) Suma \n 2) Resta \n 3) Multiplicacion \n 4) Division" << endl;
	cout << "\nSeleccion: ";
	cin >> operacion;

	Calculadora calculadora(numero_Uno, numero_Dos); // Creación de nuestro objeto llamado "calculadora". (El nombre del objeto es independiente al nombre de la clase).
	
	calculadora.operaciones(operacion); // Utilizaremos el método "operaciones" que contiene nuestra clase a la cual pertenece nuestro objeto "calculadora".
	calculadora.operando(); // Utilizaremos el método "operando" que contiene nuestra clase a la cual pertenece nuestro objeto "calculadora".
	
	resultado = calculadora.obtener_Resultado(); // Utilizaremos el método "obtener_Resultado" que contiene nuestra clase a la cual pertenece nuestro objeto "calculadora".
	cout << "\n\nEl resultado es: " << resultado << endl;
	
	system("pause");
	return 0;
}