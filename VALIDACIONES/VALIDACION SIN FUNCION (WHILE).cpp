#include <iostream>

int main(){
	
	float x;
	
	while(x!=int(x) || x<=0){
		std::cout<<"Inserte un numero entero  y positivo: ";
		std::cin>>x;
	}
	
	std::cout<<"Numero ingresado: "<<x<<std::endl;
	
	return 0;
}
