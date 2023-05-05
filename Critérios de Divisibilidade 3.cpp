#include <iostream>
#include <string>

using namespace std;

int main()
{
    int sp=0, si=0;
    string N;
	
	getline(cin,N);
	
	for(int c=0;c<N.size();c++)
	{
	    if((c+1)%2) si+=((int)N[c]-(int)'0');
	    else sp+=((int)N[c]-(int)'0');
	}
	
	if(sp==si) cout << 'S' << endl;
	else cout << 'N' << endl;


    return 0;
}
