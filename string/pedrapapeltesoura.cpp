#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    int t;
    char player1[10];
    char player2[10];
    
    cin >> t;
    cin.ignore();
    
    for(int i = 0; i < t; i++)
    {
        
        cin.getline(player1, 10);
        cin.getline(player2, 10);
        
        if(strcmp(player1, player2) == 0)
            cout << "Empate" << endl;
        else if (strcmp(player1, "tesoura") == 0 && strcmp(player2, "pedra") == 0)
            cout << "Jogador B" << endl;
        else if (strcmp(player1, "tesoura") == 0 && strcmp(player2, "papel") == 0)
            cout << "Jogador A" << endl;
        else if (strcmp(player1, "pedra") == 0 && strcmp(player2, "papel") == 0)
            cout << "Jogador B" << endl;
        else if (strcmp(player1, "pedra") == 0 && strcmp(player2, "tesoura") == 0)
            cout << "Jogador A" << endl;
        else if (strcmp(player1, "papel") == 0 && strcmp(player2, "pedra") == 0)
            cout << "Jogador A" << endl;
        else if (strcmp(player1, "papel") == 0 && strcmp(player2, "tesoura") == 0)
            cout << "Jogador B" << endl;
    }
    
    
    return 0;
}
