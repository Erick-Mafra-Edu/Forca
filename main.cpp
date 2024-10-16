#include<iostream>
#include<locale.h>
using namespace std;
int main(){
    setlocale(LC_ALL,"Portuguese");
    int menu, newRandomNumber, randomNumber;

    do{
        // Solicita informar uma opção do menu
        cout << "Selecione uma das posições a seguir: \n 1 • Jogar \n 2 • Sobre \n 3 • Fim \n";

        cin >> menu;

        switch(menu){
            case 1:{
                int tentativas = 10,acertos = 0;
                string letrasDigitadas = "";
              
                char L1, L2, L3, L4, L5, L6, LD = ' ',LS1 = '_', LS2 = '_', LS3 = '_', LS4 = '_', LS5 = '_', LS6 = '_';
                cout<<"\033c";//limpa a tela
                srand(time(NULL)); //semente randomica gerada a partir da hora do sistema
                newRandomNumber = rand() % 10 + 1; //gera um numero aleatorio de 1 a 10

                //verifica se o número gerado foi o mesmo do anterior 
                while(newRandomNumber == randomNumber){
                    newRandomNumber = rand() % 10 + 1;
                }
                randomNumber = newRandomNumber;

                //Seleciona uma das palavras
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

                //inicia o loop do jogo 
                while(tentativas > 0 && (LS1 == '_' || LS2 == '_' || LS3 == '_' || LS4 == '_' || LS5 == '_' || LS6 == '_')){
                  cout<<"\033c";

                  //verifica se alguma coisa foi digitada
                  if(LD != ' '){
                    //verifica se alguma letra já foi digitada
                    if(letrasDigitadas != ""){
                      letrasDigitadas += ",";
                    }
                    //coloca a letra digitada em uma string para exibição
                    letrasDigitadas += LD;
                    //Verifica se alguma letra foi acertada
                    if(LD == L1 || LD == L2 || LD == L3 || LD == L4 || LD == L5 || LD == L6){
                      //verifica se a letra acertada já foi acertada anteriormente
                      if(LD == L1 && LD != LS1){
                          LS1 = L1;
                          acertos++;
                      }
                      if(LD == L2 && LD != LS2){
                          LS2 = L2;
                          acertos++;
                      }
                      if(LD == L3 && LD != LS3){
                          LS3 = L3;
                          acertos++;
                      }
                      if(LD == L4 && LD != LS4){
                          LS4 = L4;
                          acertos++;
                      }
                      if(LD == L5 && LD != LS5){
                          LS5 = L5;
                          acertos++;
                      }
                      if(LD == L6 && LD != LS6){
                          LS6 = L6;
                          acertos++;
                      }
                    }else{
                      //se nao foi acertada remove uma tentativa
                      tentativas--;
                    }
                  }

                  //subtração foi feita para desenhar o boneco conforme o erro
                  switch (10-tentativas){
                    case 10:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       V\n"<<" |       |\n"
                      <<" |      /|\\ \n"<<" |       |\n"<<"___     / \\\n";
                    break;
                    case 9:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       V\n"<<" |       |\n"
                      <<" |      /|\\ \n"<<" |       |\n"<<"___     /  \n";
                    break;
                    case 8:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       V\n"<<" |       |\n"
                      <<" |      /|\\ \n"<<" |       |\n"<<"___     \n";
                    break;
                    case 7:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       V\n"<<" |       |\n"
                      <<" |      /|\\ \n"<<" |        \n"<<"___     \n";
                    break;
                    case 6:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       V\n"<<" |       |\n"
                      <<" |      /|  \n"<<" |        \n"<<"___     \n";
                    break;
                    case 5:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       V\n"<<" |       |\n"
                      <<" |       |  \n"<<" |        \n"<<"___     \n";
                    break;
                    case 4:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       V\n"<<" |       |\n"
                      <<" |          \n"<<" |        \n"<<"___     \n";
                    break;
                    case 3:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       V\n"<<" |        \n"
                      <<" |          \n"<<" |        \n"<<"___     \n";
                    break;
                    case 2:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( )\n"<<" |       \n"<<" |       \n"
                      <<" |          \n"<<" |        \n"<<"___     \n";
                    break;
                    case 1:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |      ( \n"<<" |       \n"<<" |       \n"
                      <<" |          \n"<<" |        \n"<<"___     \n";
                    break;
                    case 0:
                      //desenhando forca
                      cout<<" _________\n"<<" |       |\n";
                      cout<<" |       _\n"<<" |       \n"<<" |       \n"<<" |       \n"
                      <<" |          \n"<<" |        \n"<<"___     \n";
                    break;
                  }

                  //exibe a palavra conforme foi digitada
                  cout <<endl<< LS1 <<" "<< LS2 <<" "<< LS3 <<" "<< LS4 <<" "<< LS5 <<" "<< LS6<<endl<<endl;

                  if(letrasDigitadas != ""){
                    cout << "As letras digitadas ate agora foram: " << letrasDigitadas << endl;
                  }

                  cout << "você tem " << tentativas << " tentativas restantes\n";
                  cout << "você acertou " << acertos << " letras \n";
                 
                  //verifica se acertou todas as letras
                  if(LS1 != '_' && LS2 != '_' && LS3 != '_' && LS4 != '_' && LS5 != '_' && LS6 != '_'){
                    cout << "Parabéns você ganhou! \n";
                    cout << "Precione qualquer tecla para voltar ao menu principal";
                    cin.ignore();
                    cout<< cin.get();
                    cout<<"\033c";
                  }else if(tentativas){
                    //caso nao tenha acertado tudo e ainda tenha tentativas, solicita mais uma letra ser digitada
                    cout << "Digite uma letra: ";
                    cin >> LD;
                  }else{
                    //caso nao tenha acertado tudo e nao tem tentativas exibe e mensagem que perdeu o jogo
                    cout << "Que pena voce perdeu! \n";
                    cout << "A palavra era " << L1 << L2 << L3 << L4 << L5 << L6 << " \n";    
                    cout << "Precione qualquer tecla para voltar ao menu principal";
                    cin.ignore();
                    cout<<cin.get();
                    cout<<"\033c";
                  }

                }; 
              }
              cout<<"\033c";
            break;
            case 2:
              //exibe as informações das pessoas que fizeram o codigo
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
              <<"|"<<"  Erick Marlon Mafra            "<<"|"<<"                                                           "<<"|\n"
              <<"+--------------------------------+-----------------------------------------------------------+\n\n";
              cout << "Data: outubro/2024 \n"
              << "Professor: Rafael Ballottin Martins / Algoritmos e Programação(24/2) \n"
              << "Para voltar ao menu pressione Enter";
              cin.ignore();
              cin.get();
              cout<<"\033c";
            break;
            case 3:
              cout<<"\033c";
              //exibe a mensagem quando sai do codigo
              cout << "Obrigado por jogar, até a próxima!";
            break;
            default:
              cout<<"\033c";
              //avisa que foi digitado uma informação nao esperada
              cout<< "Opção inválida \n";
        }
    }while(menu != 3);

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