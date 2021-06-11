#include <iostream>

using namespace std;

int main()
{
    int matriz[5][5], linha,coluna;
    for (coluna = 0 ; coluna < 5 ; coluna++){
        for (linha = 0; linha < 5 ; linha++){
            if (linha == coluna){
                matriz[linha][coluna] = 1;
            }
            else{
                matriz[linha][coluna] = 0;
            }
        }
    }
    for (coluna = 0 ; coluna < 5 ; coluna++){
        for (linha = 0; linha < 5 ; linha++){
            cout << matriz[linha][coluna]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
