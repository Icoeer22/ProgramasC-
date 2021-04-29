#include <iostream>

using namespace std;

int main()
{
    int soma , num = 100;
    while (num <=200){
        if (num != 100){
           cout << " + " << num ;
        }
        else{
        cout << num;
        }
        soma = num +soma;
        num ++;

    }
    cout << " = " <<soma ;
    return 0;
}
