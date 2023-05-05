#include <iostream>

using namespace std;

int soma_vetor(int n, int v[])
{
	for(int c=1;c<n;c++)
		v[0]+=v[c];
	return v[0];
}

int main(){
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}
