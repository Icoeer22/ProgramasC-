#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1 =1 , n2 =1  , result, cont;
    cout << n1 << " -> " << n2;
    for (cont = 1 ; cont <= 18 ; cont+=1){
        result = n1 + n2;
        cout << " -> " << result;
        n1 = n2;
        n2 = result;

    }

    return 0;
}
