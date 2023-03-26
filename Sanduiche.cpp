#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int N, D, comprimento, tot=0, aux;
    vector<int> pedacos;
    map<int,int> maneiras;

    cin >> N >> D;

    for(int c=0;c<N;c++)
    {
        cin >> comprimento;
        pedacos.push_back(comprimento);
    }

    for(int c=0;c<N;c++)
    {
        if(maneiras.find(c)!=maneiras.end()) continue;
        if(pedacos[c]==D) 
        {
            tot++;
            continue;
        }
        aux=c;
        comprimento=pedacos[c];
        for(int c1=aux+1;comprimento<D&&c1!=c;c1++)
        {
            if(c1==N) c1=0;
            comprimento+=pedacos[c1];
            if(comprimento==D)
            {
                maneiras.insert(make_pair(c,c1));
                tot++;
                break;
            }
        }
    }

    cout << tot;

    return 0;
}