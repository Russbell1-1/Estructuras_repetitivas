#include<bits/stdc++.h>
using namespace std; 

int main(){
	float n,Nn, acum=0, Prom;
	cout<<"Ingrese la cantidad de numeros: ";
	cin>>n;
	for (int i=1;i<=n;i++){
		cout<<"Ingrese el numero negativo: ";
		cin>>Nn;
		acum=acum + Nn ;
	}
	Prom= acum/n;
	cout<<"El promedio de los numeros negativos es: "<<Prom<<endl;
	return 0;
}
