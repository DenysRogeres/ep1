
#include <iomanip>
#include <iostream>
#include "carrinho.hpp"

Carrinho::Carrinho(){
    vector <string> vetnomeProd;
    vector <int> vetquantComp;
    vetnomeProd.push_back(" ");
    vetquantComp.push_back(0);
    set_nomesProdutos(vetnomeProd);
    set_quantCompra(vetquantComp);
}
Carrinho::Carrinho(vector <string> nomesProdutos, vector <int> quantCompra, float total){
    this-> nomesProdutos=nomesProdutos;
    this->quantCompra=quantCompra;
    this->total=total;
}
Carrinho::~Carrinho(){
}

void Carrinho::set_nomesProdutos(vector <string> nomesProdutos){
    this-> nomesProdutos=nomesProdutos;
}
string Carrinho::get_nomesProdutos(int posicao){
    return nomesProdutos[posicao];
}
void Carrinho::set_quantCompra(vector <int> quantCompra){
    this->quantCompra=quantCompra;
}
int Carrinho::get_quantCompra(int posicao){
    return quantCompra[posicao];
}
void Carrinho::set_total(float total){
    this->total=total;
}
float Carrinho::get_total(){
    return total;
}

void Carrinho::imprimirCompra(){
    int posicao=nomesProdutos.size();

    for(int x=0;x<posicao;x++){
        cout<<"Item comprado: "<< nomesProdutos[x]<<"Quantidade comprada: "<<quantCompra[posicao]<<endl;
    }
    cout<<"-----------------------"<< "Total a pagar: R$"<< get_total()<<endl;
}