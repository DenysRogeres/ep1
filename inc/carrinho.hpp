
#ifndef CARRINHO_HPP
#define CARRINHO_HPP
#include <iostream>
#include "produto.hpp"
#include <vector>
#include <string>

using namespace std; 

class Carrinho{
private:
vector <string> nomesProdutos;
vector<int> quantCompra;
float total;

public:
Carrinho();
Carrinho(vector <string> nomeProdutos, vector <int> quantCompra, float total);
~Carrinho();

void set_nomesProdutos(vector <string> nomesProdutos);
string get_nomesProdutos(int posicao);

void set_quantCompra(vector <int> quantCompra);
int get_quantCompra(int posicao);

void set_total(float total);
float get_total();

void imprimirCompra();

};
#endif