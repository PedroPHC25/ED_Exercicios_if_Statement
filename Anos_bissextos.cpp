#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // EXEMPLOS DE USO:
    // - 2024 é divisível por 4 e não é por 100, se encaixando na 1° restrição. Assim, é bissexto.
    // - 2100 é divisível por 4, mas é por 100, e também não é por 400, não se encaixando em nenhuma restrição.
    //   Dessa forma, não é bissexto.
    // - 2005 não é divisível por nenhum dos valores especificados. Desse modo, não é bissexto.
    // - 2000 é divisível por 4, mas é por 100. No entanto, é divisível por 400. Portanto, se encaixa na 2°
    //   restrição e é bissexto.

    // INSIRA AQUI O ANO
    int year = 2024;

    // Checando as condições para ser bissexto
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << "Yes, the entered year is a leap year.";
    }
    else
    {
        cout << "No, the entered year isn't a leap year.";
    }

    return 0;
}