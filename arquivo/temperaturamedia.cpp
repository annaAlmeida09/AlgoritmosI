#include <iostream>
#include <fstream>
#include <cstring>
#include <iomanip>

using namespace std;

int main(){

    ifstream arq;
    char nomearq[100];      // Nome do arquivo onde estão os dados
    float conteudoarq;      // Conteudo do arquivo
    float media = 0;
    int linhas = 0;
    
    cin.getline(nomearq, 100);
    
    arq.open(nomearq, ifstream::in);
    
    while(!arq.eof())
    {
        arq >> conteudoarq;
        media += conteudoarq;
        linhas++;
    }
    
    arq.close();
    
    media = media/linhas;
    
    cout << fixed << setprecision(1);
    cout << "Temperatura media: "<< media << " graus" << endl;
    
    return 0;
}