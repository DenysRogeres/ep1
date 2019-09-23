#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <string>
#include <vector>
#include <iostream>


using namespace std;

class Produto{
private:

    string nome_prod;
    int quant;
    float preco;
    vector <string> categoria;

public:

Produto();
Produto(string nome_prod, int quant, float preco, vector <string> categoria);
~Produto();

//Métodos acessores
void set_nome_prod(string nome_prod);
string get_nome_prod();

void set_quant(int quant);
int get_quant();

void set_preco(float preco);
float get_preco();


void imprime_dados();
};
#endif