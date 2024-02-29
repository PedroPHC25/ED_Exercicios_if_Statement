#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // EXEMPLOS DE USO:
    // - Colocando qualquer valor negativo ou 0 nos parâmetros, o código retorna "Invalid value(s)" (valor(es) inválido(s))
    // - Colocando valores válidos, temos as possibilidades (peso, altura):
    // -- (40, 1.70): Very underweight (muito abaixo do peso)
    // -- (50, 1.70): Underweight (abaixo do peso)
    // -- (60, 1.70): Normal weight (peso normal)
    // -- (80, 1.70): Overweight (acima do peso)
    // -- (90, 1.70): Obesity (obesidade)
    // -- (110, 1.70): Severe obesity (obesidade severa)
    // -- (120, 1.70): Morbid obesity (obesidade mórbida)

    // Peso e altura
    float weight = 120;
    float height = 1.70;

    // Calculando o IMC (BMI, em inglês)
    float bmi = (weight/(height * height));

    // Checando se a altura e o peso são positivos
    if (weight > 0 && height > 0)
    {
        cout << "Your BMI is: " << bmi << endl << "Classification: ";
    }
    else
    {
        cout << "Invalid value(s)";
    }

    // Classificando o IMC
    if (bmi > 0 && bmi < 17)
    {
        cout << "Very underweight";
    }
    else if (bmi >= 17 && bmi < 18.5)
    {
        cout << "Underweight";
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout << "Normal weight";
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "Overweight";
    }
    else if (bmi >= 30 && bmi < 35)
    {
        cout << "Obesity";
    }
    else if (bmi >= 35 && bmi < 40)
    {
        cout << "Severe obesity";
    }
    else if (bmi >= 40)
    {
        cout << "Morbid obesity";
    }

    return 0;
}