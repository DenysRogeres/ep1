#include <iostream>
#include "socio.hpp"

Socio::Socio(){
    set_nome("");
    set_idade(0);
    set_cpf("");
    set_telefone(0);
    set_email("");
    set_data_cadastro("0/0/0");
}

Socio::Socio(string nome,int idade,string cpf,long int telefone,string email,string data_cadastro){
set_nome(nome);
set_idade(idade);
set_cpf(cpf);
set_telefone(telefone);
set_email(email);
set_data_cadastro(data_cadastro);

}
Socio::Socio(long int telefone, string email, string data_cadastro){
  
    set_telefone(telefone);
    set_email(email);
    set_data_cadastro(data_cadastro);
}
Socio::~Socio(){

}

int Socio::get_telefone(){
    return telefone;
}

void Socio::set_telefone(long int telefone){
    this->telefone=telefone;
}
string Socio::get_email(){
    return email;
}
void Socio::set_email(string email){
    this->email=email;
}
string Socio::get_data_cadastro(){
    return data_cadastro;
}
void Socio::set_data_cadastro(string data_cadastro){
    this->data_cadastro=data_cadastro;
}