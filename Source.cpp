#include <iostream>
using namespace std;
void menu();
float sumatoria;
class articulo
{
public:
	articulo(string, int, string);
	void total(int cantidad);
private:
	string nombre;
	int precio;
	string codigo;
};
articulo::articulo(string _nombre, int _precio, string _codigo)
{
	nombre = _nombre;
	precio = _precio;
	codigo = _codigo;
}

void articulo::total(int cantidad) {
	float siniva,iva,total;
	cout << "informacion del articulo seleccionado:\n";
	cout << "nombre: " << articulo::nombre << endl;
	cout << "codigo: " << articulo::codigo << endl;
	cout << "precio: " << articulo::precio << endl << endl;
	cout << "la cantidad seleccionada es: " << cantidad << endl;
	siniva = ((articulo::precio)*cantidad);
	iva = siniva*0.15;
	total = siniva + iva;
	cout << "precio sin iva: " << siniva<<endl;
	cout << "el iva: " << iva << endl;
	cout << "el precio total : " << total << endl;
	sumatoria = sumatoria + total;
}

int main() {
	int aumentar;
	articulo a1 = articulo("coca", 20, "aa1");
	articulo a2 = articulo("sabritas", 22, "aa2");
	articulo a3 = articulo("choquis", 20, "aa3");
	articulo a4 = articulo("agua", 10, "aa4");
	articulo a5 = articulo("chocolate", 31, "aa5");
	articulo a6 = articulo("cafe", 18, "aa6");
	do {
		int eleccion, cantidad;
		menu();
		cout << "elige el poducto que deseas con el numero indicado\n\n";
		cin >> eleccion;
		system("cls");
		cout << "¿cuantos necesitas?\n";
		cin >> cantidad;
		system("cls");

		switch (eleccion) {
		case 1:
			a1.total(cantidad);
			break;
		case 2:
			a2.total(cantidad);
			break;
		case 3:
			a3.total(cantidad);
			break;
		case 4:
			a4.total(cantidad);
			break;
		case 5:
			a5.total(cantidad);
			break;
		case 6:
			a6.total(cantidad);
			break;

		};
		system("pause");
		system("cls");
		cout << "quieres elegir otro articulo?\n(elige 1 o 2)\n\n1. si\n2. no\n\n";
		cin >> aumentar;
		system("cls");
		//while (aumentar == 2);
	} while (aumentar == 1);
	cout << "el total de tu compra es:"<<sumatoria;
}
void menu() {
	cout << "los articulos disponibles son:\n\n";
	cout << "1.  coca        $20" << endl;
	cout << "2.  sabritas    $22" << endl;
	cout << "3.  choquis     $20" << endl;
	cout << "4.  agua        $10" << endl;
	cout << "5.  chocolate   $31" << endl;
	cout << "6.  cafe        $18" << endl;
}

