#include <bits/stdc++.h>
using namespace std;


main(){
		
	set<int> conjunto;
	set<int>::iterator it;
	
	// INSERT --> se o elemento ainda não existe,
	//            insere o elemento no SET
	cout << "Tamanho do Conjunto:" << conjunto.size() << endl;
	conjunto.insert(10);
	conjunto.insert(10);
	conjunto.insert(10);
	conjunto.insert(10);
	cout << "Tamanho do Conjunto:" << conjunto.size() << endl;
	conjunto.insert(20);
	cout << "Tamanho do Conjunto:" << conjunto.size() << endl;

	
	
	while(!conjunto.empty()){
		it = conjunto.begin();
		cout << "Removendo o " << *it << endl;
		conjunto.erase(it);
	}
	
	
	// CLEAR --> Limpa o set, apagando 
	//			 todos os valor existentes
	conjunto.insert(10);
	conjunto.insert(20);	
	conjunto.insert(30);
	conjunto.clear();
	
	cout << "Tamanho do Conjunto:" << conjunto.size() << endl;
	////////////////////////////////////////////////////////
	
	
	
	for(int i=0;i<=10;i++){
		conjunto.insert(i * 10);
	}
	
	// find --> retorna um iterator pro valor procurado
	//          se não existir retorna conjunto.end()
	
	int num = 10;
	it = conjunto.find(num);
	if(it!=conjunto.end())
		cout << "Encontramos: " <<  *it << endl;
	else
		cout << "Não encontramos" << endl;
	
	
	num = 32;
	it = conjunto.find(num);
	if(it!=conjunto.end())
		cout << "Encontramos: " <<  *it << endl;
	else
		cout << "Não encontramos" << endl;
	//////////////////////////////////////////////////////
	
	// Count --> retorna 1 se existe o valor no SET
	//			 retorna 0 se não existe  o valor no SET
	
	num = 100;
	if(conjunto.count(num))
		cout << "O conjunto possui o valor " << num << endl;
	else
		cout << "O conjunto possui não o valor " << num << endl;
	
	num = 23;
	if(conjunto.count(num))
		cout << "O conjunto possui o valor " << num << endl;
	else
		cout << "O conjunto possui não o valor " << num << endl;
		
		
	cout << "Conjunto até o momento: ";
	for(it = conjunto.begin();it!= conjunto.end();it++){
		cout << *it << " ";
	}
	cout << endl;
	//////////////////////////////////////////////////////////////
	
	// LOWER_BOUND --> Primeiro valor que não 
	//				   vem antes do numero procurado, ou seja
	//				   Primeiro valor maior ou igual ao numero
	num = 30;
	it = conjunto.lower_bound(num);
	cout << "lower_bound de " << num << ": " << *it << endl;
	cout << *it << endl;
	
	
	num = 23;
	it = conjunto.lower_bound(num);
	cout << "lower_bound de " << num << ": " << *it << endl;
	cout << *it << endl;
	
	num = 31;
	it = conjunto.lower_bound(num);
	cout << "lower_bound de " << num << ": " << *it << endl;
	cout << *it << endl;
	
	//////////////////////////////////////////////////////////////////
	
	
	// UPPER_BOUND --> Primeiro valor maior que o numero procurado
	
	num = 30;
	it = conjunto.upper_bound(num);
	cout << "upper_bound de " << num << ": " << *it << endl;
	cout << *it << endl;
	
	
	num = 23;
	it = conjunto.upper_bound(num);
	cout << "upper_bound de " << num << ": " << *it << endl;
	cout << *it << endl;
	
	num = 31;
	it = conjunto.upper_bound(num);
	cout << "upper_bound de " << num << ": " << *it << endl;
	cout << *it << endl;
	
	
}
