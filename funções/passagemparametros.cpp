#include <iostream>

using namespace std;

void troca(int &X, int &Y) {
    int aux = Y;
    Y = X;
    X = aux;
}

int main(){
    
    int n1;
    int n2;
    
    cin >> n1 >> n2;
    
    troca(n1, n2);
    
    cout << n1 << " " << n2 << endl;
    
    
    return 0;
}