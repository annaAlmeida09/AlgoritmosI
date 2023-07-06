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

int nAbaixo(int notas[], int nAlunos, float media){
    
    int a = 0;
    
    for(int i =0; i < nAlunos; i++){
        
        if(notas[i] < media)
            a++;
    }
    
    return a;
}

int nAcima(int notas[], int nAlunos, float media){
    
    int a = 0;
    
    for(int i =0; i < nAlunos; i++){
        
        if(notas[i] > media)
            a++;
    }
    
    return a;
}

int main(){
    
    int alunos;
    int notasSala[100];
    int abaixo;
    int acima;
    float mediaSala;
    
    cin >> alunos;
    
    mediaSala = media(notasSala, alunos);
    abaixo = nAbaixo(notasSala, alunos, mediaSala);
    acima = nAcima(notasSala, alunos, mediaSala);
    
    
    cout << fixed << setprecision(2);
    cout << "Media da turma = " << mediaSala << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    cout << "Alunos com nota acima da media: "<< acima << endl;
    
    
    return 0;
}