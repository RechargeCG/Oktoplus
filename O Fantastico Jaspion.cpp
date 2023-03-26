#include <iostream>
#include <cstring>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int T,M,N;

    cin >> T;

    for(int c=0;c<T;c++)
    {
        map<string,string> traducao;
        vector<string> letra;

        cin >> M >> N;

        for(int c1=0;c1<M;c1++)
        {
            char jp[81],pt[81];
            fflush(stdin);
            fgets(jp,80,stdin);
            jp[strcspn(jp,"\n")]='\0';
            fflush(stdin);
            fgets(pt,80,stdin);
            pt[strcspn(pt,"\n")]='\0';
            traducao.insert(make_pair(jp,pt));
        }
        for(int c1=0;c1<N;c1++)
        {
            char jp[81];
            fflush(stdin);
            fgets(jp,80,stdin);
            jp[strcspn(jp,"\n")]='\0';
            letra.push_back(jp);
        }

        for(int c1=0;c1<N;c1++)
        {
            int tam = letra[c1].size();
            
            for(int c2=0;c2<tam;c2++)
            {
                char palavra[81] = "";
                while(letra[c1][c2]!=' '&&c2<tam)
                {
                    sprintf(palavra,"%s%c",palavra,letra[c1][c2]);
                    c2++;
                }
                if(traducao.find(palavra)!=traducao.end()) cout << traducao[palavra];
                else cout << palavra;
                if(c2<tam) cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}