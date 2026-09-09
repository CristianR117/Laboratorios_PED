#include <iostream>

using namespace std;

void atacar(int *vida, int puntos){
    vida = vida - 20;
    cout<<"Has recibido: "<<20<<" de daño"<<endl;
    cout<<"Tienes "<<puntos<<" puntos";
    
}


int main(){
    int vida = 100;
    int puntos = 0;
    //int *puntos = &vida;

    atacar(&vida, puntos);

}