#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	int aa, bb, cc;
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &aa, &bb, &cc);

	if(a > aa && a > bb && a > cc && b > aa && b > bb && b > cc && c > aa && c > bb && c > cc) printf("J1\n");
	else if(a < aa && a < bb && a < cc && b < aa && b < bb && b < cc && c < aa && c < bb && c < cc) printf("J2\n");
	else printf("E\n");
	
	return 0;
}
