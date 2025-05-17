#include<iostream>

using namespace std;

struct usuario{
	int CI,contrasenia;
};
usuario carga();
int validar();

int main(){
	usuario usuario1;
	usuario1=carga();
	cout<<usuario1.CI<<endl;
	cout<<usuario1.contrasenia<<endl;
	system("pause");
	return 0;
}

usuario carga(){
	usuario u;
	cout<<"C.I.: ";
	u.CI=validar();
	cout<<"Contraseña: ";
	u.contrasenia=validar();

	return u;
}
int validar(){
	float x;
	do{
		cin>>x;
	}while(int(x)!=x || x<=0);
	return int(x);
}
