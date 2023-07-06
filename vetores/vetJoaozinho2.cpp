#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int n;
    int i;
    int X[100];  
    int Y[100];
    char OP[100];
    float result[100];
  

    cin >> n;

    for(i=0; i<n; i++)
        cin >> X[i];
    for(i=0; i<n; i++)
        cin >> Y[i];
    for(i=0; i<n; i++)
        cin >> OP[i];
    for(i=0; i<n; i++)
    {
        switch(OP[i])
        {
            case '+':
                result[i] = X[i] + Y[i];
                break;
            case '-':
                result[i] = X[i] - Y[i];
                break;
            case '*':
                result[i] = X[i] * Y[i];
                break;
            case '/':
                cout << fixed << setprecision(2);
                result[i] = float(X[i]) / float(Y[i]);
                break;
            default:
                break;
        }
        cout << X[i] << " " << OP[i] << " " << Y[i] << " = " << result[i] << endl;
    }
    return 0;
}