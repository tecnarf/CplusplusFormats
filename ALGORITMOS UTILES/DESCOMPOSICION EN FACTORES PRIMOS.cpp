/*Elaborar un programa que permita obtener la descomposición en factores primos de un numero*/
#include<iostream>
using namespace std;
int main(){
	float N;//N=6
	int i=2;
	do{
		cout<<"\n\t\tN = ";cin>>N;
	}while(int(N)!=N || N<=0);
	cout<<"\n\tLa descomposicion en factores primos de "<<N<<" es:"<<endl;
	cout<<"\n\t\t"<<N<< " = ";
	//[1] Entramos con: N=6 - i=2
	//[2] Entramos con: N=3 - i=2
	//[3] Entramos con: N=3 - i=3
	//[4] Entramos con: N=1 - i=2
	while(int(N)!=1){//[1]:true - [2]:true - [3]:true - [4]:false
		if(int(N)%i==0){//[1]:true - [2]:false - [3]:true
			N=N/i;//[1]:N=3 - [2] - [3]:N=1
			cout<<i<<"x";//[1]:2x - [2] - [3]:3x
			i=1;//[1]:i=1 - [2] - [3]:i=1
		}
		i++;//[1]:i=2 - [2]:i=3 - [3]:i=2
		//[1] Salimos con: N=3 - i=2
		//[2] Salimos con: N=3 - i=3
		//[3] Salimos con: N=1 - i=2
	}
	cout<<endl;
	system("pause");
	return 0;
}
