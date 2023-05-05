#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long x;
    
    cin >> x;
	
	if(x == 1)  
	{
		cout << 'N' << endl;
		return 0;
	}
	else
        for(int i = 2; i*i <= x; ++i)
        {
            if(x % i == 0)
            {
                cout << 'N' << endl;
                return 0;
            }
        }
	
	cout << 'S' << endl;
	
	return 0;
}
