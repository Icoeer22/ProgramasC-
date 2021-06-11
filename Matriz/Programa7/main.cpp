#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    int M[4][6] , N[6][4], linha, coluna, C[4][4], vet[16], mult = 1, soma = 0, cont = 0,i;
    setlocale(LC_ALL, "Portuguese");
    for (coluna = 0;coluna < 6 ; coluna ++ ){
        for(linha = 0; linha < 4; linha ++){
            cout << "Informe um valor para a primeira matriz: ";
            cin >> M[linha][coluna];
        }
    }
    cout<< endl << "-----------------------------------------------------------" << endl;
     for (coluna = 0;coluna < 4 ; coluna ++ ){
        for(linha = 0; linha < 6; linha ++){
            cout << "Informe um valor para a segunda matriz: ";
            cin >> N[linha][coluna];
        }
    }
    cout << endl <<  "-----------------------------------------------------------" << endl;
    for (coluna = 0; coluna < 6; coluna ++){
        for(linha = 0; linha < 4; linha ++){
          for (i = 0 ; i < 6; i ++){
           mult = M[linha][coluna] * N[i][coluna];

           soma += mult;
            vet[cont] = soma;
            mult = 1;

           }

           cont++;
           soma = 0;

        }


    }
    cont = 0;
    for(coluna = 0 ; coluna < 4 ; coluna++){
        for(linha = 0; linha < 4; linha++){
            C[linha][coluna] = vet[cont];
            cont++;
        }
    }
     for(coluna = 0 ; coluna < 4 ; coluna++){
        for(linha = 0; linha < 4; linha++){
            cout << C[linha][coluna] << "\t";

        }

        cout << endl;
    }


    }


