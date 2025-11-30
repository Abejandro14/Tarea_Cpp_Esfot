#include <iostream>
using namespace std;

void paises(string pais[5]){
	for(int i=0;i<5;i++){
		cout << "Ingrese el pais " << i + 1 << ": ";
		getline(cin, pais[i]);
	}
}

void precios(float precio[5]){
	for(int i=0;i<5;i++){
		cout << "Ingrese el precio de vuelo del pais " << i+ 1 << ": ";
		cin >> precio[i];
	}
}

void autorPrograma(){
	cout << "Mi nombre es:\nAlejandro Taco";
}

int main(){
	string paiss[5];
	float precis[5];
	
	paises(paiss);
	precios(precis);
	autorPrograma();
	
	return 0;	
}
