#include <iostream>

using namespace std;

int main(){
    
    int imagem[100][100];
    int pixel;
    int feridas = 0;
    int area;
    int nLinhas, nColunas;
    int l, c;
    
    cin >> nLinhas >> nColunas >> pixel;
    
    for(l = 0; l < nLinhas; l++)
	{
	    for(c = 0; c < nColunas; c++)
	    {
	        cin >> imagem[l][c];
	    }
	}
	
	for(l = 0; l < nLinhas; l++)
	{
	    for(c = 0; c < nColunas; c++)
	    {
	        if(imagem[l][c] == 1)
	            feridas++;
	    }
	}
	
	area = pixel*pixel*feridas;
	
	cout << "AREA = " << area << " mm^2" << endl;

    return 0;
}