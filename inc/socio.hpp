
#include "cliente.hpp"
#include <string>
#include <iostream>
#ifndef SOCIO_HPP
#define SOCIO_HPP

using namespace std;


class Socio: public Cliente{
    protected:
    
    long int telefone;
    string email;
    string data_cadastro;

    

    public:
    Socio();
    Socio(string nome,int idade,string cpf,long int telefone,string email,string data_cadastro);
    Socio(long int telefone, string email, string data_cadastro);

    ~Socio();

    //Métodos acessores

    void set_telefone(long int telefone);
    int get_telefone();

    void set_email(string email);
    string get_email();

    void set_data_cadastro(string data_cadastro);
    string get_data_cadastro();

};
#endif