#include<bits/stdc++.h>
using namespace std; 

int main(){
	float n,Nn, acum=0, Prom;
	cout<<"Ingrese la cantidad de numeros: ";
	cin>>n;
	if (n<0){
		cout<<"Cantidad de numeros no valida";
	} else {
	    for (int i=1;i<=n;i++){
		cout<<"Ingrese el numero negativo: ";
		cin>>Nn;
	    if (Nn>0){
			cout<<"Numero no negativo";
		} else {
			acum=acum + Nn ;
	    }
	    }
	    Prom= acum/n;
	    cout<<"El promedio de los numeros negativos es: "<<Prom<<endl;
	}
	return 0;
}
