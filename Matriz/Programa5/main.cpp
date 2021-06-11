#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[4][4],linha , coluna, soma = 0;
    for (coluna = 0; coluna < 4; coluna++){
        for (linha = 0; linha < 4; linha++){
            cout << "Informe um valor: ";
            cin >> matriz[linha][coluna];
        }
    }
    for (linha = 0 ; linha <4 ; linha++){
        cout << matriz[linha][linha] << "\t";
        soma += matriz[linha][linha];
    }
    cout << endl << "A soma da diagonal principal é: " << soma;
    return 0;
}
