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
            cout << " [1] Soma \n [2] Multiplica��o \n [3] Divis�o \n [4] Pot�ncia \n";
            while (resp != 1 && resp != 2 && resp  != 3 && resp != 4){
                cout<< "Que opera��o voc� deseja realizar: ";
                cin >> resp;
            }
            switch (resp)
            {
                case 1:
                    cout << "A soma � " << n1 + n2 << endl;
                    break;
                case 2:
                    cout << "A multiplica��o � "<< n1 * n2 << endl;
                    break;
                case 3:
                    cout << "A divis�o � " << n1 / n2 << endl;
                    break;
                case 4:
                    base = n1;
                    for (cont =2 ; cont <= n2; cont++){
                        base = n1 *base;
                    }

                    cout << "A pot�ncia � " << base << endl;
        }
    }
    cout << "Obrigado por usar a Calculadora!" << endl;
    }
    return 0;
}
