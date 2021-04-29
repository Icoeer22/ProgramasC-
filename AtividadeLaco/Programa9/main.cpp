#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float n1 = 1 , n2 = 1, base;
    int resp, cont, exp;
    while (n1 != 0 && n2 != 0){
        cout << "Informe o primeiro valor: ";
        cin >> n1;
        cout << "Informe o segundo valor: ";
        cin >> n2;
        if (n1 != 0 && n2 != 0){
            cout << " [1] Soma \n [2] Multiplicação \n [3] Divisão \n [4] Potência \n";
            while (resp != 1 && resp != 2 && resp  != 3 && resp != 4){
                cout<< "Que operação você deseja realizar: ";
                cin >> resp;
            }
            switch (resp)
            {
                case 1:
                    cout << "A soma é " << n1 + n2 << endl;
                    break;
                case 2:
                    cout << "A multiplicação é "<< n1 * n2 << endl;
                    break;
                case 3:
                    cout << "A divisão é " << n1 / n2 << endl;
                    break;
                case 4:
                    base = n1;
                    for (cont =2 ; cont <= n2; cont++){
                        base = n1 *base;
                    }

                    cout << "A potência é " << base << endl;
        }
    }
    cout << "Obrigado por usar a Calculadora!" << endl;
    }
    return 0;
}
