#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	string s;
	int n, k;
	
	cin >> n >> k;
	cin >> s;
	k = k%n;
	
	cout << s.substr(n-k, k) << s.substr(0, n-k) << endl;
}
