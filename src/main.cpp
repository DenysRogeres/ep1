#include <iostream>
#include <vector>
#include <string>
#include "cliente.hpp"

using namespace std;
template <typename T1>

T1 getInput(){
    while(true){
    T1 valor;
    cin >> valor;
    if(cin.fail()){
        cin.clear();
        cin.ignore(32767,'\n');
        cout << "Entrada inválida! Insira novamente: " << endl;
    }
    else{
        cin.ignore(32767,'\n');
        return valor;
    }
    }
}


int main(){

    cout << "Escolha o modo: " << endl;
    cout << "(1) Modo Venda" << endl;
    cout << "(2) Modo Recomendação" << endl;
    cout << "(3) Modo Estoque" <<endl;
    
    int comando;
    int resposta;
     string nome;
    int idade;
    long int cpf;
  

    cin >> comando;

    switch(comando){
        case 1:
        cout << "Já possui cadastro? " << endl;
        cout << "(1) Sim" << endl;
        cout << "(2) Não" << endl;
        cin >> resposta;

        if(resposta==1){

        }
        else{
            cout << "Cadastre o cliente:" << endl;
                cout << "Nome: ";
                nome = getString();

                cout << "CPF: ";
                cpf = getInput<long int>();

                cout << "Telefone: ";
                telefone = getString();

                cout << "Idade: ";
                email = getInput<int>();
             
                
                //cliente.push_back(new Cliente(nome, cpf, telefone, ));
                //pessoas.push_back(new Cliente(nome, cpf, telefone, email, data_de_cadastro, total_de_compras));
                break;



        }




        case 2:

        case 3:
        break;
    }
    


   

    return 0;
}