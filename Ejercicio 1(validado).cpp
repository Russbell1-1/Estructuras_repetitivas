#include<iostream>
using namespace std;

int main(){
	int a,n,i;
	cout<<"Ingrese la cantidad de multiplos que desea: ";
	cin>>n;
	if (n<0){
		cout<<"Cantidad no valida";
	} else {
		for(i=1; i<=n ; i++){
		a=7*i;
		cout<<a<<endl;
		}
	}

	return 0;
}
