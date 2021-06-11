#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[5][5], soma =0 , coluna,linha;

    for (linha =0 ; linha < 5 ; linha++){
        for (coluna = 0 ; coluna < 5 ; coluna++){
            cout << "Informe um valor para a matriz: ";
            cin >>  mat[linha][coluna];
            soma += mat[linha][coluna];
        }
    }
    cout << " A soma de todos os números da matriz é: " << soma;
    return 0;
}
