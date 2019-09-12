#include "cliente.hpp"
#include <iostream>

using namespace std;

Cliente::Cliente(){
    cout<< "Construtor da classe Cliente" << endl;
    set_nome("");
    set_idade(0);
    set_cpf(0);
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

long int Cliente::get_cpf(){
    return idade;
}

void Cliente::set_cpf(long int cpf){
    this->cpf= cpf;
}