#include <iostream>

using namespace std;

int main()
{
    int N;
	
	cin >> N;
	
	int fita[N];
	
	for(int c=0;c<N;c++)
	{
		cin >> fita[c];
	}
	
	for(int c=0;c<N;c++)
	{
		if(fita[c]==-1)
		{
			for(int c1=1;c1<N;c1++)
			{
			    if((c+c1)<N&&!fita[c+c1])
			    {
			        if(c1>=9) fita[c]=9;
			        else fita[c]=c1;
			        break;
			    }
			    else if((c-c1)>=0&&!fita[c-c1])
			    {
			        if(c1>=9) fita[c]=9;
			        else fita[c]=c1;
			        break;
			    }
			}
			
		}
	}
	
	for(int c=0;c<N;c++)
	{
		cout << fita[c] << ' ';
	}

    return 0;
}
