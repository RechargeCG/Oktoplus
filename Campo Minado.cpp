#include <iostream>

using namespace std;

int main()
{    	
    int N;
	
	cin >> N;
	
	int tab[N],minas[N];
	
	for(int c=0;c<N;c++)
	{
		cin >> tab[c];
	}
	
	for(int c=0;c<N;c++)
	{
		minas[c]=0;
		if(c>0&&tab[c-1]) minas[c]++;
		if(tab[c]) minas[c]++;
		if(c<N-1&&tab[c+1]) minas[c]++;
	}
	
	for(int c=0;c<N;c++)
	{
		cout << minas[c] << endl;
	}

    return 0;
}

