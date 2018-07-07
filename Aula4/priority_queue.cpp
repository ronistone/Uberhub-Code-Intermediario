#include <bits/stdc++.h>
using namespace std;


main(){

	priority_queue<int> fila;
	
	
	fila.push(10);
	fila.push(20);
	fila.push(30);
	fila.push(40);
	fila.push(50);
	fila.push(60);
	
	
	cout << "Temos " << fila.size() << " valores na fila " << endl;
	
	while(!fila.empty()){
		cout << "Removendo " << fila.top() << endl;
		fila.pop();
	}
	
}
