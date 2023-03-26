#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,n;

    cin >> N;

    set<int> f;

    for(int c=0;c<N;c++)
    {
        cin >> n;
        f.insert(n);
    }

    cout << f.size();

    return 0;
}