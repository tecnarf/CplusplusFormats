// Generar numeros al azar comprendidos entre dos numeros dados.
#include<iostream>
#include<stdlib.h>
#include<time.h>
int validacion();
using namespace std;
int main()
{  
	int N,i,max,min,num;

	cout<<"Ingrese la cantidad de digitos a generar al azar: ";
	N=validacion();
	cout<<"Ingrese los limites inferior y superior: "<<endl;
	cout<<"Limite inferior: ";
	min=validacion();
	do{
			cout<<"Limite superior: ";
			cin>>max;
			
	}while(int(max)!=max || max<=0 || max<=min);
	cout<<"Acontinuacion se generaran "<<N<<" numeros aleatorios entre "<<min<<" y "<<max<<endl;
	srand(time(NULL));//Semilla
	for(i=1;i<=N;i++){
		num=(min+(rand()%(max+1-min)));//Expresion para generar numeros aleatorios en un intervalo
		cout<<"\n\t"<<num<<endl;
		
	}
   system ( "pause" );
   return 0;
}
int validacion(){
	float x;
	cin>>x;
	while(int(x)!=x || x<=0){
		cout<<"N = ";cin>>x;
	}
}

