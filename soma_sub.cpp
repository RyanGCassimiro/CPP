#include <iostream>
using namespace std;

int main() {
  cout << "Esse programa vai calcular a soma e a subtração de dois números inteiros\n";
  int valorx, valory, soma, subtracao;

  cout << "Digite o primeiro valor:";
  cin >> valorx;

  cout << "Digite o segundo valor:";
  cin >> valory;

  soma = valorx + valory;
  subtracao = valorx - valory;
  cout << "O resultado da soma entre os dois valores é: " << soma <<"\n" "e o resultado da subtração é: " << subtracao << endl;
}