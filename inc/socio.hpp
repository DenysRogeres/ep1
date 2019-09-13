#include <string>
#ifndef SOCIO_HPP
#define SOCIO_HPP
#include "pessoa.hpp"

using namespace std;


class Socio: public Cliente{
    private:
    string endereco;
    int telefone;
    string email;

    

    public:
    
    Socio();
    ~Socio();

    //Métodos acessores

    void set_endereco(string endereco);
    string get_endereco();

    void set_telefone(int telefone);
    int get_telefone();

    void set_email(string email);
    string get_email();

};
#endif