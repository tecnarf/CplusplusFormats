//Formato de carga e impresion de matrices con punteros
#include<iostream>
using namespace std;
int validacion();
void CargarMatriz(float *p, int m, int n);
void MostrarMatriz(float *p, int m, int n);
int main(){
	int m,n,i,j;
	
	cout<<"\n\t Digite las dimensiones de las matrices\n ";
	cout<<"\n\t\tNro de filas: \n";
	cout<<"\n\t\t\tM = ";
	m=validacion();
	
	cout<<"\n\t\tNro de columnas: \n";
	cout<<"\n\t\t\tN = ";
	n=validacion();
	
	float mat[m][n];
	
	CargarMatriz(&mat[0][0], m, n);
	MostrarMatriz(&mat[0][0],m,n);
	
	system("pause");
	return 0;
}
int validacion(){
	float x;
	cin>>x;
	while(int(x)!=x || x<=0){
		cout<<"\n\t El nro debe ser entero y positivo, digite nuevamente: ";
		cin>>x;
	}
}
void CargarMatriz(float *p, int m, int n){
	int i,j,k=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<"\n\t\tElemento de la matriz M["<<i+1<<"]["<<j+1<<"] = ";
			cin>>*(p+k);
			k++;
			
		}
	}
}
void MostrarMatriz(float *p, int m, int n){
	int i,j,k=0;
	for(i=0;i<m;i++){
		cout<<"\n\t\t|\t";
		for(j=0;j<n;j++){
			cout<<*(p+k)<<"\t";
			k++;
			
		}
		cout<<"|"<<endl;
	}
}



