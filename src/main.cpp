#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include "cliente.hpp"
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
            cout << "Entrada inválida! Digite novamete: " <<endl;
        }
    else {

        cin.ignore(32767,'\n');
        return valor;
    }
    }
}


int main(){
    int comando=-1;
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
    

    arquivoCliente.open("doc/Cliente.txt");
    while(getline(arquivoCliente,linha)){
        arquivoCliente>>nome;
        arquivoCliente>>cpf;
        arquivoCliente>>idade;
        
        clientes.push_back(new Cliente(nome,idade,cpf));}
        arquivoCliente.close();
        
    
    while(comando!=0){
    system("clear");
    cout << "Escolha a opção desejada" << endl << "[1] Modo Venda" << endl << "[2] Modo Recomendação" << endl << "[3] Modo Estoque" <<endl <<"[4] Sair" << endl;

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
    cout <<"======================================"<<endl;
    cout << "             Modo Venda           "<<endl;
    cout <<"======================================"<<endl;
    cout << "Olá, você entrou no Modo Venda, clientes socios possuem 15% de desconto nas compras " <<endl;
    cout << "[1] Carrinho" <<endl<< "[2] Cadastrar Cliente" <<endl<< "[3] Cadastrar Socio" <<endl<< "[0] Sair" <<endl;
    comando_venda=getInput<int>();

    if(comando_venda==1){
      }
    
    if(comando_venda==2){
        while(true){
            system("clear");
             cout <<"--------------------------------------"<<endl;
            cout <<"          Cadastro de Cliente         "<< endl;
             cout <<"---------------------------------------"<<endl;
            arquivoCliente.open("doc/Clientes.txt",ios::out|ios::app);
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
            cout <<"--------------------------------------"<<endl;
            cout <<"      Cadastro de Cliente Sócio        "<< endl;
             cout <<"---------------------------------------"<<endl;
            arquivoSocio.open("doc/Socio.txt",ios::out|ios::app);
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
            arquivoSocio<<email<<endl;
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
    cout <<"======================================"<<endl;
    cout << "             Modo Recomendação         "<<endl;
    cout <<"======================================"<<endl;
        break;

    case 3:
    while(true){ 
    system("clear");
    cout <<"======================================"<<endl;
    cout << "             Modo Estoque          "<<endl;
    cout <<"======================================"<<endl;
    cout << "[1] Cadastrar Produtos" << endl << "[2] Visualizar produtos " << endl << "[0] Voltar" <<endl;
    comando_estoque=getInput<int>();
    if(comando_estoque==1){
        int aux_cadastro=1;
       while(aux_cadastro){

       
       system("clear");
        produtos.push_back(new Produto(prod_cadastro()));
        
       //sleep();
       cout <<"Deseja cadastrar mais algum produto? [1] Sim [0] Não"<<endl<<endl;
       aux_cadastro=getInput<int>();
       if(aux_cadastro==0)
       break;
       }
        

    }
    if(comando_estoque==2){
        int aux_cadastro=1;
       
            int quant_prod;
            
        quant_prod=produtos.size();
    
        for(int k=0;k<quant_prod;k++){
        produtos[k]->imprime_dados();
        cout<<"_____________________________"<<endl;
      
        
    }
       cout <<"Digite qualquer número para sair"<<endl;
       aux_cadastro=getInput<int>();
       
     break;}
    if(comando_estoque==0){
        system("clear");
        sleep(0.5);
        
      
    }
    break;
    }

       
    

    case 4:
        break;
     
    }
    }
    


   

    return 0;
   
    }

    