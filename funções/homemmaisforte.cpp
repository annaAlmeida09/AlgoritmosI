#include <iostream>
#include <cstring>

using namespace std;

struct dados
{
    char nome[100];
    int n1;
    int n2;
    int n3;
    int n4; 
};

int strongest(dados atletas[], int nAtletas) {
    
    int posicao = 0;
    int vencedor;
    int aux = 0;
    int pontos;

    for(posicao = 0; posicao < nAtletas; posicao++){
        
        pontos = atletas[posicao].n1 + atletas[posicao].n2 + atletas[posicao].n3 + atletas[posicao].n4;
        
        if(pontos > aux)
        {
            aux = pontos;
            vencedor = posicao;
        }
    }
    
    return vencedor;
}


int main(){
    
    int nCompetidores;
    int vencedor;
    dados competidores[100];
    
    cin >> nCompetidores;
    
    for (int i = 0; i < nCompetidores; i++)
    {
        cin.ignore();
        cin.getline(competidores[i].nome, 100);
        
        cin >> competidores[i].n1 >> competidores[i].n2 >> competidores[i].n3 >> competidores[i].n4;
    }
    
    vencedor = strongest(competidores, nCompetidores);
    
    cout << "Vencedor: " << competidores[vencedor].nome << endl;
    
    return 0;
}