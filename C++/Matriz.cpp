#include <iostream>
#include <string>

using namespace std;

int main(){

    //tamaños de la matriz
    int n,m;

    cout << "Ingrese el tamaño de la fila: "; cin>>n;

    do{
        cout << "Ingrese el tamaño de la columna: "; cin >>m;
    }while(m!=n);

    double matriz[n][m];

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << "Posición ["<<i+1<<"]["<<j+1<<"]: ";cin >> matriz[i][j]; 
        }
    }
    
    int cont = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){

            if (i==j and matriz[i][j]==1){
                cont = 1;
            }
            if(i!=j and matriz[i][j]!=0){
                cont = 2;
            }
        }
    }

    if (cont ==1){
        cout << "La matriz es una matriz identidad";
    }

    if(cont == 2){
        cout << "No es una matriz identidad";
    }

    cin.ignore();
    cin.get();
    return 2019;
}