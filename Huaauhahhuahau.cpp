#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string r;
	vector<char> vogais;
	
	cin >> r;
	
	for(int c=0;c<r.size();c++)
		if(r[c]=='a'||r[c]=='e'||r[c]=='i'||r[c]=='o'||r[c]=='u')
			vogais.push_back(r[c]);
	for(int c=0;c<vogais.size();c++)
		if(vogais[c]!=vogais[vogais.size()-1-c])
		{
			cout << 'N';
			return 0;
		}
	
	cout << 'S';

    return 0;
}
