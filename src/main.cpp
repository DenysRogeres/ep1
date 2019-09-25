#include <iostream>
#include <vector>
#include <string>
#include "cliente.hpp"
#include "modo.hpp"
#include "produto.hpp"
#include "cadastro.hpp"


using namespace std;

template <typename T1>
T1 getInput(){
    while(true){
        T1 valor;
        cin >> valor;
        if(cin.fail()){
            cin.clear();
            cin.ignore(32776, '\n');
            cout << "Entrada inválida! Insira novamete: " <<endl;
        }
    else {
        cin.ignore(32767,'\n');
        return valor;
    }
    }
}

int main(){
    int comando=-1;
    //int resposta;
    int resp_estoque;
  
     //string nome,telefone,email;
     
    // int idade;
    //long int cpf;

    vector < Produto* > produtos;
   
    
    while(comando!=0){
    cout << "Escolha o modo: " << endl;
    cout << "(1) Modo Venda" << endl;
    cout << "(2) Modo Recomendação" << endl;
    cout << "(3) Modo Estoque" <<endl;
    cout << "(4) Sair" << endl;

    comando = getInput<int>();

    switch (comando){
    case 1: 
    cout << "Modo" <<endl<<endl;
        break;
    

    case 2:
    cout << "Modo Recomenação" <<endl <<endl;;
        break;

    case 3:
    while(true){
    system("clear");
    cout << "VOCÊ ENTROU NO MODO ESTOQUE" <<endl<<endl;
    cout << "(1) Cadastrar produto" << endl << "(2) Listrar produtos" << endl;
    resp_estoque=getInput<int>();
    if(resp_estoque==1){
       system("clear");
    
        produtos.push_back(new Produto(prod_cadastro()));

    }
    if(resp_estoque==2){
        int quant_prod;
        quant_prod=produtos.size();
        for(int k=0;k<quant_prod;k++){
        produtos[k]->imprime_dados();
    }}

        break;
    }

    case 4:
        break;
     
    }
    }
    


   

    return 0;
   
    }

    