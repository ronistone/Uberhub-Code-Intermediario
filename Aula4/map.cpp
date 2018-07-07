#include <bits/stdc++.h>

using namespace std;


main(){
	
	map<int,string> numeroToNome;
	map<string,int> nomeToNumero;
	
	// map[key] -> value --> o map "mapeia" uma chave para um valor,
	//						 permitindo fazer acesso direto ao valor
	numeroToNome[1] = "Maria";
	numeroToNome[2] = "José";
	numeroToNome[3] = "João";
	
	nomeToNumero["Maria"] = 1;
	nomeToNumero["José"] = 2;
	nomeToNumero["João"] = 3;
	
	map<int,string>::iterator it;
	map<string,int>::iterator it2;
	
	for(it = numeroToNome.begin(); it!= numeroToNome.end(); it++){
		cout << it->first << ": " << it -> second << " ---> " << nomeToNumero[it->second] << endl;
	}
	
	//for(it2 = nomeToNumero.begin(); it2 != nomeToNumero.end(); it2++){
		//cout << it2 -> first << ": "  << it2 -> second << endl;
	//}
	cout << endl;
	cout << "Contem 'BATATA': " << nomeToNumero.count("BATATA") << endl;
	cout << "Contem 'Maria': "  << nomeToNumero.count("Maria") << endl;


	cout << "\n\nTamanho: " << nomeToNumero.size() << endl;
	while(!nomeToNumero.empty()){
		it2 = nomeToNumero.begin();
		cout << "Apagando: " << it2 -> first << " --> "  << it2 -> second << endl;
		nomeToNumero.erase(nomeToNumero.begin());
		cout << "Novo tamanho: " <<  nomeToNumero.size() << endl;
	}
	
	cout << "Numero To Nome Tamanho: " << numeroToNome.size() << endl;	
	numeroToNome.clear();
	cout << "Numero To Nome Tamanho: " << numeroToNome.size() << endl;
}
