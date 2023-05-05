#include <iostream>

using namespace std;

int main()
{
    char op;
	double a, b;
	
	cin >> op >> a >> b;
	
	if(op=='M') printf("%.2f",a*b);
	else if(op=='D') printf("%.2f",a/b);

    return 0;
}
