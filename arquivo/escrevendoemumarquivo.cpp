#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main ()
{
    ofstream arqW;          // handle para escrever o arquivo
    ifstream arqR;          // handle para ler o arquivo
    char nomearq[100];      // Nome do arquivo onde estão os dados
    char conteudoarq[1000]; // Conteudo para escrever
    char conteudo[1000];    // Conteudo lido
    int ano;
    
    // lendo nome do arquivo
    cin.getline(nomearq, 100);
    cin.getline(conteudoarq,100);
    
    // abrindo o arquivo
    arqW.open(nomearq, ifstream::in);
    arqW << conteudoarq << endl;
    arqW.close();
    
    
    arqR.open(nomearq, ifstream::in);
    
     while(!arqR.eof())
    {
        // lendo dados do arquivo
        arqR.getline(conteudo, 1000);
        
        // mostrando as informações
        cout << conteudo << endl;
    }
    
    // fechando o arquivo
    arqR.close();
    
    return 0;
}