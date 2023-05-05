#include <iostream>

using namespace std;

int main()
{
    int N,x1,y1,x2,y2,ins=0;
	
	cin >> N;
	
	for(int c=0;c<N;c++)
	{
	    cin >> x1 >> y1 >> x2 >> y2;
	    
	    ins+=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	}
	
	cout << ins << endl;
	
	return 0;
}
