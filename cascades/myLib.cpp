#include <iostream>
#include "myLib.hpp"

using namespace std;

int soma(int a, int b) {
  int x = 0;
  if (a > b) {
    x = a + b;
  }
  return x + 1;
}

char toLower(char c) {

  char ret = c;

  if (65 < c && c < 92) {
    ret = c + 32;
  }

  return ret;
}

int count(int c) {
  char nome[100] = "Rodrigo Peixoto";
  int x[10];
  for (int i = 1; i < 100000; ++i) {
    x[i] = i;
  }
  return x[100000];
}

int Registro::counter = 0;

Registro::Registro(int id) {
  this->id = id;
  counter++;
  cout << "Temos " << counter << " registros" << endl;
}

Registro::~Registro(){
  counter--;
  cout << "Temos " << counter << " registros" << endl;
}

void Registro::setId(int newId) {
  this->id = newId;
}

int Registro::getId() {
  int id = 5; // ñ pega nada
  return this->id;
}

Conta::Conta(int id, double saldo) : Registro(id) {
  this->saldo = saldo;
}

void Conta::print() {
  cout << this->getId() << " , " << this->saldo << endl;
  cout << this->id << " , " << this->saldo << endl;
}
Conta Conta::operator+(Conta other) {
  Conta ret(this->id, this->saldo + other.saldo);
  return ret;
}
