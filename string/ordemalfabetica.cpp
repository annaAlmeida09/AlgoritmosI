#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int compara;
    char palavra[3][50];    // 3 palavras com no máximo 50 letras
    char auxiliar[50];      // auxiliar no processo de mudar as palavras de lugar  
    
    
    for(int i = 0; i < 3; i++)
    {
       cin.getline(palavra[i], 50);     // entrada
    }
    
    
    for(int x=0; x<3; x++)
    {
        for (int y = x + 1; y <3; y++)
        {
            compara = strcmp(palavra[x], palavra[y]);   // comparando 
            
            if (compara > 0)
            {
               strcpy(auxiliar, palavra[x]);            // trocando palavras de lugar        
               strcpy(palavra[x], palavra[y]);
               strcpy(palavra[y], auxiliar);
            }
        }
    }
    
    for(int j = 0; j < 3; j++)          // saída 
    {
        cout << palavra[j] << endl;
    }
    
   
    
    return 0;
}