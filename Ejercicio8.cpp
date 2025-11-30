#include <iostream>
using namespace std;

int ventas(int dia){
    if(dia == 0){
        return 0;
    }
    int v;
    cout << "Venta del dia " << dia << ": ";
    cin >> v;
    return v + ventas(dia - 1);
}

int main(){
    int dias;
    cout << "Cuantos dias: ";
    cin >> dias;

    int total = ventas(dias);
    cout << "Total ventas: " << total;

    return 0;
}
