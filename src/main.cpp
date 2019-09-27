#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include "cliente.hpp"
#include "modo.hpp"
#include "produto.hpp"
#include "cadastro.hpp"
#include <fstream>
#include "socio.hpp"


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

/*string getString(){
    string entrada;
    cin.ignore();
    getline(cin,entrada);
    return entrada;
}*/

int main(){
    int comando=-1;
    //int resposta;
    int comando_estoque;
    fstream arquivoCliente, arquivoProduto;
    string linha;
    string nome;
    int idade;
    string cpf;
    long int telefone;
    string email;
    string data_cadastro;
    string linhas;

    vector < Produto* > produtos;
    vector < Cliente*> clientes;
    

    arquivoCliente.open("Cliente.txt");
    while(getline(arquivoCliente,linha)){
        arquivoCliente>>nome;
        arquivoCliente>>cpf;
        arquivoCliente>>idade;
        
        clientes.push_back(new Cliente(nome,idade,cpf));}
        arquivoCliente.close();
    
    while(comando!=0){
    system("clear");
    cout << "Escolha o modo: " << endl << "(1) Modo Venda" << endl << "(2) Modo Recomendação" << endl << "(3) Modo Estoque" <<endl <<"(4) Sair" << endl;

    comando = getInput<int>();

    switch (comando){
    case 1:
    
    while(true){
    fstream arquivoCliente, arquivoProduto,arquivoSocio;
    string nome;
    int idade;
    string cpf;
    string email;
    string data_cadastro;
    string linhas;

    
    
    system("clear");
    int comando_venda;
    cout << "==============Modo Venda=========== "<<endl;
    cout << "Você entrou no Modo Venda, clientes socios possuem 15% de desconto nas compras " <<endl;
    cout << "(1) Carrinho" <<endl<< "(2) Cadastrar Cliente" <<endl<< "(3) Cadastrar Socio" <<endl<< "(0) Sair" <<endl;
    comando_venda=getInput<int>();

    if(comando_venda==1){
    

    } 
    if(comando_venda==2){
        while(true){
            system("clear");
            cout <<"=============Cadastro de Cliente============="<< endl;
            arquivoCliente.open("Clientes.txt",ios::out|ios::app);
            cout << "Nome: ";
            nome=getString();
            arquivoCliente<<nome<<endl;
            cout << "Idade: ";
            idade=getInput<int>();
            arquivoCliente<<idade<<endl;
            cout << "CPF: ";
            cpf=getString();
            arquivoCliente<<cpf<<endl;

    
         clientes.push_back(new Cliente(nome,idade,cpf));
            arquivoCliente.close();
            sleep(1);
            break;
            }
    

        }
    if(comando_venda==3){
        while(true){
            system("clear");
            cout <<"============Cadastro de Cliente Socio============" <<endl;
            arquivoSocio.open("Socio.txt",ios::out|ios::app);
            cout << "Nome: ";
            nome=getString();
            arquivoSocio<<nome<<endl;
            cout << "Idade: ";
            idade=getInput<int>();
            arquivoSocio<<idade<<endl;
            cout << "CPF: ";
            cpf= getString();
            arquivoSocio<<cpf<<endl;
            cout<< "Telefone: ";
            telefone=getInput<long int>();
            arquivoSocio<<telefone<<endl;
            cout <<"Email: ";
            email=getString();
            arquivoSocio<<
            email<<endl;
            cout << "Data de cadastro: ";
            data_cadastro=getString();
            arquivoSocio<<data_cadastro<<endl;

            clientes.push_back(new Socio(nome,idade,cpf,telefone,email,data_cadastro));
            arquivoSocio.close();
            sleep(1);
            break;

        }

    }

    if(comando_venda==0){
        system("clear");
    }
        break;
    }
    break;

    case 2:
    cout << "===========Modo Recomenação=============" <<endl <<endl;;
        break;

    case 3:
    while(true){ 
    system("clear");
    cout << "=============Modo Estoque=================" <<endl<<endl;
    cout << "(1) Cadastrar Produtos" << endl << "(2) Visualizar produtos " << endl << "(0) Voltar" <<endl;
    comando_estoque=getInput<int>();
    if(comando_estoque==1){
       system("clear");
    
        produtos.push_back(new Produto(prod_cadastro()));
        sleep(1);

    }
    if(comando_estoque==2){
        int quant_prod;
        quant_prod=produtos.size();
        for(int k=0;k<quant_prod;k++){
        produtos[k]->imprime_dados();
        sleep(2);
    }}
    if(comando_estoque==0){
        system("clear");
        sleep(0.5);
        
      
    }
    break;
    }

       // break;
    

    case 4:
        break;
     
    }
    }
    


   

    return 0;
   
    }

    