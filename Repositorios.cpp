#include <iostream>
#include <map>

using namespace std;

int main()
{
    int C,N,P,V;

    map<int,int> progs;

    cin >> C >> N;

    for(int c=0;c<C;c++)
    {
        cin >> P >> V;
        progs.insert(make_pair(P,V));
    }
    for(int c=0;c<N;c++)
    {
        cin >> P >> V;
        if(progs.find(P)!=progs.end())
        {
            if(progs[P]<V)
            {
                cout << P << ' ' << V << endl;
                progs[P] = V;
            }
        }
        else
        {
            cout << P << ' ' << V << endl;
            progs.insert(make_pair(P,V));
        }
    }

    return 0;
}