#include <iostream>
#include "ConsultarVida.cpp"


using namespace std;

void atacar(int *vida, int puntos){
    vida = vida - 20;
    cout<<"Has recibido: "<<20<<" de daño"<<endl;
    cout<<"Tienes "<<puntos<<" puntos";
    
}

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

    ConsultarVida(vida);
    curar(&vida, puntos);
    atacar(&vida, puntos);
}