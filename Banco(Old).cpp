#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int C, N, T, D, menortempo=0, espera=0, entrada=0;
    queue<pair<int,int>> clientes;
    vector<pair<queue<pair<int,int>>,int>> caixas;

    cin >> C >> N;

    for(int c=0;c<N;c++)
    {
        cin >> T >> D;

        clientes.push(make_pair(T,D));
    }

    for(int c1=0;c1<C;c1++)
    {
        queue<pair<int,int>> aux;
        aux.push(make_pair(0,0));
        caixas.push_back(make_pair(aux,0));
    }

    for(int c=0;c<N;c++)
    {
        for(int c1=0;c1<C;c1++)
        {
            if(c==0) caixas[c1].first.pop();
            if(clientes.front().first>=caixas[c1].first.front().first&&clientes.front().first!=caixas[menortempo].first.back().first)
            {
                if(clientes.front().first>=caixas[c1].first.front().first+caixas[c1].first.front().second) caixas[c1].first.pop();
                cout << 'a' << endl;
                if(c>0) entrada = clientes.front().first-entrada;
                if(caixas[c1].second-entrada>=0) caixas[c1].second-=entrada;
                else caixas[c1].second=0;
            }
            if(C>1&&caixas[c1].second<caixas[menortempo].second) menortempo=c1;
            if(clientes.front().first>=caixas[c1].first.front().first+caixas[c1].first.front().second) c1--;
        }
        if(caixas[menortempo].second-clientes.front().first>=20) espera++;
        caixas[menortempo].second+=clientes.front().second;
        caixas[menortempo].first.push(clientes.front());
        entrada=clientes.front().first;
        clientes.pop();

        for(int c1=0;c1<C;c1++)
        {
            cout << "Banco " << c1 << '\t';
            pair<queue<pair<int,int>>,int> aux;
            aux = caixas[c1];
            while(!aux.first.empty())
            {
                cout << aux.first.front().first << '-';
                aux.first.pop();
            }
            cout << '-' << aux.second << endl;
        }
    }

    cout << espera;

    return 0;
}