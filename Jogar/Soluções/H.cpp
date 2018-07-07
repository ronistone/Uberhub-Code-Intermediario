#include <bits/stdc++.h> 

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	stack<int> p;
	char op;
	int x;
	for (int i = 0; i < n; i++)
	{
		scanf(" %c", &op);
		if(op=='I'){
			scanf("%d", &x);
			p.push(x);
		}else if(op=='C'){
			if((int)p.size() > 0) printf("%d\n", p.top());
			else printf("-1\n");
		}else{
			if((int)p.size() > 0) p.pop();
		}
	}
	
	
	return 0;
}
