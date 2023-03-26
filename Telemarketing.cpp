#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N,L,T,menor=0;
    vector<pair<int,int>> vendedor;

    cin >> N >> L;

    for(int c=0;c<N;c++) vendedor.push_back(make_pair(0,0));
    for(int c=0;c<L;c++)
    {
        for(int c1=0;c1<N;c1++)
        {
            if(c1!=menor)
            {
                if(vendedor[c1].first<vendedor[menor].first) menor=c1;
            }
        }
        cin >> T;
        vendedor[menor].first+=T;
        vendedor[menor].second++;
    }
    for(int c=1;c<=N;c++)
    {
        cout << c << ' ' << vendedor[c-1].second << endl;
    }

    return 0;
}