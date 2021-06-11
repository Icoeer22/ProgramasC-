#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matrizA[3][5], matrizB[3][5], matrizC[3][5], linha, coluna;
    for (coluna = 0; coluna < 5 ; coluna++){
        for (linha =0 ; linha<3 ; linha++){
            cout <<"Informe um valor para matriz A: ";
            cin>> matrizA[linha][coluna];
        }
    }
    cout << "----------------------------------------------------" << endl;
     for (linha = 0; linha < 3 ; linha++){
        for (coluna =0 ; coluna<5 ; coluna++){
            cout <<"Informe um valor para matriz B: ";
            cin>> matrizB[linha][coluna];
        }
    }
     for (linha = 0; linha < 3 ; linha++){
        for (coluna =0 ; coluna<5 ; coluna++){
            matrizC[linha][coluna] = matrizA[linha][coluna] + matrizB[linha][coluna];
        }
    }
    cout << "----------------------------------------------------" << endl << "Matriz C" << endl;
    for (linha = 0; linha < 3; linha++){
        for (coluna =0 ; coluna<5 ; coluna++){
            cout << matrizC[linha][coluna] << "\t";
        }
        cout << endl;
    }
    cout << endl << "----------------------------------------------------" << endl << "Matriz C linha 2" << endl;
    for (coluna = 0; coluna< 5 ; coluna++){
        cout << matrizC[2][coluna] << "\t";
    }
    cout <<endl <<"----------------------------------------------------" << endl << "Matriz C coluna 3" << endl;
    for (linha = 0; linha < 3 ; linha++){
        cout << matrizC[linha][3] << endl;
    }

    return 0;
}
