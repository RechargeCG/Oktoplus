#include <iostream>

using namespace std;

int pai[100000],qtd[100000],peso[100000];

int find(int x)
{
    if(pai[x]==x) return x;
    return pai[x]=find(pai[x]);
}
void join(int x, int y)
{    
    x=find(x);
    y=find(y);
    
    if(x==y) return;    
    if(peso[x]<peso[y]) 
    {
        pai[x]=y;
        qtd[y]+=qtd[x];
    }
    if(peso[x]>peso[y])
    {
        pai[y]=x;
        qtd[x]+=qtd[y];
    }
    if(peso[x]==peso[y])
    {
        pai[x]=y;
        peso[y]++;
        qtd[y]+=qtd[x];
    }
}

int main()
{
    int N,K,b1,b2;
    char aux;
    
    cin >> N >> K;
    
    for(int c=0;c<N;c++) pai[c]=c;
    for(int c=0;c<K;c++)
    {
        cin >> aux >> b1 >> b2;

        if(aux=='F') join(b1,b2);
        else
        {
            if(find(b1)==find(b2)) cout<<"S\n";
            else cout<<"N\n";
        }
    }
    
    return 0;
}