#include <iostream>
#include <cmath>

using namespace std;

float calc_delta(float a, float b, float c)
{
    float D;
    
    D = pow(b,2) -4*a*c;
    
    return D;
}

int main(){
    
    float coeA, coeB, coeC;
    float delta;
    
    cin >> coeA >> coeB >> coeC;
    
    delta = calc_delta(coeA, coeB, coeC);
    
    cout << "delta = "<< delta << endl;
    
    return 0;
}