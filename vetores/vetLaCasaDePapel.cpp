#include <iostream>

using namespace std;

int main()
{
    int votos;
    int nota[1000];
    int likes = 0;
    int deslikes = 0; 
     
    cin >> votos;
    
    for (int i = 0; i < votos; i++)
    {
        cin >> nota[i];
        if (nota[i] == +1)
            likes++;
        else if (nota[i] == -1)
            deslikes++;
    }
    
    if (likes == deslikes)
        cout << "Deu empate" << endl;
    else if (likes < deslikes)
        cout << "A maioria nao gostou" << endl;
    else if (likes > deslikes)
        cout << "A maioria gostou" << endl;

    return 0;    
}
