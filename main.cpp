#include <iostream>
#include <string>

#include "myLib.hpp"

using namespace std;

int x[10] = {1,2,3,4,5,6,7,8,9,10};

int main () {
  int m = 10;
  string t = "Hello World!!!";
  cout << t << soma(m,5) << endl;
  cout << x[10] << endl;

  {
    float vecto[10][10][10]; //é adicionado a pilha
  }
  // o próprio sistema gerencia a memoria e deleta

  int a = 10;
  int *b = &a;
  int *c;
  c = b;
  c = &a;
  *b = 3;
  cout << "b: " << b << endl;
  cout << "*b: " << *b << endl;
  cout << "a: " << a << endl;
  cout << "&a: " << &a << endl;
  cout << "c: " << c << endl;
  cout << "*c: " << *c << endl;

  {
    // alocação dinãmica
    int * i = new int; //memória heap!
    *i = 100;
    cout << i << " " << *i << endl;
  }
  //i? n sabe! 100 ainda na memória! Cuidado!

  struct conta * banco = 0;
  banco = new struct conta[1000];
  //banco[0].nome = "Emiliano Carvalho";
  banco[0].saldo = 100.50;
  //banco[100].nome = "Augusto Choairy";
  banco[100].saldo = 30;
  //cout << banco[0].nome << endl;
  cout << banco[0].saldo << endl;

  Conta test; // pilha
  //test.nome = "Emiliano Carvalho";
  test.setId(3456);
  test.saldo = 1000.00;
  test.print();

  Conta test2(1234, -37.97); // pilha
  test2.print();

  Conta * test3 = new Conta;
  test3->print();
  Conta * test4 = new Conta(6789);
  test4->print();

}
