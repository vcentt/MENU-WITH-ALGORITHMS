#include <iostream>
using namespace std;

void menu();
void submenuCalculo();
void submenuDecisiones();
void submenuBucles();
void submenuBuclesCondicionales();
void submenuCadenas();
void submenuVectores();
void submenuMatrices();
void submenuFunciones();

int main()
{
	char opcion;
	
	do {
		menu();
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			submenuCalculo();
			break;
			
		case '2':
			submenuDecisiones();
			break;
		
		case '3':
			submenuBucles();
			break;
			
		case '4':
			submenuBuclesCondicionales();
			break;
		
		case '5':
			submenuCadenas();
			break;
			
		case '6':
			submenuVectores();
			break;
		
		case '7':
			submenuMatrices();
			break;
			
		case '8':
			submenuFunciones();
			break;
			
		case '9':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	}while (opcion != '9');
	
	return 0;
}

void menu()
{
	cout << "\n  MENU PRINCIPAL" << endl;
	cout << "==================" << endl;
	cout << "1 .- Calculos" << endl;
	cout << "2 .- Decisiones" << endl;
	cout << "3 .- Bucles" << endl;
	cout << "4 .- Bucles Condicionales" << endl;
	cout << "5 .- Cadenas" << endl;
	cout << "6 .- Vectores" << endl;
	cout << "7 .- Matrices" << endl;
	cout << "8 .- Funciones" << endl;
	cout << "9 .- Salir" << endl;
	cout << "==================" << endl;
	cout << "Elije una opcion: ";
}

void submenuCalculo()
{
	char opcion;
	
	do {
		cout << "\n  SUBMENU CALCULOS" << endl;
		cout << "========================" << endl;
		cout << "1 .- Convierte pesos DOP a USD y EUR" << endl;
		cout << "2 .- Calcula el doble y tripe de ese valor" << endl;
		cout << "3 .- Calcula la diagonal principal de los triangulos" << endl;
		cout << "4 .- Calcula la suma y producto de tres numeros" << endl;
		cout << "5 .- Calcula la cantidad de pie que desea convertir a: Pie, Yarda, Pulgada y Metro" << endl;
		cout << "6 .- Calcula de Celcius a Fanreheit" << endl;
		cout << "7 .- Calcula el promedio de tu calificaciones" << endl;
		cout << "8 .- Calcula coseno, seno y tangente de un numero" << endl;
		cout << "9 .- Calcula el cociente de una division y su residuo" << endl;
		cout << "10 .- Calcula los datos" << endl;
		cout << "0 .- Menu Principal" << endl;
		cout << "=======================" << endl;
		cout << "Elije una opcion: ";
		
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			system("Program1.1.exe");
			break;
			
		case '2':
			system("Program1.2.exe");
			break;
			
		case '3':
			system("Program1.3.exe");
			break;
			
		case '4':
			system("Program1.4.exe");
			break;
			
		case '5':
			system("Program1.5.exe");
			break;
			
		case '6':
			system("Program1.6.exe");
			break;
			
		case '7':
			system("Program1.7.exe");
			break;
			
		case '8':
			system("Program1.8.exe");
			break;
			
		case '9':
			system("Program1.9.exe");
			break;
			
		case '10':
			system("Program1.10");
			break;
			
		case '0':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	} while (opcion != '0');
}

void submenuDecisiones()
{
	char opcion;
	
	do {
		cout << "\n  SUBMENU DECISIONES" << endl;
		cout << "========================" << endl;
		cout << "1 .- Coge una hora y dice que tiempo del dia es" << endl;
		cout << "2 .- Ingresa la cantidad de numero que quiere introducir y la imprime" << endl;
		cout << "3 .- De tres numeros dice si alguno se repite" << endl;
		cout << "4 .- Dice si los numeros fueron ingresados en orden creciente" << endl;
		cout << "5 .- Digite el dia y mes y dice la temporada" << endl;
		cout << "6 .- Dice del primer, segundo, practica y examen la calificacion" << endl;
		cout << "7 .- Ingrese dos numeros y que operacion desea realizar" << endl;
		cout << "8 .- Dice por sus lados si el triangulo es escaleno, isoseles..." << endl;
		cout << "9 .- Te dice tu signo zodiacal" << endl;
		cout << "10 .- Dice si es de dia, de tarde o de noche" << endl;
		cout << "0 .- Menu Principal" << endl;
		cout << "=======================" << endl;
		cout << "Elije una opcion: ";
		
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			system("Program2.1");
			break;
			
		case '2':
			system("Program2.2");
			break;
			
		case '3':
			system("Program2.3");
			break;
			
		case '4':
			system("Program2.4");
			break;
			
		case '5':
			system("Program2.5");
			break;
			
		case '6':
			system("Program2.6");
			break;
			
		case '7':
			system("Program2.7");
			break;
			
		case '8':
			system("Program2.8");
			break;
			
		case '9':
			system("Program2.9");
			break;
			
		case '10':
			system("Program2.10");
			break;
		
		case '0':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	} while (opcion != '0');
}

void submenuBucles()
{
	char opcion;
	
	do {
		cout << "\n  SUBMENU BUCLES" << endl;
		cout << "========================" << endl;
		cout << "1 .- Multiplos del 2 hasta el 100" << endl;
		cout << "2 .- El cuadrado del 1 al 50" << endl;
		cout << "3 .- Dice si tu numero es primo y los numeros divisores" << endl;
		cout << "4 .- De cuatro numeros te dice cual es el mayor" << endl;
		cout << "5 .- Te dice si es un a�o bisiesto o no " << endl;
		cout << "6 .- Te dice el numero anterior al valor introducido" << endl;
		cout << "7 .- Te multiplica el numero al cuadrado por la cantidad de veces que ingreses" << endl;
		cout << "8 .- El promedio" << endl;
		cout << "9 .- Te dice la suma y promedio" << endl;
		cout << "10 .- Diez" << endl;
		cout << "0 .- Menu Principal" << endl;
		cout << "=======================" << endl;
		cout << "Elije una opcion: ";
		
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			system("Program3.1.exe");
			break;
			
		case '2':
			system("Program3.2.exe");
			break;
			
		case '3':
			system("Program3.3.exe");
			break;
			
		case '4':
			system("Program3.4.exe");
			break;
			
		case '5':
			system("Program3.5.exe");
			break;
			
		case '6':
			system("Program3.6.exe");
			break;
			
		case '7':
			system("Program3.7.exe");
			break;
			
		case '8':
			system("Program3.8.exe");
			break;
			
		case '9':
			system("Program3.9.exe");
			break;
			
		case '10':
			system("Program3.10.exe");
			break;
			
		case '0':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	} while (opcion != '0');
}

void submenuBuclesCondicionales()
{
	char opcion;
	
	do {
		cout << "\n  SUBMENU BUCLESCONDICIONALES" << endl;
		cout << "========================" << endl;
		cout << "1 .- Tabla de multiplicar de un numero hasta otro" << endl;
		cout << "2 .- Continuacion de los numeros introducidos" << endl;
		cout << "3 .- Promedio de los numeros" << endl;
		cout << "4 .- Suma de numeros positivos(15)" << endl;
		cout << "5 .- Suma de numeros impares" << endl;
		cout << "6 .- Seis" << endl;
		cout << "7 .- Cantidad que fueron positivos, negativos o nulos" << endl;
		cout << "8 .- Ocho" << endl;
		cout << "9 .- Imprime el siguiente dia" << endl;
		cout << "10 .- Diez" << endl;
		cout << "0 .- Menu Principal" << endl;
		cout << "=======================" << endl;
		cout << "Elije una opcion: ";
		
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			system("Program4.1.exe");
			break;
			
		case '2':
			system("Program4.2.exe");
			break;
			
		case '3':
			system("Program4.3.exe");
			break;
			
		case '4':
			system("Program4.4.exe");
			break;
			
		case '5':
			system("Program4.5.exe");
			break;
			
		case '6':
			system("Program4.6.exe");
			break;
			
		case '7':
			system("Program4.7.exe");
			break;
			
		case '8':
			system("Program4.8.exe");
			break;
			
		case '9':
			system("Program4.9.exe");
			break;
			
		case '10':
			system("Program4.10.exe");
			break;
			
		case '0':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	} while (opcion != '0');
}

void submenuCadenas()
{
	char opcion;
	
	do {
		cout << "\n  SUBMENU CADENAS" << endl;
		cout << "========================" << endl;
		cout << "1 .- Uno" << endl;
		cout << "2 .- Dos" << endl;
		cout << "3 .- Tres" << endl;
		cout << "4 .- Cuatro" << endl;
		cout << "5 .- Cinco" << endl;
		cout << "6 .- Seis" << endl;
		cout << "7 .- Siete" << endl;
		cout << "8 .- Ocho" << endl;
		cout << "9 .- Nueve" << endl;
		cout << "10 .- Diez" << endl;
		cout << "0 .- Menu Principal" << endl;
		cout << "=======================" << endl;
		cout << "Elije una opcion: ";
		
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			system("Program5.1.exe");
			break;
			
		case '2':
			system("Program5.2.exe");
			break;
			
		case '3':
			system("Program5.3.exe");
			break;
			
		case '4':
			system("Program5.4.exe");
			break;
			
		case '5':
			system("Program5.5.exe");
			break;
			
		case '6':
			system("Program5.6.exe");
			break;
			
		case '7':
			system("Program5.7.exe");
			break;
			
		case '8':
			system("Program5.8.exe");
			break;
			
		case '9':
			system("Program5.9.exe");
			break;
			
		case '10':
			system("Program5.10.exe");
			break;
			
		case '0':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	} while (opcion != '0');
}

void submenuVectores()
{
	char opcion;
	
	do {
		cout << "\n  SUBMENU VECTORES" << endl;
		cout << "========================" << endl;
		cout << "1 .- Uno" << endl;
		cout << "2 .- Dos" << endl;
		cout << "3 .- Tres" << endl;
		cout << "4 .- Cuatro" << endl;
		cout << "5 .- Cinco" << endl;
		cout << "6 .- Seis" << endl;
		cout << "7 .- Siete" << endl;
		cout << "8 .- Ocho" << endl;
		cout << "9 .- Nueve" << endl;
		cout << "10 .- Diez" << endl;
		cout << "0 .- Menu Principal" << endl;
		cout << "=======================" << endl;
		cout << "Elije una opcion: ";
		
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			system("Program6.1.exe");
			break;
			
		case '2':
			system("Program6.2.exe");
			break;
			
		case '3':
			system("Program6.3.exe");
			break;
			
		case '4':
			system("Program6.4.exe");
			break;
			
		case '5':
			system("Program6.5.exe");
			break;
			
		case '6':
			system("Program6.6.exe");
			break;
			
		case '7':
			system("Program6.7.exe");
			break;
			
		case '8':
			system("Program6.8.exe");
			break;
			
		case '9':
			system("Program6.9.exe");
			break;
			
		case '10':
			system("Program6.10");
			break;
			
		case '0':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	} while (opcion != '0');
}

void submenuMatrices()
{
	char opcion;
	
	do {
		cout << "\n  SUBMENU MATRICES" << endl;
		cout << "========================" << endl;
		cout << "1 .- Uno" << endl;
		cout << "2 .- Dos" << endl;
		cout << "3 .- Tres" << endl;
		cout << "4 .- Cuatro" << endl;
		cout << "5 .- Cinco" << endl;
		cout << "6 .- Seis" << endl;
		cout << "7 .- Siete" << endl;
		cout << "8 .- Ocho" << endl;
		cout << "9 .- Nueve" << endl;
		cout << "10 .- Diez" << endl;
		cout << "0 .- Menu Principal" << endl;
		cout << "=======================" << endl;
		cout << "Elije una opcion: ";
		
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			system("Program7.1.exe");
			break;
			
		case '2':
			system("Program7.2.exe");
			break;
			
		case '3':
			system("Program7.3.exe");
			break;
			
		case '4':
			system("Program7.4.exe");
			break;
			
		case '5':
			system("Program7.5.exe");
			break;
			
		case '6':
			system("Program7.6.exe");
			break;
			
		case '7':
			system("Program7.7.exe");
			break;
			
		case '8':
			system("Program7.8.exe");
			break;
			
		case '9':
			system("Program7.9.exe");
			break;
			
		case '10':
			system("Program7.10");
			break;
			
		case '0':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	} while (opcion != '0');
}

void submenuFunciones()
{
	char opcion;
	
	do {
		cout << "\n  SUBMENU FUNCIONES" << endl;
		cout << "========================" << endl;
		cout << "1 .- Uno" << endl;
		cout << "2 .- Dos" << endl;
		cout << "3 .- Tres" << endl;
		cout << "4 .- Cuatro" << endl;
		cout << "5 .- Cinco" << endl;
		cout << "6 .- Seis" << endl;
		cout << "7 .- Siete" << endl;
		cout << "8 .- Ocho" << endl;
		cout << "9 .- Nueve" << endl;
		cout << "10 .- Diez" << endl;
		cout << "0 .- Menu Principal" << endl;
		cout << "=======================" << endl;
		cout << "Elije una opcion: ";
		
		cin >> opcion;
		
		switch(opcion)
		{
		case '1':
			system("Program8.1.exe");
			break;
			
		case '2':
			system("Program8.2.exe");
			break;
			
		case '3':
			system("Program8.3.exe");
			break;
			
		case '4':
			system("Program8.4.exe");
			break;
			
		case '5':
			system("Program8.5.exe");
			break;
			
		case '6':
			system("Program8.6.exe");
			break;
			
		case '7':
			system("Program8.7.exe");
			break;
			
		case '8':
			system("Program8.8.exe");
			break;
			
		case '9':
			system("Program8.9.exe");
			break;
			
		case '10':
			system("Program8.10");
			break;
			
		case '0':
			cout << "\n\nFIN DEL PROGRAMA" << endl;
			break;
			
		default:
			cout << "\n\nOPCION NO VALIDA" << endl;
			break;
		}
		
	} while (opcion != '0');
}
