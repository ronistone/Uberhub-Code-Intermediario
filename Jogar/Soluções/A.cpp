#include <bits/stdc++.h> 

using namespace std;
int beleza[5];
int custo[5];

int A, B;

int get(int x, int y){
	if(x > A && y >= B) return 0;
	if(x <= A && y > B) return 1;
	if(x < A && y <= B) return 2;
	if(x >= A && y < B) return 3;
}

int main(){
	memset(beleza, 0, sizeof beleza);
	memset(custo, 0, sizeof custo);
	
	int parte, n, L, H, x, y, b, c;
	scanf("%d %d %d %d %d", &n, &L, &H, &A, &B);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &x, &y, &b, &c);
		parte = get(x, y);
		beleza[parte] += b;
		custo[parte] += c;
	}
	
	for (int i = 0; i < 4; i++)
	{
		printf("%d %d\n", beleza[i], custo[i]);
	}
	
	
	return 0;
}
