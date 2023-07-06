#include <iostream>

using namespace std;

int main() {

    float tempos[1000]; 
    float n; 
    int i = 0; 

    //entrada de tempos salvando em um vetor
    cin >> n;

    while(n!=-1) { 
        tempos[i] = n;
        i++;
        cin >> n;
    }

    cout << "Classificacao:" << endl;

    for(int k = 0;  k< i; k++) 
    {
        float menorTempo = 10000;
        int posicao = -1;
        
        for(int j = 0; j < i; j ++) 
        {
            if (tempos[j] < menorTempo) 
            {
                menorTempo = tempos[j];
                posicao = j;
            }
        }

        cout << posicao << endl;
        tempos[posicao] = 1000; 
    }

    return 0;
}