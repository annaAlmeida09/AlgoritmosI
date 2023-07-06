#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
    float D;
    int real;
    
    D = pow(b,2) -4*a*c;
    
    if(D >= 0)
    {
        real = 1;
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        
    }
    else if (D < 0)
        real = 0;
        
    return real;
}

int main(){
    
    float coeA, coeB, coeC;
    float delta;
    float raiz1, raiz2;
    int possivel;
    
    
    cin >> coeA >> coeB >> coeC;
    
    possivel = calc_raizes(coeA, coeB, coeC, raiz1, raiz2);
    
    
    if (possivel == 1)
    {
        if(raiz1 == raiz2)
            cout << "x = " << raiz1 << endl;
        else if(raiz1 > raiz2)
        {
            cout << fixed << setprecision(2);
            cout << "x1 = " << raiz2 << endl;
            cout << "x2 = " << raiz1 << endl;
        }
        else if(raiz1 < raiz2)
        {
            cout << fixed << setprecision(2);
            cout << "x1 = " << raiz1 << endl;
            cout << "x2 = " << raiz2 << endl;
        }
    }
    else if (possivel == 0)
    {
        cout << "Nao ha raizes reais" << endl;
    }
    
    
    return 0;
}
