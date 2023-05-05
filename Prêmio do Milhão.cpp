#include <iostream>

using namespace std;

int main()
{
	int N, A, tot=0;
	
    cin >> N;
	
	for(int c=1;c<=N;c++)
	{
		cin >> A;
		tot+=A;
		
		if(tot>=1000000)
		{
			cout << c << endl;
			return 0;
		}
	}

    return 0;
}
