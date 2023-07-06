#include <iostream>

using namespace std;

int calc_a(int x)
{
    int calc;
    calc = 2*x*x + 3*x - 1;
    return calc;
}
int calc_b(int x)
{
    int calc;
    calc = x*x*x;
    return calc;
}
int calc_c(int y)
{
    int calc;
    calc = y*y*y;
    return calc;
}
int main()
{
    int a,b,c,x,y;
    
    cin >> x >> y;
    
    a = calc_a(x);
    b = calc_b(x);
    c = calc_c(y);
    
    cout << "a = " << a << endl;
    cout << "b = "<< b << endl;
    cout << "c = "<< c << endl;
    
    return 0;
}