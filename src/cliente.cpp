#include "cliente.hpp"
#include <iostream>
#include <string>

using namespace std;

Cliente::Cliente(){
    //cout<< "Construtor da classe Cliente" << endl;
    set_nome("");
    set_idade(0);
    set_cpf("");
}
Cliente::Cliente(string nome,int idade,string cpf){
    set_nome(nome);
    set_idade(idade);
    set_cpf(cpf);
}

Cliente::~Cliente(){
    cout<< "Destrutor da classe Cliente"<< endl;
}

string Cliente::get_nome(){
    return nome;
}

void Cliente::set_nome(string nome){
    this->nome=nome;
}

int Cliente::get_idade(){
    return idade;
}

void Cliente::set_idade(int idade){
    this->idade=idade;
}

string Cliente::get_cpf(){
    return cpf;
}

void Cliente::set_cpf(string cpf){
    this->cpf= cpf;
}