#include <iostream>

using namespace std;

int main()
{    	
    int N,tot=0;
	
	cin >> N;
	
	int num[N];
	
	for(int c=0;c<N;c++)
	{
		cin >> num[c];
	}
	for(int c=0;c<N-2;c++)
	{
		if(num[c]==1&&num[c+1]==0&&num[c+2]==0) tot++;
	}
	
	cout << tot;

    return 0;
}
