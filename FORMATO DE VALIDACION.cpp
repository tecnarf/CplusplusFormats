//Formato de validacion de numeros ingresados por el usuario
#include<iostream>
using namespace std;
int validacion();
int main(){
	int n;
    cout<<"\n\t Digite un numero entero y positivo: ";
    n=validacion();
	system("pause");
	return 0;
}
int validacion(){
float x;
cin>>x;
while(x!=int(x) || x<=0){
	cout<<"\n\t El nro debe ser entero y positivo, digite nuevamente: ";
        cin>>x;
                }
return int(x);
} 
