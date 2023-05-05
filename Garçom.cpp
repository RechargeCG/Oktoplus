#include <iostream>

using namespace std;

int main()
{
	int N, L, C, tot=0;
	
    cin >> N;
	
	for(int c=0;c<N;c++)
	{
		cin >> L >> C;
		if(L>C) tot+=C;
	}
	
	cout << tot << endl;

    return 0;
}
