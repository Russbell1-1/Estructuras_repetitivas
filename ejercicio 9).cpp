#include<bits/stdc++.h> // numeros positivos
using namespace std; 

int main(){
	int n, aux=0;
	cout<<"Ingrese el numero: ";
	cin>>n;
	while (n>0){
	aux= aux + 1;
	n=n/10;
	}
	cout<<"La cantidad de digitos es: "<<aux<<endl;
	return 0;
}
