#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N,cont=0;
	
	cin >> N;
	
	string gab,resp;
	
	cin >> gab >> resp;
	
	for(int c=0;c<N;c++) if(gab[c]==resp[c]) cont++;
	
	cout << cont;

    return 0;
}
