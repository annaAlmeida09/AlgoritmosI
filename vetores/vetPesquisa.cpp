#include <iostream>

using namespace std;

int main (){
    
    int vector[100];
    int number = 1;
    int i = 0;
    int x;
    int j = 0;

    while (number != 0)
    {
        cin >> number;
        
        vector[i] = number;
        i++;   
    }
    
    cin >> x;
    
    for (j = 0; j < i; j++)
    {
        if (x == 0)
        {
            cout << "Elemento 0 nao foi encontrado" << endl;
            j = i;
        }
        else if (vector[j] == x)
        {
            cout << "Elemento " << x << " encontrado na posicao " << j << endl;
            j = i;
        }
        else if (vector[j] != x && j == (i-1))
        {
            cout << "Elemento " << x << " nao foi encontrado"<< endl;
            j = i; 
        }
    }
    return 0;
}