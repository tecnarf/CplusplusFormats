//Elaborar un programa que verifique si un número es primo o no
#include<iostream>
#include<stdbool.h>//Libreria que contiene a la variable bool
using namespace std;
bool es_primo(int n);//Implemetamos una funcion tipo bool(nos arrojara solo verdadero o falso)
void imprimir_resultado(bool b);//Implementamos una funcion void que recibe como parmetro el valor de la variable  b(verdadero o falso)
//Una funcion void tiene la caracteristica de que no nos obliga a retornar nada
int main(){
	bool b;
	float x;
	int i,j,c=0;
	cout<<"Ingrese un numero entero y positivo mayor a 1: "<<endl;
	
	do{
		cout<<"x = ";cin>>x;
	}while(int(x)!=x || x<=0 || x==1);
	
	b=es_primo(int(x));//Guardamos en b el valor que arroje la funcion bool 
	imprimir_resultado(b);//Invocamos la funcion void para desplegar el resultado segun el valor de b
	system("pause");
	return 0;
}
bool es_primo(int n){
	//Algoritmo que determina si un numero es primo
	int i,c=0;
		for(i=1;i<=n;i++){
		if(int(n)%i==0){
			c++;
		}
	}
	if(c==2){
		return true;
	}else{
		return false;
	}
}
void imprimir_resultado(bool b){
	if(b==true){
		cout<<"es primo"<<endl;
	}	
	
	if(b==false){
		cout<<"no es primo"<<endl;
	}
}
