#include <bits/stdc++.h>

using namespace std;

int main(){
	int A, B, C, D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	printf("%d\n", (A+B)*(B-A)*(C+D)*(C-D) + A + B + C + D);
	
	return 0;
}
