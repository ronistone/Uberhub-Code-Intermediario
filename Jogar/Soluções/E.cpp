#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a>b && a>c) printf("1\n");
	if(a<b && b>c) printf("2\n");
	if(a<c && b<c) printf("3\n");
}
