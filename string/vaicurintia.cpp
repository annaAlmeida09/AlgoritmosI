#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char nome[30];
    int idade = 19;
    int n;
    
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        
        cin.ignore();
		cin.getline(nome,30);
        
        cin >> idade;
        
        if(idade >= 18)
        {
            cout << nome << " " << idade << endl;
        }
        
    }
        
            
    return 0;
}