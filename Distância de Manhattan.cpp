#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int xm,ym,xr,yr;
	
	cin >> xm >> ym >> xr >> yr;
	
	cout << abs(xm-xr)+abs(yr-ym) << endl;
	
	return 0;
}
