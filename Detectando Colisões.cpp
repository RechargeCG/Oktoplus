#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    float m;
	int x11,x21,y11,y21,x12,x22,y12,y22;
	
	cin >> x11 >> y11 >> x21 >> y21 >> x12 >> y12 >> x22 >> y22;
	
	if(x11<=x12&&(x21>=x12)||x12<=x11&&(x22>=x11))
	{
	    if(y11<=y12&&(y21>=y12)||y12<=y11&&(y22>=y11)) cout << 1 << endl;
	    else cout << 0 << endl;
	}
	else cout << 0 << endl;
	
	return 0;
}
