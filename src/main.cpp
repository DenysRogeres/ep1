#include <iostream>
#include <vector>
#include <string>
#include "cliente.hpp"
#include "modo.hpp"


using namespace std;

int main(){
     
    int comando;
    //int resposta;
     string nome,telefone,email;
    // int idade;
    //long int cpf;
    
    
    cout << "Escolha o modo: " << endl;
    cout << "(1) Modo Venda" << endl;
    cout << "(2) Modo Recomendação" << endl;
    cout << "(3) Modo Estoque" <<endl;
    cout << "(4) Sair" << endl;
   
  

    cin >> comando;

    while(comando > 5){
        cin >> comando;
    }
    
   
    


    switch(comando){
        case 1:
        modo_venda();
        /*cout << "Já possui cadastro? " << endl;
        cout << "(1) Sim" << endl;
        cout << "(2) Não" << endl;
        cin >> resposta;
/*
        if(resposta==1){

        }
        else{
            cout << "Cadastre o cliente:" << endl;
                cout << "Nome: ";
                cin >> nome;

                cout << "CPF: ";
                cpf = getInput<long int>();

                cout << "Telefone: ";
                cin >> telefone;

                cout << "Email: ";
                cin >> email;
             
                
                //cliente.push_back(new Cliente(nome, cpf, telefone, ));
                //pessoas.push_back(new Cliente(nome, cpf, telefone, email, data_de_cadastro, total_de_compras));
                break;



        }*/
        break;




        case 2:
        modo_recomendacao();
        break;

        case 3:
        modo_venda();
       
        
        break;

        case 4:
        break;


    }
    


   

    return 0;
}