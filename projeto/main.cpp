#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdlib>

using namespace std;

struct dadosF			// dados dos filmes
{
    char name[100];
	int gender;
    int lancamento;
    char director[100];
   
};

struct dadosU				// dados dos usuarios 
{
    char username[100];
    char password[100];
    int indicationGroup1;
    int indicationGroup2;
};


void designScreen()	// Decoração do terminal
{
  cout << "LLLLLLLLLLL                                                      iiii   iiii                       " << endl;
  cout << "L:::::::::L                                                     i::::i i::::i                      " << endl;
  cout << "L:::::::::L                                                      iiii   iiii                       " << endl;
  cout << "LL:::::::LL                                                                          +++++++       " << endl;
  cout << "  L:::::L              uuuuuu    uuuuuu    mmmmmmm    mmmmmmm  iiiiiiiiiiiiii        +:::::+       " << endl;
  cout << "  L:::::L              u::::u    u::::u  mm:::::::m  m:::::::mmi:::::ii:::::i        +:::::+       " << endl;
  cout << "  L:::::L              u::::u    u::::u m::::::::::mm::::::::::mi::::i i::::i  +++++++:::::+++++++ " << endl;
  cout << "  L:::::L              u::::u    u::::u m::::::::::::::::::::::mi::::i i::::i  +:::::::::::::::::+ " << endl;
  cout << "  L:::::L              u::::u    u::::u m:::::mmm::::::mmm:::::mi::::i i::::i  +:::::::::::::::::+ " << endl;
  cout << "  L:::::L              u::::u    u::::u m::::m   m::::m   m::::mi::::i i::::i  +++++++:::::+++++++ " << endl;
  cout << "  L:::::L              u::::u    u::::u m::::m   m::::m   m::::mi::::i i::::i        +:::::+       " << endl;
  cout << "  L:::::L         LLLLLu:::::uuuu:::::u m::::m   m::::m   m::::mi::::i i::::i        +:::::+       " << endl;
  cout << "LL:::::::LLLLLLLLL:::::u:::::::::::::::um::::m   m::::m   m::::i::::::i::::::i       +++++++       " << endl;
  cout << "L::::::::::::::::::::::Lu:::::::::::::::m::::m   m::::m   m::::i::::::i::::::i                     " << endl;
  cout << "L::::::::::::::::::::::L uu::::::::uu:::m::::m   m::::m   m::::i::::::i::::::i                     " << endl;
  cout << "LLLLLLLLLLLLLLLLLLLLLLLL   uuuuuuuu  uuummmmmm   mmmmmm   mmmmmiiiiiiiiiiiiiii                     " << endl;

  cout << "+=============+" << endl;
  cout << "+             +" << endl;
  cout << "+             +" << endl;
  cout << "+    Log In   +" << endl;
  cout << "+      or     +" << endl;
  cout << "+   Register  +" << endl;
  cout << "+             +" << endl;
  cout << "+             +" << endl;
  cout << "+=============+" << endl;
}

void userLogin(int &indication1, int &indication2)
{
	ifstream arqRead;		// handle para ler um arquivo 
	dadosU input;			// entrada no terminal
	dadosU save[20];		// gravar informações do arquivo de texto 
	char userInput[10];		// resposta se o usuario quer ou nao continuar acessando
	char sim[4]  = {"sim"};	// char com fins de comparação
	char nao[4] = {"nao"};	// char com fins de comparação			
	int j = 0;				// contador de linhas 
	int passwordId = 0;		// salvar posição do usuario acessado
	bool usuario;			// se o usuario esta correto ou nao
	bool senha;				// se a senha esta correta ou nao
	
	
	// abrindo o arquivo
	arqRead.open("dadosUsuarios.txt", ifstream::in);
    
    // coletando dados do arquivo
     while(!arqRead.eof())
    {
		arqRead.getline(save[j].username,100);
		arqRead.getline(save[j].password,100);
		arqRead >> save[j].indicationGroup1;
		arqRead >> save[j].indicationGroup2;
		arqRead.ignore();
		j++;
	}
	// fechando o arquivo
	arqRead.close();
	
	cout << "Digite seu nome de usuario." << endl;
	
	// coletando entrada do terminal
	cin.getline(input.username,100);
	
	//vendo se o usuario que entrou existe, ou seja, comparando com os salvos do arquivo
	for(int i = 0; i < j; i++)
	{
		if(strcmp(save[i].username, input.username) == 0)	// se usuario existir
		{
			passwordId = i;		// salvar pósição do usuario para comparar a senha 
			usuario = true;		// iniciar loop da senha
			break;				// quebrar o loop atual
		}
		else if(strcmp(save[i].username, input.username) != 0 && i == (j-1)) // se usuario nao existir
		{
			usuario = false;	// iniciar loop de usuario falso
			break;				// quebrar loop atual
		}		
	}
	
	while(usuario == false)		// caso a entrada no terminal não estaja salva na variavel save
	{
		cout << "Usuario incorreto." << endl;
		cout << "Deseja tentar novamente?" << endl;
		cout << "Para tentar novamente digite sim, para finalizar sessao digite nao." << endl;
		
		cin.getline(userInput,10);	// entrada no terminal
		
		if(strcmp(userInput, nao) == 0)
		{
			// finalizando sessao
			cout << "Obrigado por acessar o lumii+!" << endl;
			exit(0);
		}
		
		else if(strcmp(userInput, sim) == 0)
		{
			cout << "Digite seu nome de usuario." << endl;
			 
			cin.ignore();
			cin.getline(input.username,100);	// entrada novamente de usuario
			
			for(int i = 0; i < j; i++)	// comparando novamente a entrada com dados salvos em save
			{
				if(strcmp(save[i].username, input.username) == 0)
				{
					usuario = true;	// quebra do while
					passwordId = i;	// salvar posicao do usuario no vetor
					break;			// quebra do loop atual
				}
				else if((strcmp(save[i].username, input.username) != 0) && i == (j-1))
				{
					usuario = false;
					break;	// quebra do loop atual porem o while continua compilando
				}
			}
		}
	}
	
	if(usuario == true)	// caso o usuario digitado esteja salvo em save
	{
		cout << "Digite sua senha." << endl;
		
		cin.getline(input.password,100);	// entrada de senha 
		
		if(strcmp(save[passwordId].password, input.password) == 0)	// comparando senha salva na posição do vetor do usuario 
		{
			senha = true;
			indication1 = save[passwordId].indicationGroup1;		// gravando generos que serão utilizados para a indicação
			indication2 = save[passwordId].indicationGroup2;
		}
		else if (strcmp(save[passwordId].password, input.password) != 0)
		{
			senha = false;
		}
		
	}
	
	while(senha == false)		// caso a entrada da senha esteja incorreta
	{
		cout << "Senha incorreta." << endl;
		cout << "Deseja tentar novamente?" << endl;
		cout << "Para tentar novamente digite sim, para finalizar sessao digite nao." << endl;
		
		cin.getline(userInput,10);
		
		if(strcmp(userInput, nao) == 0)
		{
			cout << "Obrigado por acessar o lumii+!." << endl;		// finalizar sessão
			exit(0);
		}
			
		else if(strcmp(userInput, sim) == 0)
		{
			cout << "Digite sua senha." << endl;					// digitar senha novamente

			cin.ignore();
			cin.getline(input.password,100);
					
				if(strcmp(save[passwordId].username, input.username) == 0)
				{
					senha = true;	// quebrar o while 	
					break;		
				}
				else if((strcmp(save[passwordId].username, input.username) != 0))
				{
					senha = false;
					break;
				}
		}
	}

	if(senha == true)	// voltar para a main
	{
		cout << "Sua senha esta correta."<< endl;
		cout << "Voce esta logado!" << endl;
	}
}
	
void userRegister()
{
    ofstream arqWriter;	// handle para escrever um arquivo 
    dadosU usuarios; 	// informações coletadas a serem escritas no arquivo

    cout << "Para se registrar digite seu nome de usuario." << endl;

    cin.getline(usuarios.username,100);		// coletar usuario

    cout << "Digite sua senha." << endl;

    cin.getline(usuarios.password,100);		// coletar senha

	cout << "Dos generos a seguir escolha dois dos seus favoritos!" << endl;
	
	cout << "1 - Acao" << endl;
	cout << "2 - Animacao" << endl;
	cout << "3 - Comedia" << endl;
	cout << "4 - Ficcao cientifica" << endl;
	cout << "5 - Horror" << endl;
	cout << "6 - Romance" << endl;

	
	cin >> usuarios.indicationGroup1;		// coletar generos favoritos 
	cin >> usuarios.indicationGroup2;

	cin.ignore();

	// abrir arquivo
    arqWriter.open("dadosUsuarios.txt", ios::in | ios::ate); 
	
	// escrever no arquivo
	arqWriter << usuarios.username << endl;
    arqWriter << usuarios.password << endl;
    arqWriter << usuarios.indicationGroup1<< endl;
    arqWriter << usuarios.indicationGroup2<< endl;
    
    // fechar o arquivo
    arqWriter.close();
}

bool indicacao(int &gender1, int &gender2)
{
	ifstream arqR;				// handle para ler o arquivo
	dadosF saveMovies[200];		// variavel para salvar os dados do arquivo
	char resposta[30];			// resposta para caso queira ou nao uma nova indicacao
	char sim[4] = {"sim"};		// char para comparação
	char nao[4] = {"nao"};		// char para comparação
	int moviesID[200];			// variavel para salvar a posicao de certos filmes no vetor anterior 
	int j = 0;					// contador de linhas
	int k = 0;					// contador de filmes do genero favorito
	int aleatorioIndice;		// indice aleatorio do vetor moviesId
	int aleatorio;				// valor do vetor na posição aleatorioIndice
	bool answer = true;
	bool end;
	
	
	cout << "Buscando sua indicacao..." << endl;
	
	arqR.open("dadosFilmes.txt", ifstream::in);   // abrindo o arquivo
    
     while(!arqR.eof())  // coletando os dados
    {
		arqR.getline(saveMovies[j].name,100);
		arqR >> saveMovies[j].gender;
		arqR >> saveMovies[j].lancamento;
		arqR.ignore();
		arqR.getline(saveMovies[j].director,100);
		j++;
	}
	
	arqR.close();  // fechando o arquivo 
	
	for(int i = 0; i < j; i++)
	{
		if(saveMovies[i].gender == gender1 || saveMovies[i].gender == gender2)
		{
			moviesID[k] = i; // salvando a posição de filmes que são dos generos desejados
			k++;
		}
	}
	k --;
		
	aleatorioIndice = rand() % k;			// buscando um numero aleatorio
	aleatorio = moviesID[aleatorioIndice];	// chamando um numero salvo no vetor moviesIDs
	
	// motrando uma indicação aleatoria de filme 
	cout << "Sua indicacao de filme e: " << saveMovies[aleatorio].name;
	cout << " lancado em " << saveMovies[aleatorio].lancamento << endl;
	cout << "Dirigido por: " << saveMovies[aleatorio].director << endl;
	
	while(answer == true)
	{
		cout << "Deseja receber mais uma indicacao?" << endl;
		cout << "Digite sim ou nao." << endl;
		
		cin.getline(resposta, 30);
		
		if(strcmp (resposta, nao) == 0)
		{
			answer = false;
		}
		else if(strcmp (resposta, sim) == 0)
		{
			aleatorioIndice = rand() % k;			// buscando um numero aleatorio
			aleatorio = moviesID[aleatorioIndice];	// chamando um numero salvo no vetor moviesIDs
	
			// motrando uma indicação aleatoria de filme 
			cout << "Sua indicacao de filme e: " << saveMovies[aleatorio].name;
			cout << " lancado em " << saveMovies[aleatorio].lancamento << endl;
			cout << "Dirigido por: " << saveMovies[aleatorio].director << endl;
		}
	}
	
	end = false;
	
	return end;
	
}


int userDecision()
{
    char userInput[10];					// entradas no terminal
    char Login[10] = {"Login"};			// char com fins de comparação
    char Register[10] = {"Register"};	// char com fins de comparação 
    int i = 0;							// finalização do loop
    int decision;						// valor retornado

	while(i == 0) 
 	 {

        cin.getline(userInput,10);

        if(strcmp(userInput, Register) == 0)
        {
            decision = 0;
            i++;
        }
        else if(strcmp(userInput, Login) == 0)
        {
            decision = 1;
            i++;
        }
        else {
            cout << "Digite Login ou Register." << endl;
        }
    }

    return decision;
}

int main()
{
    int decision;
    int indication1;					// genero favorito 1
	int indication2;					// genero favorito 2
    int login = 0;						// variavel responsavel por chamar a função login
    char logar[7] = {"logar"};			// char com fins de comparação
    char finalizar[10] = {"finalizar"};	// char com fins de comparação
    char nao[4] = {"nao"};				// char com fins de comparação
    char sim[4] = {"sim"};				// char com fins de comparação
    char usuarioInput[10];				// texto digitado pelo usuario
    bool end = true;					// organizar a ordem das funções
    

    designScreen();	// decoração do terminal

    cout << "Bem vindo ao Lumii+!" << endl;
    cout << "Digite Login ou Register." << endl;
    // chamar a função para decidir se vai logar ou registrar
	decision = userDecision();	
    
    if (decision == 0)
    {
        userRegister(); // função para se registrar
        cout << "Seu registro esta completo." << endl;
		login = 1; 		
	
    }
    else if (decision == 1)
    {
        cout << "Faca seu login!" << endl;
        // chamar função de login
		login = 1;
    }
    
    if(login == 1)
	{
		// função de login
		userLogin(indication1, indication2);	
	}
	
	end = indicacao(indication1, indication2); // função para indicar filmes 
	
	while (end == false) 						// loop de interação com o usuario
	{
		cout << "Deseja finalizar sessao?" << endl;
		cout << "Digite sim ou nao." << endl;
		
		cin.getline(usuarioInput,10);
		
		if(strcmp(usuarioInput, sim) == 0)
		{
			cout << "Obrigado por acessar o lumii+!" << endl;
			end = true;
		}
		else if(strcmp(usuarioInput, nao) == 0)
		{
			cout << "Deseja acessar outro usuario?" << endl;
			cout << "Digite sim ou nao." << endl;
			
			cin.getline(usuarioInput,10);
			
			if(strcmp(usuarioInput,sim) == 0)
			{
				cout << "Faca seu login." << endl;
				userLogin(indication1, indication2);
				end = indicacao(indication1, indication2);
			}
			else if (strcmp(usuarioInput,nao) == 0)
			{
				cout << "Deseja registrar um novo usuario?" << endl;
				
				cin.getline(usuarioInput, 10);
				
				if(strcmp(usuarioInput,nao) == 0)
				{
					cout << "Obrigado por acessar o lumii+." << endl;
					end = true;
				}
				else if (strcmp(usuarioInput,sim) == 0)
				{
					userRegister();
					cout << "Faça seu login." << endl;
					userLogin(indication1, indication2);
					end = indicacao(indication1, indication2);
				}
			}
		}
	}
	
	return 0;
}
