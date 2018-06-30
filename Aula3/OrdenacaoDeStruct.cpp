#include <bits/stdc++.h>
using namespace std;

struct carro{
	
	char letra;
	int portas;
	int lugares;
	float preco;
	
	carro(){}
	
	carro(char _letra, int _portas, int _lugares, float _preco){
		letra = _letra;
		portas = _portas;
		lugares = _lugares;
		preco = _preco;
	}
	
	bool operator < (carro b){
		if( portas > b.portas ){
			return true;
		} else if(portas == b.portas){
			if(lugares > b.lugares){
				return true;
			} else if(lugares == b.lugares){
				if(preco < b.preco){
					return true;
				}
			}
		}
		return false;
	}
	
};

carro a('a', 4, 5, 10000);
carro b('b', 4, 7, 10000);
carro c('c', 1, 1, 1000);


main(){

	vector<carro> v;
	
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	
	carro d('d', 4, 7, 1000);
	
	v.push_back(d);
	
	sort(v.begin(), v.end());
	
	for(int i=0;i<v.size();i++){
		cout << "Carro "<< v[i].letra << ":" << endl;
		cout << "\t" << v[i].portas << endl;
		cout << "\t" << v[i].lugares << endl;
		cout << "\t" << v[i].preco << endl;
		cout << endl;
	}


}
