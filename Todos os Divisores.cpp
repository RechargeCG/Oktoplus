#include <iostream>

using namespace std;

int main()
{
    int N;
	
	cin >> N;
	
	for(int c=1;c<=N;c++)
	{
		if(N%c==0) cout << c << ' ';
	}
	cout << endl;

    return 0;
}
