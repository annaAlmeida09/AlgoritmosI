#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int alunos;
    float notas;
    char nome[20];
    
    
    cin >> alunos;
    
    for (int i = 0; i < alunos; i++)
    {
        
        float media = 0.00;
        float n1 = 0;
        float n2 = 0;
        float n3 = 0;
        float n4 = 0;
        
        cin.ignore();
        cin.getline(nome,20);
        
        cin >> n1 >> n2 >> n3 >> n4;
        
        media = (n1 + 2*n2 + 3*n3 + 4*n4)/10;
            
        cout << fixed << setprecision(2);
        cout << nome << ": " << media << endl;
    }
    
    
    return 0;
}