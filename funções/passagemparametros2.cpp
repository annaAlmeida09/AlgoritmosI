#include <iostream>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K) {
    
    C = (5.0*(F-32.0))/9.0;
    K = C + 273.00;
    
}

int main(){
    
    float fahrenheit;
    float celsius;
    float kelvin;
    
    cin >> fahrenheit;
    
    converte(fahrenheit, celsius, kelvin);
    
    cout << fixed << setprecision(2);
    cout << "Celsius: " << celsius << endl;
    cout << "Kelvin: " << kelvin << endl;
    
    
    
    return 0;
}