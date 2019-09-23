#include <iostream>
#include <string>
#include <vector>
#include"cadastro.hpp"

using namespace std;
template <typename T1>
T1 getInput(){
    while(true){
        T1 valor;
        cin >> valor;
        if(cin.fail()){
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Entrada inválida! Insira novamete: " <<endl;
        }
    else {
        cin.ignore(32767,'\n');
        return valor;
    }
    }
}
string getString(){
    string entrada;
    cin.ignore();
    getline(cin,entrada);
    return entrada;
}
Produto prod_cadastro(){
system("clear");
cout << "Cadastro de produto" <<endl;
cout << "Nome do produto: " <<endl;
string nome_prod = getString();

cout << "Quantidade: " <<endl;
int quant = getInput<int>();

cout << "Preço: "<< endl;
float preco = getInput<float>();

int c=0;

while(c<=0){
    cout <<"Pertece a quantas categorias?";
    c=getInput<int>();
    if(c==1)
    cout << "Informe sua categoria" <<endl;
    else if(c>1)
    cout <<"Informe suas categorias" <<endl;
}
vector <string> categoria;
for(int b=0; b<c;b++){
    cout << b+1 << "° categoria" <<endl;
    categoria.push_back(getString());

}
Produto produto;
system("clear");
return produto = Produto (nome_prod, quant, preco, categoria);

}