#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int matriz[5][5], coluna, linha;
    for (coluna = 0; coluna < 5; coluna++){
        for (linha = 0 ; linha < 5; linha++){
            matriz[linha][coluna] = 1;
        }

    }
    for (coluna = 0; coluna < 5; coluna++){
        for (linha = 0 ; linha < 5; linha++){
            cout << matriz[linha][coluna] << "\t";
        }
     cout << endl;
    }
    return 0;
}
