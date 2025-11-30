#include <iostream>
#include <cstdlib>
using namespace std;

struct Youtuber{
    string nombre;
    string categoria;
    int subs;
    int ganancia;
};

int main(){
    Youtuber yt[2][2];

    yt[0][0] = {"Alan", "Tech", 2, 0};
    yt[0][1] = {"Maria", "Vlog", 5, 0};
    yt[1][0] = {"Luis", "Tech", 3, 0};
    yt[1][1] = {"Sofi", "Games", 4, 0};

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int ale = 3000 + rand()%5001;
            yt[i][j].ganancia = yt[i][j].subs * ale;
        }
    }

    string bus;
    cout << "Buscar categoria: ";
    cin >> bus;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(yt[i][j].categoria == bus){
                cout << "Encontrado en [" << i << "][" << j << "]: " << yt[i][j].nombre << endl;
            }
        }
    }

    int total_subs = 0;
    int total_gan = 0;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            total_subs += yt[i][j].subs;
            total_gan += yt[i][j].ganancia;
        }
    }

    cout << "Total subs: " << total_subs << endl;
    cout << "Total ganancia: " << total_gan << endl;

    return 0;
}
