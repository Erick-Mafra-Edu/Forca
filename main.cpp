#include<iostream>
#include<locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int key;
    cout<<"comecar";
    cin>>key;
    char letra;
    int seletor;
    char L1, L2, L3, L4, L5, L6;
    do{
        switch(key){
            case 1:
                do{
                cin>>letra;
                }while(ERRO != 10 || ACERTO != 10)
            break;
            case 2:
            break;
            default:
            cout<< "Opção inválida";
        }
    }while(key == 3)
    return 0;
}