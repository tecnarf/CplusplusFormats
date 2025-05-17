using namespace std;
#include<iostream>
#include<stdlib.h>
#include<time.h>
main()
{
	int m;
srand(time(00));//Numeros aleatorio en funcion del tiempo
m=(rand()%1000);//Al poner %1000 se esta condicionando a que la funcion rand() arroje numeros aleatorios menores que 1000
//De esta manera se puede delimitar los intervalos de numeros aleatorios requeridos
cout<<m<<endl;
system("pause");
return 0;
}

