#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[4][4], vet[4],soma = 0, linha = 0 , coluna = 0,i;
    for (coluna = 0; coluna < 4; coluna++){
        for (linha = 0; linha < 4; linha++){
            cout << "Informe um valor: ";
            cin >> mat[linha][coluna];
            soma = soma + mat[linha][coluna];
        }
        vet[coluna]=soma;
        soma = 0;


    }

    for (coluna = 0; coluna < 4; coluna++ ){
        for(linha = 0; linha < 4 ; linha++){
            cout<< mat[linha][coluna]* vet[coluna] << "\t";
        }
        cout << endl;
    }


    return 0;
}
