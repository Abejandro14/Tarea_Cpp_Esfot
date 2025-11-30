#include <iostream>
using namespace std;

int main(){
    string productos[5];
    int stock_ini[5];
    int stock_ven[5];
    int stock_fin[5];

    for(int i=0;i<5;i++){
        cout << "Producto " << i+1 << ": ";
        cin >> productos[i];
        cout << "Stock inicial: ";
        cin >> stock_ini[i];
        cout << "Stock vendido: ";
        cin >> stock_ven[i];

        if(stock_ven[i] > stock_ini[i]){
            cout << "Error: venta mayor al stock" << endl;
            stock_fin[i] = 0;
        } else {
            stock_fin[i] = stock_ini[i] - stock_ven[i];
        }
    }

    cout << endl;

    for(int i=0;i<5;i++){
        cout << productos[i] << " stock final: " << stock_fin[i] << endl;
    }

    return 0;
}
