#include <iostream>

using namespace std;

int main() {
	
	char mat[50][50];
	int nLinhas;
	int nColunas; 
	int l, c; // contadores para as linhas e colunas 
	
	cin >> nLinhas >> nColunas;
	
	// Entrando matriz
	for(l = 0; l < nLinhas; l++)
	{
	    for(c = 0; c < nColunas; c++)
	    {
	        cin >> mat[l][c];
	    }
	}
	
	// Mostrando matriz
	for(c = 0; c < nColunas; c++)  
	{
	    for(l = 0; l < nLinhas; l++)
	    {
		    cout << mat[l][c];
	    }
	}
}