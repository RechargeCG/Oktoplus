#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    long long t,y,x,num;
    
    cin >> t;
 
    for(int c=0;c<t;c++)
    {
        cin >> y >> x;
 
        if(y>x)
        {
            if(y%2==0)
            {
                num=y*y;
            }
            else num=(y-1)*(y-1)+1;
 
            if(num%2==0)num+=-x+1;
            else num+=x-1;
        }
        else {
            if(x%2==1)
            {
                num=x*x;
            }
            else num=(x-1)*(x-1)+1;
 
            if(num%2==1)num+=-y+1;
            else num+=y-1;
        }
 
        cout << num << '\n';
    }
 
    return 0;
}
