#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float mat[1][1];
    float determinante;
    int l, c;
    
    for(l = 0; l < 2; l++)
	{
	    for(c = 0; c < 2; c++)
	    {
	        cin >> mat[l][c];
	    }
	}
    
    determinante = mat[0][0]*mat[0][1] - mat[0][1]*mat[1][0];
    
    cout << fixed << setprecision(4);
    cout << "M = [" << mat[0][0] << mat[0][1] << " ; " << mat[1][0] << mat[1][1] << "]" << endl;
	cout << "Determinante de M = " << determinante << endl; 
	cout << "Transposta de M = [" << mat[0][0] << mat[1][0] << " ; " << mat[0][1] << mat[1][1] << "]" << endl;

    
    return 0;
}