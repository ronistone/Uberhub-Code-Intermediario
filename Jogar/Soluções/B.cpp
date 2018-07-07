#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	scanf("%d", &n);
	if(__builtin_popcount(n) == 1) printf("%d\n", 31 - __builtin_clz(n));
	else printf("-1\n");
	
}
