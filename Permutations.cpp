#include <iostream>
#include <string>
#include <queue>
 
using namespace std;
 
int main()
{
    int N,last,c=0;
    queue<int> nums;
 
    cin >> N;
 
    if(N==1)
    {
        cout << "1\n";
        return 0;
    }
    else if(N>=4)
    {
        for(int c=1;c<=N;c++) nums.push(c);
 
        nums.push(nums.front());
        nums.pop();
 
        while (nums.size())
        {
            last=nums.front();
            cout << nums.front() << ' ';
            nums.pop();
            while(abs(nums.front()-last)<=1 && c<nums.size()+1)
            {
                nums.push(nums.front());
                nums.pop();
            }
            if(c>=nums.size())
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
            else c=0;
        }
        cout << '\n';
    }
    else
    {
        cout << "NO SOLUTION\n";
    }
 
    return 0;
}
