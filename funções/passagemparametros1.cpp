#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void media(int x, int y, float &m){
    
   m = sqrt(x*y);
}

int main(){
    
    int n1;
    int n2;
    float med;
    
    cin >> n1 >> n2;
    
    media(n1,n2,med);
    
    cout << fixed << setprecision(2);
    cout << "Media: " << med << endl;
    
    return 0;
}