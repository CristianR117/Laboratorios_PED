#include <iostream>
using namespace std;

void curar(int *vida, int puntos) {
    *vida += puntos;

    if (*vida > 100) {
        *vida = 100;
    }

    cout << "Vida: " << *vida << endl;
}

int main(){
    int vida = 50;
    int puntos = 20;

    curar(&vida, puntos);
}