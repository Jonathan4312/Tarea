/*Una empresa necesita llevar el control de los datos personales de sus 10 empleados contratados, 
por la motivo la empresa lo ha contratado para la implementacion de este proyecto, los datos a almacenar son:

Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario.

Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion. 
El programa debera de desplegar la lista de empleados almacenados y el total de la planilla.
Nota: Se debe utilizar ciclos, punteros, arreglos y estructuras.*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

/*struct datos{
	int codigo;
	string nombre;
	string puesto;
	int departamento;
	float salario;
};*/

int main(){
	int i;
	int codigo;//Declaramos las mismas variables de la estructura
	char nombre;
	char puesto;
	int departamento;
	float salario;
	float total=0.00;
	
	int *base = NULL;//Para que empiece a reservar en memoria
	int arreglo[2];//Creamos un arreglo
	base = arreglo;//Posicion en memoria
	//base = new datos;
	
	for(i=0;i<10;i++){
		cout<<"EMPLEADO # "<<i+1<<endl<<endl;
		cout<<"Ingrese el codigo del empleado"<<endl;
		cin>>codigo;//Asignamos el codigo a la variable codigo
		base[i] = codigo;//La variable codigo la agregamos al arreglo base[i]
		fflush(stdin);
		cout<<"Ingrese el nombre del empleado"<<endl;
		cin>>nombre;
		base[i] = nombre;
		fflush(stdin);
		cout<<"Ingrese el puesto del empleado"<<endl;
		cin>>puesto;
		base[i] = puesto;
		fflush(stdin);
		cout<<"Ingrese el NUMERO de departamento del empleado: "<<endl;
		cout<<"1 -> Gerencia"<<endl;
		cout<<"2 -> Administracion"<<endl;
		cout<<"3 -> Produccion"<<endl;
		cin>>departamento;
		base[i] = departamento;
		fflush(stdin);
		cout<<"Ingrese el salario del empleado"<<endl;
		cin>>salario;
		base[i] = salario;
		system("cls");
		total+=salario;
	}
	for(i=0;i<2;i++){//Recorrido del arreglo
		cout<<"EMPLEADO # "<<i+1<<"\t : Q"<<*base<<endl;//Mostramos lo que hay en memoria
	}
	cout<<"El total de planilla es de: "<<total<<endl;
	delete [] base;
	
}
