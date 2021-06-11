#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num[10],i;
    for (i  =  0 ; i < 10 ; i++){
        cout << "Informe um número: ";
        cin >> num[i];
    }
    for (i = 10-1; i >= 0; i-- ){
        cout << num[i] << endl;
    }
    return 0;
}
