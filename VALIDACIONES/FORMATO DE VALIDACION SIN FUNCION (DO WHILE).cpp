//Formato de validacion(sin funcion)
#include<iostream>
using namespace std;
int main(){
	float x;
	cout<<"Ingrese un numero entero y positivo: "<<endl;
	do{
		cout<<"x = ";cin>>x;
	}while(int(x)!=x || x<=0);
	system("pause");
	return 0;
}
