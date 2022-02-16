#include <iostream>
#include <string>

using namespace std;

class Cadastro{
  private:
    string nome, endereco;//Atributos para cadastro do usuário
  
  public:
    void setNome(string name){
      this->nome = name;
    }

    void setEndereco(string address){
      this->endereco = address;
    }
};


class cliente : public Cadastro{ //
  //Cadastro personalizado para o cliente
  private:
    string 
};

class restaurante : public Cadastro{
  
  private:
    string comidas, bebidas; //cadastro das ofertas do restaurante
 
  public:

    void setComidas(string food){
      this->comidas=food;
    }

    void setbebidas(string drink){
      this->bebidas=drink;
    }



};

int main(){
  
  


  return 0;
}
