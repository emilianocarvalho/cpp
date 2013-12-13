#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char quit;
    int num;
    float i, j;
    num = 0;
    i = 0;
    j = 0;
    cout << "Números pares e no intervalo 20 - 50." << endl;

    quit = '\0';
    while (quit != 's')
    {
        cout << "Digite um número" << endl;
        cin >> num;
        i++;
        if ( (num % 2 == 0) && ((num >= 20) && (num <= 50)) ) {
           j++;
           cout << "Na condição " << num << " j = "<< j<< endl;
        };
        cout << "Sair? (s/n)" << endl;
        cin >> quit;
    }
    cout << "Números pares e no intervalo 20 - 50." << endl;
    cout << "Total de valores digitados: "<<i<<endl;
    cout << "Total de valores intervalo: "<<j<<endl;
    cout << "% dos valores pares e no intervalo 20 - 50: "<< (j/i)*100 << "%"<<endl;
    //return 0;
    //system("PAUSE"); utilizada somente no windows
    return EXIT_SUCCESS;
}
