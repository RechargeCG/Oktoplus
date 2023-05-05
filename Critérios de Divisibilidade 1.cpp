#include <iostream>
#include <string>

using namespace std;

int main()
{
    int soma=0;
    string N;
	
	getline(cin,N);
	
	if(!(((int)N[N.size()-1]-48)%2)) cout << 'S' << endl;
	else cout << 'N' << endl;
	for(int c=0;c<N.size();c++) soma+=(int)N[c]-48;
	if(!(soma%3)) cout << 'S' << endl;
	else cout << 'N' << endl;
	if(!(((int)N[N.size()-1]-48)%5)) cout << 'S' << endl;
	else cout << 'N' << endl;

    return 0;
}
