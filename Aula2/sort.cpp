#include <bits/stdc++.h>
using namespace std;



main(){

	int a,b;

	while(cin >> a >> b and (a!=b)){
			cout << a << endl;
	}

	
}


bool maiorQue(int a, int b){
	if(a > 100)
		return true;
	return a < b;
}


bool ordenaString(char* a, char* b){
	
	for(int i=0;i<((int)strlen(a)) and i <((int)strlen(b));i++){
		if(a[i] != b[i]) return a[i] < b[i];
	}
	return false;	
}



main(){
	
	string a;
	
	cin >> a;
	
	cout << a.size() << endl;
	cout << a << endl;
	
	string b;
	cin >> b;
	
	string c = a+b;
	cout << c << endl;
}






		www.codepit.io








