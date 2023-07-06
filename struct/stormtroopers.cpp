#include <iostream>

using namespace std;

int main () 
{
    int id = 1;
    float im;
    float fa;
    
    float aux = 0;
    float media = 0;
    int idMax = 0;
    
    while (id != 0)
    {
        cin >> id;
        cin >> im;
        cin >> fa;
        
        media = (im + fa)/2;
        
        if (media > aux)
            {
                aux = media;
                idMax = id;
            }
    }

    cout << "Stormtrooper escolhido: " << idMax << endl;
    cout << "GA = " << aux << endl;
    
    return 0;
}