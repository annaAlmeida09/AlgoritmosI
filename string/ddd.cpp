#include <iostream>
#include <cstring>

using namespace std;

int main (){
   
   char cidade[100];
   char ddd61[] = "Brasilia";
   char ddd71[] = "Salvador";
   char ddd11[] = "Sao Paulo";
   char ddd21[] = "Rio de Janeiro";
   char ddd32[] = "Juiz de Fora";
   char ddd19[] = "Campinas";
   char ddd27[] = "Vitoria";
   char ddd31[] = "Belo Horizonte";
   char ddd35[] = "Santa Rita do Sapucai";
   
   cin.getline(cidade, 100);
   
   if (strcmp(cidade, ddd61) == 0)
       cout << "61" << endl;
   else if (strcmp(cidade, ddd71) == 0)
       cout << "71" << endl;
   else if (strcmp(cidade, ddd11) == 0)
       cout << "11" << endl;
   else if (strcmp(cidade, ddd21) == 0)
       cout << "21" << endl;
   else if (strcmp(cidade, ddd32) == 0)
       cout << "32" << endl;
   else if (strcmp(cidade, ddd19) == 0)
       cout << "19" << endl;
   else if (strcmp(cidade, ddd27) == 0)
       cout << "27" << endl;
   else if (strcmp(cidade, ddd31) == 0)
       cout << "31" << endl;
   else if (strcmp(cidade, ddd35) == 0)
       cout << "35" << endl;
   else
       cout << "DDD nao cadastrado" << endl;
    
    return 0;
}