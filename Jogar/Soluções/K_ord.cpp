#include <bits/stdc++.h>
using namespace std;


main(){
	
	vector<int> a(3),b(3);
	
	cin >> a[0] >> a[1] >> a[2];
	cin >> b[0] >> b[1] >> b[2];
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	if(a[0] > b[2])			cout << "J1" << endl;
	else if(b[0] > a[2])	cout << "J2" << endl;
	else					cout << "E" << endl;
		

}
