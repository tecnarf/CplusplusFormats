/*Elaborar un programa que imprima una matriz MxN con numeros aleatorios entre 0 y 5(intervalos abierto). 
Las dimensiones de la matriz son ingresadas por el usuario*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int validacion();
main(){
	int m,n,i,j;
	cout<<"Digite las dimensiones de la matriz:"<<endl;
	cout<<"Digite la cantidad de filas: ";
	m=validacion();
	cout<<"Digite la cantidad de columnas: ";
	n=validacion();
	int mat[m][n];
	srand(time(0));//Numeros aleatorios en funcion del tiempo
	for(i=0;i<m;i++){//Desplazarse por filas
	
		for(j=0;j<n;j++){//Desplazarse por columnas
			mat[i][j]=(rand()%5);//Agrega numeros aleatorios entre 0 y 5(intervalo abierto) a la posicion i j de la matriz
			
		}
	
			}
	for(i=0;i<m;i++){
		cout<<"\n\t| ";
		for(j=0;j<n;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<" |"<<endl;
	}		
	system("pause");
	return 0;
}
int validacion(){
	float x;
	cin>>x;
	while(int(x)!=x||x<0){
		cout<<"INCORRECTO!! Vuelva a ngresar un numero: ";cin>>x;
	}
	return int(x);
}
