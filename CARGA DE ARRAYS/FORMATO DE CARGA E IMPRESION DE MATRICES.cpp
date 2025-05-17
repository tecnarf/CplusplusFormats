#include<iostream>
using namespace std;
int validacion();
int val_comp();
int main(){
int m,n,i,j;
cout<<"\n\t Digite las dimensiones de las matrices. \n\n\t Nro de filas: ";
m=validacion();
cout<<"\n\t Nro de columnas: ";
n=validacion();
int M[m][n];
//Carga de la matriz
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		cout<<"\t\tM["<<i+1<<","<<j+1<<"] = ";
		M[i][j]=val_comp();
	}

}
cout<<endl;
//Impresion de la matriz
for(i=0;i<m;i++){
	cout<<"\t\t\t| ";
	for(j=0;j<n;j++){
		cout<<M[i][j]<<" ";
	}
	cout<<"|"<<endl;
} 
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
int val_comp(){
	float y;
	cin>>y;
	while(int(y)!=y || y<0){
		cout<<"\n\t El nro debe ser entero y positivo, digite nuevamente: ";
                cin>>y;
		
	}
}
