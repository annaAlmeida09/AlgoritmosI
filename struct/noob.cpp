#include <iostream>
#include <iomanip>

using namespace std;

struct aluno 
{
    int matricula;
    float nota1;
    float nota2;
};

int main()
{
    aluno x;
    float media;
    
    cin >> x.matricula >> x.nota1 >> x.nota2;
    
    media = (2*x.nota1 + 3*x.nota2)/5;
    
    cout << fixed << setprecision(2);
    cout << "Matricula do aluno: " << x.matricula << endl;
    cout << "Nota da primeira prova: " << x.nota1 << endl;
    cout << "Nota da segunda prova: "  << x.nota2 << endl;
    cout << "Media: " << media << endl;
    
}