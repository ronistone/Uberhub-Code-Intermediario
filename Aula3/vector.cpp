#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int a[100];
  vector<int> um;          // Criando vetor vazio
  vector<int> dois (4,100);// Criando vetor com 4 posições com valor 100 em cada posição
  
  cout << "Vector dois: ";
  for(int i=0;i<dois.size();i++)
		cout << dois[i] << "  ";
  cout << endl;
  
  
  for(int i=0;i<5;i++)
		um.push_back(i);

  cout << "Vetor Um: ";	
  for(int i=0;i<um.size();i++)
	cout << um[i] << "  ";
  cout << endl;

  um.clear();

  cout << "Vetor Um apos clear(): ";	
  for(int i=0;i<um.size();i++)
	cout << um[i] << "  ";
  cout << endl;

  return 0;
}
