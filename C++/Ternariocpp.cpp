#include <iostream>

using namespace std;

int main(){

    //Definicion de la primera variable
    string corte = "Alto";
    //El operador ternario viene dado por el signo de interrogación
    int nota = (corte == "bajo")? 2: 5;
    //La impresión nos arroja el 5 puesto que el ternario funciona como un if
    //Es decir, si es bajo pone 2 y si no coloque 5
    cout << nota;

    //Evita que la consola se cierre
    cin.ignore();
    cin.get();

    return 2019;
}
