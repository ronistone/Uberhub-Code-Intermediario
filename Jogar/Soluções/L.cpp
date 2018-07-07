#include <bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	
	if(n < 40) printf("devagar\n");
	else if(n <= 80) printf("mediano\n");
	else if(n <= 160) printf("veloz\n");
	else printf("inexistente\n");
	
	return 0;
}
