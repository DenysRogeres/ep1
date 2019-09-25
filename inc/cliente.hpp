#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <string>
#include <iostream>


using namespace std;

class Cliente {
//private:
protected:

    //Atributos
    string nome;
    int idade;
    string cpf;
    

public:
//Métodos 
Cliente(); //Construtor
~Cliente(); //Destrutor

//Métodos acessores
void set_nome(string nome);
string get_nome();

void set_idade(int idade);
int get_idade();

void set_cpf(string cpf);
string get_cpf();



//Outros Métodos

void imprime_dados();


};

#endif