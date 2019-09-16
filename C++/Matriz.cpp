#include <iostream>
#include <string>

using namespace std;

int main(){

    //tamaños de la matriz
    int n,m,auxiliar=0;

    do{
        cout << "Ingrese el tamaño de la fila: "; cin>>n;
    }while(n<2);
    //Se condicionan las columnas para que sean del mismo tamaño de las filas 

    do{
        cout << "Ingrese el tamaño de la columna: "; cin >>m;
    }while(m!=n);

    //definición de la matriz
    double matriz[n][m];

    //Se ingresan los valores a determinar
    cout << "Matriz a determinar\n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << "Posición ["<<i+1<<"]["<<j+1<<"]: ";
            cin >> matriz[i][j]; 
        }        
    }

    //Verificado si es o no es identidad
    for(int i = 0; i<n; i++){
          for(int j = 0; j<m; j++){
               if((matriz[i][j] != 1) && (matriz[i][j])){
                 auxiliar=1;
                 break;
               }
          }
    }

    if(auxiliar==0){
      cout<<"La matriz es identidad (cero en su diagonal).\n";
    }

    else
        cout << "La matriz no es identidad(no hay ceros en su diagonal).\n ";
    
    
   //Impresión de la matriz

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout << "\n ";
    }
    
    cin.ignore();
    cin.get();
    return 0;
}