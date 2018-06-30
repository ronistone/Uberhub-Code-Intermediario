#include <bits/stdc++.h>
using namespace std;


int soma( int numeroA, int numeroB ) {
	if(numeroA != 0)
		return numeroA + numeroB;
	else
		return numeroB;
}

void concatena( char a[], char b[] ) {
	char resposta[300];
	int x = 0;
	for( int i=0; i<strlen(a); i++, x++ ) {
		resposta[x] = a[i];
	}
	for(int i = 0; i<strlen(b); i++, x++) {
		resposta[x] = b[i];
	}
	resposta[x] = '\0';
	cout << "RESPOSTA " << resposta << endl;
}



int main() {
	int a, b;
	char c[100], d[100], e[300];
	
	while(cin >> a >> b and (a!=0 or b!=0)){
		cout << soma(a,b) << endl;
	}
	while(cin >> c >> d){
		
		concatena(c, d);
	}



	return 0;
}
