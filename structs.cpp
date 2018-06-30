#include <bits/stdc++.h>
using namespace std;

struct carro{
	
	float velocidade;
	float combustivel;
	char modelo[40];
	int portas;

};


main(){

	carro a;
	
	a.velocidade = 100;
	a.combustivel = 100;
	strcpy(a.modelo, "Fox");
	a.portas = 4;
	
	cout << a.velocidade << endl;
	cout << a.combustivel << endl;
	cout << a.modelo << endl;
	cout << a.portas << endl;
	

}
