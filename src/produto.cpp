#include <iostream>
#include "produto.hpp"
#include <string>
#include <vector>


using namespace std;

Produto::Produto(){
  set_nome_prod("");
  set_quant(0);
  set_preco(0);
  
}

Produto::Produto(string nome_prod, int quant, float preco, vector <string> categoria){
    this->nome_prod=nome_prod;
    this->quant=quant;
    this->preco=preco;
    this->categoria=categoria;

}

Produto::~Produto(){

}

string Produto::get_nome_prod(){
    return nome_prod;
}

void Produto::set_nome_prod(string nome_prod){
    this->nome_prod=nome_prod;
}


int Produto::get_quant(){
    return quant;
}
void Produto::set_quant(int quant){
    this->quant=quant;
}

float Produto:: get_preco(){
    return preco;
}
void Produto::set_preco(float preco){
    this->preco=preco;
}

void Produto::imprime_dados(){
    cout << "Nome do produto: " << nome_prod <<endl;
    cout << "Quantidade: " << quant << endl;
    cout << "Preco: " << preco << endl;
    int i = categoria.size();
    if(i==1)
    cout << "Categoria: ";
    else 
    cout << "Categorias: " <<endl;
    for(int k=0;k<i;k++){
        cout << categoria[k] <<endl;
    }
}