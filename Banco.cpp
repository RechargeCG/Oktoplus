#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int C, N, T, D, menortempo=0, tempoatual=0, esperas=0;
    vector<int> caixas; //para o tempo de espera

    cin >> C >> N;

    for(int c=0;c<C;c++) caixas.push_back(0);

    for(int c=0;c<N;c++)
    {
        cin >> T >> D;

        if(T>tempoatual)
        {
            for(int c=0;c<C;c++) if(caixas[c]>=T-tempoatual) caixas[c]-=(T-tempoatual);
            tempoatual=T;
        }

        if(caixas[menortempo]>20) esperas++;

        caixas[menortempo]+=D;

        for(int c=0;c<C;c++) if(c!=menortempo) if(caixas[c]<caixas[menortempo]) menortempo=c;
    }

    cout << esperas;

    return 0;
}