#include <bits/stdc++.h> 

using namespace std;
typedef long long int ll;

struct ovni{
	int x, y, r;
	ovni(){}
	ovni(int _x, int _y, int _r){
		x = _x;
		y = _y;
		r = _r;
	}
};

vector<ovni> disco;
int n;

double dist(int x, int y, int xx, int yy){
	return hypot(x-xx, y-yy);
}

bool cruza(int i, int j){
	if(dist(disco[i].x, disco[i].y, disco[j].x, disco[j].y) <= disco[i].r + disco[j].r) return true;
	return false;
}

bool isolado(int idx){
	for (int i = 0; i < n; i++)
	{
		if(i == idx) continue;
		if(cruza(idx, i)) return false;
	}
	
	return true;
}

int main(){
	int x, y, r;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d", &x, &y, &r);
		disco.push_back(ovni(x, y, r));
	}
	
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if(isolado(i)){
			ans++;
		}
	}
	
	printf("%d\n", ans);
	
	return 0;
}
