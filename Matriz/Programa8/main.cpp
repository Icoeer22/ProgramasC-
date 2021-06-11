#include <iostream>
#include <locale.h>
using namespace std;
#include <time.h>
#include <iomanip>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   float mat[4][4], maior, menor;
   int linha,coluna,  l= 0 , c = 0, colu;
   srand(time(NULL));
   for (linha = 0 ; linha < 4 ; linha ++){
    for (coluna = 0; coluna < 4 ; coluna++){
        mat[linha][coluna] = -100 + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(100-(-100))));

        if ( linha == 0 && coluna == 0){
            maior = mat[linha][coluna];
            l = linha;
            c = coluna;
        }
        else if (mat[linha][coluna]>= maior){
                maior = mat[linha][coluna];
                l = linha;
                c = coluna;



        }
    }

   }
   for (coluna = 0 ; coluna < 4 ; coluna++){
    if (coluna == 0 ){
        menor = mat[l][coluna];
        colu = coluna;

    }
    else if (mat[l][coluna]<= menor){
        menor = mat[l][coluna];
        colu = coluna;
    }
   }


   for (linha = 0 ; linha < 4; linha++){
    for (coluna = 0; coluna <4 ; coluna++){
        cout << fixed << setprecision(2) <<mat[linha][coluna] << "\t";
    }
    cout << endl;
   }
   cout << endl << "O minimax é "<< menor << " que está na linha " << l + 1 << " e na coluna " << colu + 1 << ".";

  }

