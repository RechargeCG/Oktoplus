#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
	double X;
	
	cin >> N;
	
	for(int c=0;c<N;c++)
	{
		cin >> X;
		
		printf("%.4f\n",sqrt(X));
	}

    return 0;
}
