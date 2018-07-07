#include <bits/stdc++.h>
using namespace std;

main(){
	
	vector<pair<int,char> > pares;
	int i;
	char l;
	
	for(i=0, l = 'a';i<10;i++, l++){
		pares.push_back(make_pair(i,l));
	}
	
	for(int i=0;i<pares.size();i++){
		cout << "pares[i]: (" << pares[i].first << ", " << pares[i].second << ")" << endl;
	}
	
}
