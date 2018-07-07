#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	scanf("%d", &n);
	for(int i=0; i<(1<<n); i++){
		for(int j=n-1; j>=0; j--){
			printf("%d%c", (i&(1<<j)) ? 1 : 0,   j ? ' ' : '\n');
		}
	}
}
