#include <iostream>
#include <string>
using namespace std;

int main(){

    //Tamaño de los arreglos o vectores
    int n;
    //Se pide el tamaño y se guarda
    //restriccion
    do{
        cout << "Digite un tamaño para los arreglos: "; cin >> n;
    }while (n<1);
    //Definicion de arreglos
    double corriente[n], resistencia[n], voltios[n];

    //llenado de arreglos
    cout <<"\n\t***Llenar los datos para la Corriente***\n\n";
    for (int i = 0; i<n; i++){

        cout << "Valor "<< (i+1)<<  ": "; cin >>corriente[i];
    }

    cout <<"\n\t***Llenar los datos para la Resistencia***\n\n";
    for (int i = 0; i<n; i++){

        cout << "Valor "<< (i+1)<<  ": "; cin >>resistencia[i];
    }

    //Se llenan los datos para los voltios
    for (int i = 0; i<n; i++){

        voltios[i] = resistencia[i]*corriente[i];
    }                        

    //Impresion de los datos
    cout << "\n\n\t***OBSERVACIÓN DE LOS DATOS***\n\n";

    cout <<"\nCORRIENTE\tRESISTENCIA\t\tVOLTIOS\n";

    //Corriente
    for (int i = 0; i<n; i++){

        cout << "Valor "<< (i+1)<< ": "<< corriente[i]<<endl;
        cout << "\t\tValor "<< (i+1)<< ": "<< resistencia[i]<<endl;
        cout << "\t\t\t\t\tValor "<< (i+1)<< ": "<< voltios[i]<<endl;
    }    

    cin.ignore();
    cin.get();

    return 2019;
}