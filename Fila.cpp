#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> f;
    int N,n;

    cin >> N;

	for(int c=0;c<N;c++)
    {
        cin >> n;
        f.push_back(n);
    }

    vector<int> sf;
    int M,m;

    cin >> M;

	for(int c=0;c<M;c++)
    {
        cin >> m;
        sf.push_back(m);
    }
    
    for(int c1=0;c1<sf.size();c1++)
    {
        for(int c2=0;c2<f.size();c2++)
        {
            if(sf[c1]==f[c2])
            {
                if(c2==f.size()-1)
                {
                    f.resize(f.size()-1);
                    break;
                }
                else
                {
                    for(int c3=c2;c3<f.size()-1;c3++)
                    {
                        f[c3]=f[c3+1];
                    }
                    f.resize(f.size()-1);
                    break;
                }
            }
        }
    }

    for(int c=0;c<f.size();c++)
    {
        cout << f[c] << " ";
    }
	
    return 0;
}