#include <iostream>

using namespace std;

int main(){
 
    int matriz[5][3];
    int mat0[5][3];
    int mat1[5][3];
    int mat2[5][3];
    int mat3[5][3];
    int mat4[5][3];
    int mat5[5][3];
    int mat6[5][3];
    int mat7[5][3];
    int mat8[5][3];
    int mat9[5][3];
    int l = 0;
	int c = 0;
			
		mat0[0][0] = 0;		mat0[0][1] = 0;		mat0[0][2] = 0;  			
		mat0[1][0] = 0;		mat0[1][1] = 1;		mat0[1][2] = 0;  
		mat0[2][0] = 0;		mat0[2][1] = 1;		mat0[2][2] = 0; 
		mat0[3][0] = 0;		mat0[3][1] = 1;		mat0[3][2] = 0; 
		mat0[4][0] = 0;		mat0[4][1] = 0;		mat0[4][2] = 0; 
  
		mat1[0][0] = 1;		mat1[0][1] = 1;		mat1[0][2] = 0;  			
		mat1[1][0] = 1;		mat1[1][1] = 1;		mat1[1][2] = 0;  
		mat1[2][0] = 1;		mat1[2][1] = 1;		mat1[2][2] = 0; 
		mat1[3][0] = 1;		mat1[3][1] = 1;		mat1[3][2] = 0; 
		mat1[4][0] = 1;		mat1[4][1] = 1;		mat1[4][2] = 0;
		
		mat2[0][0] = 0;		mat2[0][1] = 0;		mat2[0][2] = 0;  			
		mat2[1][0] = 1;		mat2[1][1] = 1;		mat2[1][2] = 0;  
		mat2[2][0] = 0;		mat2[2][1] = 0;		mat2[2][2] = 0; 
		mat2[3][0] = 0;		mat2[3][1] = 1;		mat2[3][2] = 1; 
		mat2[4][0] = 0;		mat2[4][1] = 0;		mat2[4][2] = 0;
		
		mat3[0][0] = 0;		mat3[0][1] = 0;		mat3[0][2] = 0;  			
		mat3[1][0] = 1;		mat3[1][1] = 1;		mat3[1][2] = 0;  
		mat3[2][0] = 0;		mat3[2][1] = 0;		mat3[2][2] = 0; 
		mat3[3][0] = 1;		mat3[3][1] = 1;		mat3[3][2] = 0; 
		mat3[4][0] = 0;		mat3[4][1] = 0;		mat3[4][2] = 0;
		
		mat4[0][0] = 0;		mat4[0][1] = 1;		mat4[0][2] = 0;  			
		mat4[1][0] = 0;		mat4[1][1] = 1;		mat4[1][2] = 0;  
		mat4[2][0] = 0;		mat4[2][1] = 0;		mat4[2][2] = 0; 
		mat4[3][0] = 1;		mat4[3][1] = 1;		mat4[3][2] = 0; 
		mat4[4][0] = 1;		mat4[4][1] = 1;		mat4[4][2] = 0;
		
		mat5[0][0] = 0;		mat5[0][1] = 0;		mat5[0][2] = 0;  			
		mat5[1][0] = 0;		mat5[1][1] = 1;		mat5[1][2] = 1;  
		mat5[2][0] = 0;		mat5[2][1] = 0;		mat5[2][2] = 0; 
		mat5[3][0] = 1;		mat5[3][1] = 1;		mat5[3][2] = 0; 
		mat5[4][0] = 0;		mat5[4][1] = 0;		mat5[4][2] = 0;
		
		mat6[0][0] = 0;		mat6[0][1] = 0;		mat6[0][2] = 0;  			
		mat6[1][0] = 0;		mat6[1][1] = 1;		mat6[1][2] = 1;  
		mat6[2][0] = 0;		mat6[2][1] = 0;		mat6[2][2] = 0; 
		mat6[3][0] = 0;		mat6[3][1] = 1;		mat6[3][2] = 0; 
		mat6[4][0] = 0;		mat6[4][1] = 0;		mat6[4][2] = 0;
		
		mat7[0][0] = 0;		mat7[0][1] = 0;		mat7[0][2] = 0;  			
		mat7[1][0] = 1;		mat7[1][1] = 1;		mat7[1][2] = 0;  
		mat7[2][0] = 1;		mat7[2][1] = 1;		mat7[2][2] = 0; 
		mat7[3][0] = 1;		mat7[3][1] = 1;		mat7[3][2] = 0; 
		mat7[4][0] = 1;		mat7[4][1] = 1;		mat7[4][2] = 0;
		
		mat8[0][0] = 0;		mat8[0][1] = 0;		mat8[0][2] = 0;  			
		mat8[1][0] = 0;		mat8[1][1] = 1;		mat8[1][2] = 0;  
		mat8[2][0] = 0;		mat8[2][1] = 0;		mat8[2][2] = 0; 
		mat8[3][0] = 0;		mat8[3][1] = 1;		mat8[3][2] = 0; 
		mat8[4][0] = 0;		mat8[4][1] = 0;		mat8[4][2] = 0;
		
		mat9[0][0] = 0;		mat9[0][1] = 0;		mat9[0][2] = 0;  			
		mat9[1][0] = 0;		mat9[1][1] = 1;		mat9[1][2] = 0;  
		mat9[2][0] = 0;		mat9[2][1] = 0;		mat9[2][2] = 0; 
		mat9[3][0] = 1;		mat9[3][1] = 1;		mat9[3][2] = 0; 
		mat9[4][0] = 1;		mat9[4][1] = 1;		mat9[4][2] = 0; 	  
    
    for(l = 0; l <= 4; l++)
	{
	    for(c = 0; c <= 2; c++)
	    {
	        cin >> matriz[l][c];
	    }
	}
	
	if(	matriz[0][0] == mat0[0][0] &&
		matriz[0][1] == mat0[0][1] &&
		matriz[0][2] == mat0[0][2] &&
		matriz[1][0] == mat0[1][0] &&
		matriz[1][1] == mat0[1][1] &&
		matriz[1][2] == mat0[1][2] &&
		matriz[2][0] == mat0[2][0] &&
		matriz[2][1] == mat0[2][1] &&
		matriz[2][2] == mat0[2][2] &&
		matriz[3][0] == mat0[3][0] &&
		matriz[3][1] == mat0[3][1] &&
		matriz[3][2] == mat0[3][2] &&
		matriz[4][0] == mat0[4][0] &&
		matriz[4][1] == mat0[4][1] &&
		matriz[4][2] == mat0[4][2] )
	    cout << "ZERO" << endl;
	else if(matriz[0][0] == mat1[0][0] &&
			matriz[0][1] == mat1[0][1] &&
			matriz[0][2] == mat1[0][2] &&
			matriz[1][0] == mat1[1][0] &&
			matriz[1][1] == mat1[1][1] &&
			matriz[1][2] == mat1[1][2] &&
			matriz[2][0] == mat1[2][0] &&
			matriz[2][1] == mat1[2][1] &&
			matriz[2][2] == mat1[2][2] &&
			matriz[3][0] == mat1[3][0] &&
			matriz[3][1] == mat1[3][1] &&
			matriz[3][2] == mat1[3][2] &&
			matriz[4][0] == mat1[4][0] &&
			matriz[4][1] == mat1[4][1] &&
			matriz[4][2] == mat1[4][2] )
	    cout << "UM" << endl;
	else if(matriz[0][0] == mat2[0][0] &&
			matriz[0][1] == mat2[0][1] &&
			matriz[0][2] == mat2[0][2] &&
			matriz[1][0] == mat2[1][0] &&
			matriz[1][1] == mat2[1][1] &&
			matriz[1][2] == mat2[1][2] &&
			matriz[2][0] == mat2[2][0] &&
			matriz[2][1] == mat2[2][1] &&
			matriz[2][2] == mat2[2][2] &&
			matriz[3][0] == mat2[3][0] &&
			matriz[3][1] == mat2[3][1] &&
			matriz[3][2] == mat2[3][2] &&
			matriz[4][0] == mat2[4][0] &&
			matriz[4][1] == mat2[4][1] &&
			matriz[4][2] == mat2[4][2] )
	    cout << "DOIS" << endl;
	else if(matriz[0][0] == mat3[0][0] &&
			matriz[0][1] == mat3[0][1] &&
			matriz[0][2] == mat3[0][2] &&
			matriz[1][0] == mat3[1][0] &&
			matriz[1][1] == mat3[1][1] &&
			matriz[1][2] == mat3[1][2] &&
			matriz[2][0] == mat3[2][0] &&
			matriz[2][1] == mat3[2][1] &&
			matriz[2][2] == mat3[2][2] &&
			matriz[3][0] == mat3[3][0] &&
			matriz[3][1] == mat3[3][1] &&
			matriz[3][2] == mat3[3][2] &&
			matriz[4][0] == mat3[4][0] &&
			matriz[4][1] == mat3[4][1] &&
			matriz[4][2] == mat3[4][2] )
	    cout << "TRES" << endl;
	else if(matriz[0][0] == mat4[0][0] &&
			matriz[0][1] == mat4[0][1] &&
			matriz[0][2] == mat4[0][2] &&
			matriz[1][0] == mat4[1][0] &&
			matriz[1][1] == mat4[1][1] &&
			matriz[1][2] == mat4[1][2] &&
			matriz[2][0] == mat4[2][0] &&
			matriz[2][1] == mat4[2][1] &&
			matriz[2][2] == mat4[2][2] &&
			matriz[3][0] == mat4[3][0] &&
			matriz[3][1] == mat4[3][1] &&
			matriz[3][2] == mat4[3][2] &&
			matriz[4][0] == mat4[4][0] &&
			matriz[4][1] == mat4[4][1] &&
			matriz[4][2] == mat4[4][2] )
	    cout << "QUATRO" << endl;
	else if(matriz[0][0] == mat5[0][0] &&
			matriz[0][1] == mat5[0][1] &&
			matriz[0][2] == mat5[0][2] &&
			matriz[1][0] == mat5[1][0] &&
			matriz[1][1] == mat5[1][1] &&
			matriz[1][2] == mat5[1][2] &&
			matriz[2][0] == mat5[2][0] &&
			matriz[2][1] == mat5[2][1] &&
			matriz[2][2] == mat5[2][2] &&
			matriz[3][0] == mat5[3][0] &&
			matriz[3][1] == mat5[3][1] &&
			matriz[3][2] == mat5[3][2] &&
			matriz[4][0] == mat5[4][0] &&
			matriz[4][1] == mat5[4][1] &&
			matriz[4][2] == mat5[4][2] )
	    cout << "CINCO" << endl;
	else if(matriz[0][0] == mat6[0][0] &&
			matriz[0][1] == mat6[0][1] &&
			matriz[0][2] == mat6[0][2] &&
			matriz[1][0] == mat6[1][0] &&
			matriz[1][1] == mat6[1][1] &&
			matriz[1][2] == mat6[1][2] &&
			matriz[2][0] == mat6[2][0] &&
			matriz[2][1] == mat6[2][1] &&
			matriz[2][2] == mat6[2][2] &&
			matriz[3][0] == mat6[3][0] &&
			matriz[3][1] == mat6[3][1] &&
			matriz[3][2] == mat6[3][2] &&
			matriz[4][0] == mat6[4][0] &&
			matriz[4][1] == mat6[4][1] &&
			matriz[4][2] == mat6[4][2] )
	    cout << "SEIS" << endl;
	else if(matriz[0][0] == mat7[0][0] &&
			matriz[0][1] == mat7[0][1] &&
			matriz[0][2] == mat7[0][2] &&
			matriz[1][0] == mat7[1][0] &&
			matriz[1][1] == mat7[1][1] &&
			matriz[1][2] == mat7[1][2] &&
			matriz[2][0] == mat7[2][0] &&
			matriz[2][1] == mat7[2][1] &&
			matriz[2][2] == mat7[2][2] &&
			matriz[3][0] == mat7[3][0] &&
			matriz[3][1] == mat7[3][1] &&
			matriz[3][2] == mat7[3][2] &&
			matriz[4][0] == mat7[4][0] &&
			matriz[4][1] == mat7[4][1] &&
			matriz[4][2] == mat7[4][2] )
	    cout << "SETE" << endl;	
	else if(matriz[0][0] == mat8[0][0] &&
			matriz[0][1] == mat8[0][1] &&
			matriz[0][2] == mat8[0][2] &&
			matriz[1][0] == mat8[1][0] &&
			matriz[1][1] == mat8[1][1] &&
			matriz[1][2] == mat8[1][2] &&
			matriz[2][0] == mat8[2][0] &&
			matriz[2][1] == mat8[2][1] &&
			matriz[2][2] == mat8[2][2] &&
			matriz[3][0] == mat8[3][0] &&
			matriz[3][1] == mat8[3][1] &&
			matriz[3][2] == mat8[3][2] &&
			matriz[4][0] == mat8[4][0] &&
			matriz[4][1] == mat8[4][1] &&
			matriz[4][2] == mat8[4][2] )
	    cout << "OITO" << endl;
	else if(matriz[0][0] == mat9[0][0] &&
			matriz[0][1] == mat9[0][1] &&
			matriz[0][2] == mat9[0][2] &&
			matriz[1][0] == mat9[1][0] &&
			matriz[1][1] == mat9[1][1] &&
			matriz[1][2] == mat9[1][2] &&
			matriz[2][0] == mat9[2][0] &&
			matriz[2][1] == mat9[2][1] &&
			matriz[2][2] == mat9[2][2] &&
			matriz[3][0] == mat9[3][0] &&
			matriz[3][1] == mat9[3][1] &&
			matriz[3][2] == mat9[3][2] &&
			matriz[4][0] == mat9[4][0] &&
			matriz[4][1] == mat9[4][1] &&
			matriz[4][2] == mat9[4][2] )
	    cout << "NOVE" << endl;
    
    return 0;
}