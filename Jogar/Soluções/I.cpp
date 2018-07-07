#include <bits/stdc++.h>

using namespace std;

#define N 101010

struct colmeia{
	int x, y, qtd;
	
	colmeia(){x=y=qtd=0;}
	colmeia(int a, int b, int c) : x(a), y(b), qtd(c) {}
	
	bool operator < (colmeia g) const{
		if(x!=g.x) return x < g.x;
		if(qtd!=g.qtd) return qtd > g.qtd;
		return y<g.y;
	}
};

colmeia vet[N];
int n;


long long int solve(){
	
	long long int ans=0;
	int last_y=0;
	for(int i=0; i<n; i++){
		ans+= abs(vet[i].y - last_y);
		last_y = vet[i].y;
	}
	return ans;
}

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d %d", &vet[i].x, &vet[i].y, &vet[i].qtd);
	}
	sort(vet, vet+n);
	
	printf("%lld\n", solve());
}
