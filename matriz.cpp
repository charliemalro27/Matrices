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
  for (int i = 0 ; i < nFil ; i++){
    for (int j = 0 ; j < nCol ; j++){
      int numero;
      cin>>numero;
      matriz [i][j] = numero;
    }
  }
}


int main(){
  int array[TAMA];
  int matriz[TAMA][TAMA];
  int matrizsegunda[TAMA][TAMA];

  rellenarMatrizCeros(matriz,10,10);
  rellenarMatrizConCin(matrizsegunda,10,10);

  return 0;
}
