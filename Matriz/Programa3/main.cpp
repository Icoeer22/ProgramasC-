#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int matriz[5][5], linha , coluna, matriz2[5][5];
    for (coluna = 0 ; coluna <5 ; coluna++){
        for(linha = 0; linha < 5 ; linha++){
            cout << "Informe um número: ";
            cin >> matriz[linha][coluna];
        }
    }
    for (coluna = 0 ; coluna <5 ; coluna++){
        for(linha = 0; linha < 5 ; linha++){
            if(matriz[linha][coluna] > 100 ){
               matriz2[linha][coluna] = 0;
            }
            else{
                matriz2[linha][coluna] = matriz[linha][coluna];
            }
        }
    }
    cout <<endl <<"Matriz normal: " << endl;
    for (coluna = 0 ; coluna <5 ; coluna++){
        for(linha = 0; linha < 5 ; linha++){
            cout << matriz[linha][coluna]<< "\t";
        }
        cout<< endl;
    }
    cout <<endl << "Matriz normal: " << endl;
     for (coluna = 0 ; coluna <5 ; coluna++){
        for(linha = 0; linha < 5 ; linha++){
            cout << matriz2[linha][coluna]<< "\t";
        }
        cout<< endl;
    }
    return 0;
}
