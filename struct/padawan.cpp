#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

struct padawan
{
    char nome[100];  
    int pontos;
};

int main(){
    
    int cadastro;
    int maiorPonto = 0;
    float media = 0;
    char nomeMaior[50];
    padawan alunos[100];
        
    cin >> cadastro;
    
    for (int i = 0; i < cadastro; i++)
    {
        cin.ignore();
        cin.getline(alunos[i].nome, 100);
        
        cin >> alunos[i].pontos;
    }
    
    for (int i = 0; i < cadastro; i++)
    {
        if(alunos[i].pontos > maiorPonto)
        {
            maiorPonto = alunos[i].pontos;
            strcpy(nomeMaior, alunos[i].nome);
        }    
    }
    
    for (int i = 0; i < cadastro; i++)
    {
        media += alunos[i].pontos;
    }

    cout << "Padawan com mais pontos: " << nomeMaior << endl;
    cout << "Pontos: " << maiorPonto << endl;
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media/2.0 << " pontos" << endl;
    
    return 0;
}