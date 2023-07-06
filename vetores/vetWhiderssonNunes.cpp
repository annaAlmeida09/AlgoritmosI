#include <iostream>
using namespace std;

int main(){
    
    int videos;
    float views[1000];
    int moreTen=0;
    int lessTen=0;
    
    cin >> videos;
    
    for (int i = 0; i < videos; i++)
    {
       cin >> views[i];
        if (views[i] < 10000000)
            lessTen++;
        else if (views[i] > 10000000)
            moreTen++;
    }
    
    cout << moreTen << " video(s) com mais de 10M views" << endl;
    cout << lessTen << " video(s) com menos de 10M views" << endl;
    
    
    
    return 0;
}