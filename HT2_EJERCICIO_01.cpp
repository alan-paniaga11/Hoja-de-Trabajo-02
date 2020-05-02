/*
HOJA DE TRABAJO #2

Ejercicio # 1:

Se dispone de un archivo STOCK correspondiente a la existencia de art�culos de un almac�n y se desea se�alar aquellos art�culos cuyo nivel est� por debajo del m�nimo y que visualicen un mensaje �hacer pedido�. Cada art�culo contiene un registro con los siguientes campos: n�mero del c�digo del art�culo, nivel m�nimo, nivel actual, proveedor, precio.

El programa debe tener un menu que se especifiquen las siguientes opciones:
1) Agregar productos (Grabar datos a un archivo)
2) Leer archivo y mostrar en pantalla que productos tiene nivel minimo. 


*/



#include<iostream>
#include<stdlib.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
using namespace std;

char articulo[30][100];
int cantidad[30];
int n;

void registrararticulocantidad();
void listardatos();
void buscar();

int main()
{ 

int opc;
do{ system("cls");
cout<<"\tUNIVERSIDAD ABIERTA Y A DISTANCIA"<<endl;
cout<<" Estudiante Franco Perez Montengro"<<endl<<endl;
cout<<"\t Inventario empresa"<<endl<<endl<<endl;
cout<<"MENU"<<endl<<endl;
cout<<" 1. Registrar articulos. "<<endl;
cout<<" 2. Ver lista de articulos. "<<endl;
cout<<" 3. Consultar articulos en 0 de existencias. "<<endl;
cout<<" 4. Salir. "<<endl;
cout<<endl<<endl<<" Por favor eleja una de las opciones: "<<endl<<endl;
cin>>opc;
switch(opc)

{
	
case 1: system("cls");
cout <<endl<<"1. Registrar articulo " <<endl;
registrararticulocantidad();
system("pause");
break;
case 2: system("cls");
cout<<endl<<"2. Ver lista de articulos. "<<endl;
listardatos();
system("pause");
break;
case 3: system("cls");
cout<<endl<<" 3. Consultar articulos en 0 de existencias. "<<endl;

buscar();

system("pause");
break;
default:
break;
}

}

while(opc!=4);
cout<<endl<<endl;
system("pause");
return 0;

}
void registrararticulocantidad()
{ 

int i;
int j;
int rta;
system("cls");

cout<<" Por favor escriba la cantidad de articulos que desea ingresar "<<endl<<endl;
cin>>n;
for(i=1;i<n+1;i++)
{
cantidad[i]=0;
for(j=1;j<n+1;j++)
strcpy(articulo[i]," ");
}

cout<<endl<<" Registrar articulos "<<endl;

for(i=1;i<n+1;i++)
{
	
cout<<endl<<" digite el articulo, presione enter "<<endl<<endl;
cout<<" Articulo:       "<<i<<" ";
cin>>articulo[i];
cout<<endl<<" digite la cantidad de este articulo "<<endl<<endl;
cout<<" cantidad:       "<<i<<" ";
cin>>cantidad[i];
rta=strcmp(articulo[i-1],articulo[i]);
if(rta==0)

{

cout<<"\n Articulo ya existe, por favor ingrese otro diferente \n";
for(i=i;i<n+1;i++)

{
	
cout<<" Articulo "<<i<<" ";
cin>>articulo[i];
cout<<endl<<" digite la cantidad de este articulo "<<endl<<endl;
cout<<" cantidad "<<i<<" ";
cin>>cantidad[i];
cout<<endl;

}
}
}

system("pause");

}

void listardatos()
{ 

int i;
system("cls");
cout<<endl<<" Listar los datos ingresados "<<endl<<endl;
for(i=1;i<n+1;i++)

{
	
cout<<" articulo "<<i<<" "<<articulo[i]<<endl<<" cantidad "<<i<<" "<<cantidad[i]<<endl;

}
}

void buscar( )
{ 


int i;

int acum=0;
int valor=0;
for (i=1;i<n+1;i++)

{
if (valor==cantidad[i])
{

cout<<" los articulos con exitencias en cero son articulo "<<i<<" "<<articulo[i];
cout<<" cantidad "<<i;
cout<<endl;

}
}

for (i=1;i<n+1;i++)
{
	
if (valor!=cantidad[i])
{

acum++;
}
}

if(acum==n)cout<<"\n no hay existencias en cerooooo "<<endl<<endl;

}

