#include <iostream>
#include <string>
#include <vector>
#include"cadastro.hpp"
#include <fstream>

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
    //cin.ignore();
    cin >> entrada;
   // getline(cin,entrada);
    
    return entrada;
}
fstream arquivoProduto;

Produto prod_cadastro(){
system("clear");
arquivoProduto.open("doc/Produto.txt",ios::out|ios::app);
cout << "Cadastro de produto" <<endl;
cout << "Nome do produto: ";
string nome_prod = getString();
arquivoProduto<<nome_prod<<endl;

cout << "Quantidade: ";
int quant = getInput<int>();
arquivoProduto<<quant<<endl;

cout << "Preço: ";
float preco = getInput<float>();
arquivoProduto<<preco<<endl;

int c=0;

while(c<=0){
    cout <<"Pertece a quantas categorias?"<<endl;
    c=getInput<int>();
    if(c==1)
    cout << "Informe sua categoria: "<<endl;
     

    else if(c>1)
    cout <<"Informe suas categorias "<<endl;
}
vector <string> categoria;
for(int b=0; b<c;b++){
    cout << b+1 << "° categoria: "<<endl;
    categoria.push_back(getString());
    arquivoProduto << categoria[b]<<endl;
arquivoProduto.close();
}
Produto produto;
system("clear");
return produto = Produto (nome_prod, quant, preco, categoria);

}