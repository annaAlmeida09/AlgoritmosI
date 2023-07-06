#include <iostream>
#include <iomanip>

using namespace std;

float ideal(float h, char sexo) 
{
    float peso;
    
    if (sexo == 'M')
        peso = 72.7 * h - 58;
    else if (sexo == 'F')
        peso = 62.1 * h - 44.7;
    
    return peso;
}

int main()
{
    float altura;
    float pesoIdeal;
    char genero;
    
    cin >> altura;
    cin >> genero;
    
    pesoIdeal = ideal(altura, genero);
    
    cout << fixed << setprecision(2);
    cout << "Peso ideal = " << pesoIdeal << " kg" << endl;
    
    
    return 0;
}