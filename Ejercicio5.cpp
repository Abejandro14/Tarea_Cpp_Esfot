#include <iostream>
using namespace std;

void llenarMatriz(int matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Ingrese valor para [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }
}

int main(){
    int matriz[3][3];

    llenarMatriz(matriz);
    mostrarMatriz(matriz);

    return 0;
}
