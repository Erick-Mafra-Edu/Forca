#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int menu, newRandomNumber, randomNumber;

    do{
        cout << "Selecione uma das poções a seguir: \n 1 • Jogar \n 2 • Sobre \n 3 • Fim \n";
        cin >> menu;
      
        switch(menu){
            case 1:{
                int erros = 0;
                char L1, L2, L3, L4, L5, L6, LD,LS1 = '_', LS2 = '_', LS3 = '_', LS4 = '_', LS5 = '_', LS6 = '_';
                cout<<"\033c";
                srand(time(NULL)); //semente randomica gerada a partir da hora do sistema
                newRandomNumber = rand() % 10 + 1; //gera um numero aleatorio de 1 a 10
                while(newRandomNumber == randomNumber){
                    newRandomNumber = rand() % 10 + 1;
                }
                randomNumber = newRandomNumber;
                cout << randomNumber;

                switch(randomNumber){
                  case 1:
                    //Garota
                    L1 = 'G';
                    L2 = 'A';
                    L3 = 'R';
                    L4 = 'O';
                    L5 = 'T';
                    L6 = 'A';
                  break;
                  case 2:
                    //Canela
                    L1 = 'C';
                    L2 = 'A';
                    L3 = 'N';
                    L4 = 'E';
                    L5 = 'L';
                    L6 = 'A';
                  break;
                  case 3:
                    //Raposa
                    L1 = 'R';
                    L2 = 'A';
                    L3 = 'P';
                    L4 = 'O';
                    L5 = 'S';
                    L6 = 'A';
                  break;
                  case 4:
                    //Planta
                    L1 = 'P';
                    L2 = 'L';
                    L3 = 'A';
                    L4 = 'N';
                    L5 = 'T';
                    L6 = 'A';
                  break;
                  case 5:
                    //banana
                    L1 = 'B';
                    L2 = 'A';
                    L3 = 'N';
                    L4 = 'A';
                    L5 = 'N';
                    L6 = 'A';
                  break;
                  case 6:
                    //casaco
                    L1 = 'C';
                    L2 = 'A';
                    L3 = 'S';
                    L4 = 'A';
                    L5 = 'C';
                    L6 = 'O';
                  break;
                  case 7:
                    //melhor
                    L1 = 'M';
                    L2 = 'E';
                    L3 = 'L';
                    L4 = 'H';
                    L5 = 'O';
                    L6 = 'R';
                  break;
                  case 8:
                    //branco
                    L1 = 'B';
                    L2 = 'R';
                    L3 = 'A';
                    L4 = 'N';
                    L5 = 'C';
                    L6 = 'O';
                  break;
                  case 9:
                    //Mestre
                    L1 = 'M';
                    L2 = 'E';
                    L3 = 'S';
                    L4 = 'T';
                    L5 = 'R';
                    L6 = 'E';
                  break;
                  case 10:
                    //Pedido
                    L1 = 'P';
                    L2 = 'E';
                    L3 = 'D';
                    L4 = 'I';
                    L5 = 'D';
                    L6 = 'O';
                  break;
                }

                cout << "A palavra é " << L1 << L2 << L3 << L4 << L5 << L6 << " \n";
                cout << "voce errou " << erros << " vezes \n";
                do{
                  cout << "Digite uma letra: ";
                  cin >> LD;
                  if(LD == L1 || LD == L2 || LD == L3 || LD == L4 || LD == L5 || LD == L6){
                    cout << "Você acertou uma letra! \n";
                    if(LD == L1){
                        LS1 = L1;
                    }
                    if(LD == L2){
                        LS2 = L2;
                    }
                    if(LD == L3){
                        LS3 = L3;
                    }
                    if(LD == L4){
                        LS4 = L4;
                    }
                    if(LD == L5){
                        LS5 = L5;
                    }
                    if(LD == L6){
                        LS6 = L6;
                    }
                  }else{
                    cout << "A palavra nao contem a letra digitada! \n";
                    erros ++;
                  }

                  cout << LS1 << LS2 << LS3 << LS4 << LS5 << LS6<<endl;
                  
                }while(erros < 10 && (LS1 == '_' || LS2 == '_' || LS3 == '_' || LS4 == '_' || LS5 == '_' || LS6 == '_'));
              }
              
            break;
            case 2:
              cout<<"\033c";
              cout<<"+--------------------------------+-----------------------------------------------------------+\n"
              <<"|                                |                                                           |\n"; 
              cout<<"|"<<" Esse jogo foi desenvolvido por "<<"|"<<" Regras do jogo                                            "<<"|\n"
              <<"|                                |                                                           |\n"
              <<"+--------------------------------+-----------------------------------------------------------+\n"
              <<"|"<<"  Andrey Felsky                 "<<"| A palavra secreta será escolhida aleatoriamente entre uma "<<"|\n"
              <<"|"<<"                                "<<"|"<<" lista de palavras pré-definidas, ela conterá 6 letras.    "<<"|\n"
              <<"+--------------------------------+-----------------------------------------------------------+\n"
              <<"|"<<"  Bruno Dalbosco Rover          "<<"|"<<" Você tera 10 tentativas para acertar a palavra secreta,   "<<"|\n"
              <<"|"<<"                                "<<"|"<<" cada erro uma tentativa será descontada.                  "<<"|\n"
              <<"+--------------------------------+-----------------------------------------------------------+\n"
              <<"|"<<"  Rodrigo Buratto Ribas         "<<"|"<<" Somente sera aceito letras maiusculas e sem acentos.      "<<"|\n"
              <<"+--------------------------------+-----------------------------------------------------------+\n"
              <<"|"<<"  Wallacy Alvarenga             "<<"|"<<"                                                           "<<"|\n"
              <<"+--------------------------------+-----------------------------------------------------------+\n"
              <<"|"<<"  Erick Marlon Mafra            "<<"|"<<"                                                           "<<"|\n";
              cout << "Data: outubro/2024 \n"
              << "Professor: Rafael Ballottin Martins / Algoritmos e Programação(24/2) \n"
              << "Para voltar ao menu pressione Enter";
              cin.ignore();
              cout<< cin.get();
              cout<<"\033c";
            break;
            case 3:
              cout << "Obrigado por jogar, até a próxima!";
            break;
            default:
              cout<< "Opção inválida";
        }
    }while(menu != 3);
  
    cout << "finalizado";
    return 0;
}

//Equipe de desenvolvimento

// Andrey Felsky
// 8273782
// andreyfelsky@edu.univali.br

// Bruno Dalbosco Rover
// 8314144
// bruno.8314144@edu.univali.br

// Erick Marlon Mafra 
// 8315728
// erick.8315728@edu.univali.br

// Rodrigo Buratto Ribas
// 8330999
// rodrigo.8330999@edu.univali.br

// Wallacy Alvarenga
// 6916694
// wallacyalvarenga@univali.br
  