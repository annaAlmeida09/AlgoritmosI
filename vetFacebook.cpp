#include <iostream>
using namespace std;

int main(){
    
    int users;
    int friends[1000];
    int moreFriends = 0;
    int lessFriends;
    
    cin >> users; 
    
    for (int i = 0; i < users; i++)
    {
        cin >> friends[i];
        if (i == 0)
            lessFriends = friends[i];
        else if (friends[i] >= moreFriends)
            moreFriends = friends[i];
        else if (friends[i] <= lessFriends)
            lessFriends = friends[i];
    }
    
    cout << "Menor numero de contatos: " << lessFriends << endl;
    cout << "Maior numero de contatos: " << moreFriends << endl;
    
    return 0;
}