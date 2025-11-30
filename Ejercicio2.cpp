#include <iostream>
#include <vector>
using namespace std;

int main(){
	int num;
	
	cout << "Ingrese el tamaño del vector: ";
	cin >> num;
	cin.ignore();
	vector<string> materia(num);
	
	for(int i=0;i<num;i++){
		cout << "Ingrese la materia " << i + 1 << ": ";
		getline(cin, materia[i]);
	}
	
	for(int i=0;i<num;i++){
		cout << materia[i] << endl;
	}
	return 0;
}
