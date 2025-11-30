#include <iostream>
#include <vector>
using namespace std;

int main(){
	string equipos[4];
	int puntajes[4];
	int pos = 0;
	

	for(int i=0;i<4;i++){
		cout << "Ingrese el equipo " << i +1 << ": ";
		
		getline(cin, equipos[i]);
	}
	
	for(int i=0;i<4;i++){
		cout << "Ingrese el puntaje del equipo " << i+ 1 << ": ";
		cin >> puntajes[i];
	}
	int mayor = puntajes[0];
	
	for(int i=0;i<4;i++){
		if(puntajes[i] > mayor){
			mayor = puntajes[i];
			pos = i;			
		}
	}
	cout << "El equipo con mayor puntaje es: " << equipos[pos] << endl;
	
	return 0;
}
