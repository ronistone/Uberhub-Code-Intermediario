#include <bits/stdc++.h>
using namespace std;


int main(){

	queue<int> fila;
	
	fila.push(10);
	fila.push(20);
	fila.push(30);
	fila.push(40);
	
	cout << "A Fila tem tamanho " << fila.size() << endl;
	cout << "O Primeiro da fila é " << fila.front() << endl;
	cout << "O Ultimo da fila é " << fila.back() << endl;
	
	
	cout << endl;
	while(!fila.empty()){
		cout << "O " << fila.front() << " saiu da fila" << endl;
		fila.pop();
	}


	return 0;
}
