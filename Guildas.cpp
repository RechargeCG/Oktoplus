#include <iostream>

using namespace std;

int guilda[100000],pontos[100000],peso[100000];

int find(int x)
{
    if(guilda[x]==x) return x;
    return guilda[x]=find(guilda[x]);
}
void join(int x, int y)
{    
    x=find(x);
    y=find(y);
    
    if(x==y) return;    
    if(peso[x]<peso[y]) 
    {
        guilda[x]=y;
        pontos[y]+=pontos[x];
    }
    if(peso[x]>peso[y])
    {
        guilda[y]=x;
        pontos[x]+=pontos[y];
    }
    if(peso[x]==peso[y])
    {
        guilda[x]=y;
        peso[y]++;
        pontos[y]+=pontos[x];
    }
}

int main()
{
    int N,M,P,Q,A,B;

    cin >> N >> M;

    while(N&&M)
    {
        int vitorias=0;

        for(int c=1;c<=N;c++)
        {
            cin >> P;
            guilda[c]=c;
            pontos[c]=P;
        }

        for(int c=0;c<M;c++)
        {
            cin >> Q >> A >> B;
            
            switch (Q)
            {
                case 1:
                    join(A,B);
                    break;
                case 2:
                    if(find(1)==find(A))
                    {
                        if(pontos[find(A)]>pontos[find(B)]) vitorias++;
                    }
                    else if(find(1)==find(B))
                    {
                        if(pontos[find(B)]>pontos[find(A)]) vitorias++;
                    }
                    break;
            }
        }

        cout << vitorias << endl;

        cin >> N >> M;
    }

    return 0;
}