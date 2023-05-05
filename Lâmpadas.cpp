#include <iostream>

using namespace std;

int main()
{
    int N, I, A=0, B=0;
	
	cin >> N;
	
	for(int c=0;c<N;c++)
	{
		cin >> I;
		if(I==1) A=!A;
		else
		{
			A=!A;
			B=!B;
		}
	}
	
	cout << A << endl << B << endl;

    return 0;
}
