#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, T;

    cin >> N >> T;
    
    vector<pair<int,string>> jogadores;

    for(int c=0;c<N;c++)
    {
        int a;
        string b;
        cin >> b >> a;
        jogadores.push_back(make_pair(a,b));
    }

    sort(jogadores.begin(),jogadores.end());

    vector<vector<string>> times;

    for(int c1=0;c1<T;c1++)
    {
        vector<string> aux;
        aux.push_back(jogadores.back().second);
        times.push_back(aux);
        jogadores.resize(jogadores.size()-1);
    }

    int ct=0;

    for(int c1=0;c1<N-T;c1++)
    {
        if(ct==T) ct = 0;

        times[ct].push_back(jogadores.back().second);
        jogadores.resize(jogadores.size()-1);

        ct++;
    }

    for(int c=0;c<T;c++)
    {
        sort(times[c].begin(),times[c].end());
    }

    for(int c1=0;c1<T;c1++)
    {
        cout << "Time " << c1+1 << endl;
        int tam = times[c1].size();
        for(int c=0;c<tam;c++)
        {
            cout << times[c1][c] << endl;
        }
        cout << endl;
    }

    return 0;
}
