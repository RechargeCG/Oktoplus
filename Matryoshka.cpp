#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, aux;
	
    cin >> N;
	
	vector<int> v;
	
	for(int c=0;c<N;c++)
	{
		cin >> aux;
		v.push_back(aux);
	}
	
	vector<int> ordem, cresc;
	ordem=v;
	
	sort(ordem.begin(),ordem.end());
	
	for(int c=0;c<N;c++)
	{
		if(v[c]!=ordem[c])
		{
			cresc.push_back(v[c]);
		}
	}
	
	sort(cresc.begin(),cresc.end());
	
	cout << cresc.size() << endl;
	if(cresc.size()) for(int c=0;c<cresc.size();c++) cout << cresc[c] << ' ';

    return 0;
}
