#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char linha[100];
    
    cin.getline(linha,100); 
    
    for(int i = 0; i < 100; i++)
    {
        while(linha[i] != 0)
        {
            if(linha[i] != 32)
                cout << linha[i];
            else if(linha[i] == 32)
                cout << endl;
            break;
        }
    }
    return 0;
}