#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int P, S;

    cin >> P >> S;

    vector<pair<int,int>> intervalos;

    for(int c=0;c<S;c++)
    {
        int a,b;
        cin >> a >> b;
        intervalos.push_back(make_pair(a,b));
    }

    sort(intervalos.begin(),intervalos.end());
    
    while(intervalos.size())
    {
        int inicio=intervalos[0].first,termino=intervalos[0].second,tam=intervalos.size();

        for(int c=0;c<tam-1;c++)
        {
            intervalos[c]=intervalos[c+1];
        }

        intervalos.resize(tam-1);
        tam=intervalos.size();

        for(int c=0;c<tam;c++)
        {
            if(intervalos[c].first<=termino)
            {
                if(termino<intervalos[c].second) termino=intervalos[c].second;

                for(int c1=c;c1<tam-1;c1++)
                {
                    intervalos[c1]=intervalos[c1+1];
                }
                intervalos.resize(tam-1);
                tam=intervalos.size();
                c=c-1;
            }
        }
        cout << inicio << ' ' << termino << endl;
    }
    
    return 0;
}