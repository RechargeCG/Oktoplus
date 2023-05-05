#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long N,A;
 
    cin >> N;
 
    vector<long long> nums;
 
    while (cin >> A) nums.push_back(A);
 
    sort(nums.begin(),nums.end());
 
    if(nums[0]!=1)
    {
        cout << 1 << '\n';
        return 0;
    }
    else if(nums[nums.size()-1]!=N)
    {
        cout << N << '\n';
        return 0;
    }
 
    for(long long c=0;c<N;c++)
    {
        if(nums[c+1]!=nums[c]+1)
        {
            cout << nums[c]+1 << '\n';
            return 0;
        }
    }
 
    return 0;
}
