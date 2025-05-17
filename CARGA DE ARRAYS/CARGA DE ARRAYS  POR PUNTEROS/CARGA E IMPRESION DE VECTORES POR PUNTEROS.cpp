//Formato de carga e impresion de vectores por punteros
#include<iostream>
using namespace std;
int validacion();
void CargaVector(float *p, int n);
void ImpresionVector(float *p, int n);
int main(){
	int n,i,j;
    cout<<"\n\t Digite la dimension del vector: ";
    n=validacion();
	float v[n];
	
	CargaVector(&v[0],n);
	ImpresionVector(&v[0],n);
	
    
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
void CargaVector(float *p, int n){
int i,k=0;
for(i=0;i<n;i++){
	cout<<"\n\tv["<<i+1<<"] = ";
	cin>>*(p+k);
	k++;
}
	
}
void ImpresionVector(float *p, int n){
	int i,k=0;
	cout<<"\n\tv = [ "; 
	for(i=0;i<n;i++){
		cout<<*(p+k)<<" ";
		k++;	
	}
	cout<<"]"<<endl;
}

 
