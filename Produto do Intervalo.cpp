#include <iostream>

using namespace std;

int arvore[100000],acao[100000];

int main()
{
    int N,K,X,I,J;
    char aux;

    while(cin >> N >> K)
    {
        for(int c=0;c<N;c++)
        {
            cin >> X;
            arvore[c]=X;
        }
        for(int c=0;c<K;c++)
        {
            cin >> aux >> I >> J;

            if(aux=='C')
            {
                arvore[I-1]=J;
            }
            else if(aux=='P')
            {
                int P=arvore[I-1];
                for(int c1=I;c1<J;c1++)
                {
                    P*=arvore[c1];
                }
                if(P>0) cout << '+';
                else if(P<0) cout << '-';
                else cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}