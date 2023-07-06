#include <iostream>
#include <cstring>

using namespace std;

struct cavaleiro 
{
    char nome[50];
    int base;
};

int main()
{
    
    int cadastro;
    char busca[50];
    cavaleiro jedi[50];
    
    cin >> cadastro;
    
    for(int i = 0; i < cadastro; i++)
    {
        cin.ignore();
        cin.getline(jedi[i].nome, 50);
        cin >> jedi[i].base;
    }
    
    cin.ignore();
    cin.getline(busca,50);
    
    for(int i = 0; i < cadastro; i++)
    {
        if(strcmp(busca, jedi[i].nome) == 0)
        {
            cout << "Este cavaleiro esta na base " << jedi[i].base << endl;
            break;
        }
        else if(i = cadastro - 1 && strcmp(busca, jedi[i].nome) != 0)
            cout << "Este cavaleiro nao esta cadastrado" << endl;
    }
    
    return 0;
}