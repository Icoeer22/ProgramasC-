#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont;
    for(cont = 1; cont <= 30; cont ++ ){
        cout << endl << "Não vou colar na prova!";

    }
    return 0;
}
