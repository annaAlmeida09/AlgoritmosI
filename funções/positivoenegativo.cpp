#include <iostream>
#include <cstring>

using namespace std;

int sinal(int n) 
{
    int sin;
    
    if(n == 0)
        sin = 0;
    else if (n > 0)
        sin = 1;
    else if (n < 0)
        sin = -1;
        
    return sin;
}
int main()
{
    int x;
    int sinalmain;
    
    cin >> x;
    
    sinalmain = sinal(x);
    
    if (sinalmain == 0)
        cout << "Zero" << endl;
    else if (sinalmain > 0)
        cout << "Positivo" << endl;
    else if (sinalmain < 0)
        cout << "Negativo" << endl;
        
    return 0;
}