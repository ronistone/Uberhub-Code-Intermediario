#include <bits/stdc++.h>
using namespace std;

int main ()
{
  stack<int> pilha;

  pilha.push(10);
  pilha.push(20);
  pilha.push(30);
  pilha.push(40);
  
  cout << "A pilha tem tamanho: " << pilha.size() << endl;

  while(!pilha.empty()){
	cout << "Desempilhando o valor: " << pilha.top() << endl;
	pilha.pop();
  }

  return 0;
}
