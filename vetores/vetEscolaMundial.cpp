#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    float notas[50];
    float media = 0;
    int alunos;
    int acimaMedia = 0;
    int abaixoMedia =0;
    
    cin >> alunos;
    
    for(int i=0; i<alunos; i++)
    {
        cin >> notas[i];
        media += notas[i];
    }
    
    media = media/alunos;
    
    for(int i=0; i<alunos; i++)
    {
        if(notas[i] > media)
            acimaMedia++;
        else if (notas[i] < media)
            abaixoMedia++;
    }
    
    cout << fixed << setprecision(2);
    cout << "Media da turma: " << media << endl;
    cout << "Alunos com nota acima da media: " << acimaMedia << endl;
    cout << "Alunos com nota abaixo da media: " << abaixoMedia << endl;
    
    return 0;
}