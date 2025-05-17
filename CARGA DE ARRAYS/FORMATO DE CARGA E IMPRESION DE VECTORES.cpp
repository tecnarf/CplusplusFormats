//Formato de carga e impresion de vectores de componentes enteras
#include<iostream>
using namespace std;
int validacion();
int val_comp();
int main(){
	int n,i;
    cout<<"\n\t Digite la dimension del vector: ";
    n=validacion();
	int v[n];
	//Carga del vector 
    for(i=0;i<n; i++){
    	cout<<"\n\t\tv["<<i+1<<"] = ";
		v[i]=val_comp();
    }
    cout<<endl;
    //Impresion del vector
    cout<<"\n\t\tv = [ ";
    for(i=0;i<n;i++){
    	cout<<v[i]<<" ";
    }
    cout<<"]"<<endl;
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
while(y!=int(y) || y<=0){
				cout<<"\n\t El nro debe ser entero y positivo, digite nuevamente: ";
                cin>>y;
                }
return int(y);
} 
