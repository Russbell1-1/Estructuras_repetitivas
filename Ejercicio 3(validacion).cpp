#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, acum=0;
	cout<<"Ingresa el numero limite: ";
	cin>>n;
	if(n<0){
		cout<<"Numero no natural";
	} else {
		for (int i=1;i<=n;i++){
		acum= acum + i;
		cout<<"El resultado es: "<<acum<<endl;
	    }	
	}
	return 0;
}
