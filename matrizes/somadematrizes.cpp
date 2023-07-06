#include <iostream>

using namespace std;

int main() {
	
	int mat1[50][50];
	int mat2[50][50];
	int nLinhas;
	int nColunas; 
	int l, c; // contadores para as linhas e colunas 
	
	cin >> nLinhas >> nColunas;
	
	// Entrando matriz
	for(l = 0; l < nLinhas; l++)
	{
	    for(c = 0; c < nColunas; c++)
	    {
	        cin >> mat1[l][c];
	    }
	}
	for(l = 0; l < nLinhas; l++)
	{
	    for(c = 0; c < nColunas; c++)
	    {
	        cin >> mat2[l][c];
	    }
	}
	
	
	// Mostrando matriz
	for(l = 0; l < nLinhas; l++)
	{
	    for(c = 0; c < nColunas; c++)
	    {
		    cout << mat1[l][c] + mat2[l][c] << " ";
	    }
	    cout << endl;
	}
	
}