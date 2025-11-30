#include <iostream>
using namespace std;

int main(){
    int notas[2][4] = {
        {3,4,5,10},
        {10,9,6,10}
    };

    string nombres[2] = {"Ana", "Juan"};
    float suma, prom;

    for(int i=0;i<2;i++){
        suma = 0;
        for(int j=0;j<4;j++){
            suma += notas[i][j];
        }
        prom = suma / 4.0;
        cout << nombres[i] << ": " << prom << endl;
    }

    return 0;
}
