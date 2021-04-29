#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int base , expoente, result, cont;
    cout << "Informe a Base: ";
    cin >> base;
    cout << "Informe o Expoente: ";
    cin >> expoente;
    result = base;
    for (cont = 2; cont <=expoente ;cont +=1){
        result =  base * result;
    }
    cout << result;
    return 0;
}
