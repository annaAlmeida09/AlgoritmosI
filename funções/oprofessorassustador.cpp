#include <iostream>
#include <iomanip>

using namespace std;

float media(int notas[], int nAlunos){
    
    float med = 0;
    
    for(int i=0; i < nAlunos; i++)
    {
        cin >> notas[i];
    }
    
    for(int i = 0; i < nAlunos; i++)
    {
        med += notas[i];
    }
    
    med = med/nAlunos;
    
    return med;
}


int main(){
    
    int alunos;
    int notasSala[100];
    float mediaSala;
    
    cin >> alunos;
    
    mediaSala = media(notasSala, alunos);
    
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << mediaSala << endl;
    
    
    return 0;
}