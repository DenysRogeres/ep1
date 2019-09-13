#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <string>

using namespace std;

class Produto{
private:

    string nome;
    int quant;
    float preco;

public:

Produto();
~Produto();

//Métodos acessores
void set_nome(string nome);
string get_nome();

void set_quant(int quant);
int get_quant();

void set_preco(float preco);
long int get_preco();
};


#endif