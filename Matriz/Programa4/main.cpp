#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[5][5], linha, coluna;
    for ( linha= 0 ; linha < 5 ; linha++){
        for (coluna = 0; coluna < 5; coluna++){
            if (linha > coluna){
                matriz[linha][coluna] = 1;
            }
            else{
                matriz[linha][coluna] = 0;
            }
        }

    }
     for (linha = 0 ; linha < 5 ; linha++){
        for (coluna = 0; coluna < 5; coluna++){
            cout<< matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }
    return 0;
}
