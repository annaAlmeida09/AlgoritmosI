#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
    ifstream arq;           // handle para ler o arquivo
    char nomearq[100];      // Nome do arquivo onde estão os dados
    char conteudoarq[1000]; // Conteudo do arquivo
    int ano;
    
    // lendo nome do arquivo
    cin.getline(nomearq, 100);
    
    // abrindo o arquivo
    arq.open(nomearq, ifstream::in);
    
    while(!arq.eof())
    {
        // lendo dados do arquivo
        arq.getline(conteudoarq, 1000);
        
        // mostrando as informações
        cout << conteudoarq << endl;
    }
    
    // fechando o arquivo
    arq.close();
    
    return 0;
}