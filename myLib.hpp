#ifndef __TEST__
  
#define __TEST__
#include <iostream>
using namespace std;

  struct conta {
    //char nome;
    double saldo;
  };

  class Registro {
    
    int id;

    public:
      Registro(int id);
      void setId(int newId);
      int getId();

  };

  class Conta: public Registro {
    
    public:
      Conta(int id = 0, double saldo = 0); // constructor
      void print();
      double saldo;

  };

  int soma(int a, int b);
  int count(int c);

#endif


