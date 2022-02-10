#include <iostream>
using namespace std;

int const TAMA = 10;

void rellenarMatrizCeros (int matriz [TAMA][TAMA], int nFil, int nCol){
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
      matriz [i][j] = 0;
    }
  }
}

void rellenarMatrizConCin (int matriz [TAMA][TAMA], int nFil, int nCol){
  int numero;
  cin>>numero;
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
      matriz [i][j] = numero;
    }
  }
}

void rellenarMatrizConXO (string matriz [TAMA][TAMA], int nFil, int nCol){
  string x="X";
  string o="O";
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
        matriz[i][j] =o;
        matriz[i%2][j%2] =x;
    }
  }
}
void ImprimirMatriz (int matriz [TAMA][TAMA], int nFil, int nCol){
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
      cout<<matriz[i][i]<<endl;
    }
  }
}

void ImprimirMatrizS (string matriz [TAMA][TAMA], int nFil, int nCol){
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
      cout<<matriz[i][i]<<endl;
    }
  }
}


int main(){
  int array[TAMA];
  int matriz[TAMA][TAMA];
  int matrizsegunda[TAMA][TAMA];
  string matrizXO[TAMA][TAMA];

  rellenarMatrizCeros(matriz,10,10);
  rellenarMatrizConCin(matrizsegunda,10,10);
  rellenarMatrizConXO(matrizXO,10,10);
  ImprimirMatriz(matriz,10,10);
  ImprimirMatriz(matrizsegunda,10,10);
  ImprimirMatrizS(matrizXO,10,10);

  return 0;
}
