#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int P, M, N;

    cin >> P >> M >> N;

    while (P!=0 && M!=0 && N!=0)
    {
        vector<vector<pair<int,char>>> jogadores;
        pair<int,char> paux;

        for(int c=0;c<P;c++)
        {
            vector<pair<int,char>> vaux;
            
            for(int c1=0;c1<M;c1++)
            {
                cin >> paux.first >> paux.second;

                vaux.push_back(paux);
            }
            jogadores.push_back(vaux);
        }

        stack<pair<int,char>> descarte;
        queue<pair<int,char>> saque;

        cin >> paux.first >> paux.second;
        
        descarte.push(paux);

        for(int c=0;c<N-(P*M+1);c++)
        {
            cin >> paux.first >> paux.second;
            saque.push(paux);
        }

        int jogadorturno=0;
        bool vitoria=false,horario=true,primeiroturno=true,efeito=false;

        while(!vitoria)
        {
            if(primeiroturno)
            {
                primeiroturno=false;

                if(!efeito&&descarte.top().first==12)
                {
                    horario=!horario;
                    efeito=true;
                }
                if(!efeito&&descarte.top().first==7)
                {
                    paux = saque.front();
                    jogadores[jogadorturno].push_back(paux);
                    saque.pop();
                    paux = saque.front();
                    jogadores[jogadorturno].push_back(paux);
                    saque.pop();

                    if(horario)
                    {
                        if(jogadorturno==P-1) jogadorturno=0;
                        else jogadorturno++;
                    }
                    else
                    {
                        if(jogadorturno==0) jogadorturno=P-1;
                        else jogadorturno--;
                    }

                    efeito=true;
                    continue;
                }
                if(!efeito&&descarte.top().first==1)
                {
                    paux = saque.front();
                    jogadores[jogadorturno].push_back(paux);
                    saque.pop();

                    if(horario)
                    {
                        if(jogadorturno==P-1) jogadorturno=0;
                        else jogadorturno++;
                    }
                    else
                    {
                        if(jogadorturno==0) jogadorturno=P-1;
                        else jogadorturno--;
                    }

                    efeito=true;
                    continue;
                }
                if(!efeito&&descarte.top().first==11)
                {
                    if(horario)
                    {
                        if(jogadorturno==P-1) jogadorturno=0;
                        else jogadorturno++;
                    }
                    else
                    {
                        if(jogadorturno==0) jogadorturno=P-1;
                        else jogadorturno--;
                    }

                    efeito=true;
                    continue;
                }
            }

            for(int c1=0;c1<jogadores[jogadorturno].size();c1++)
            {
                for(int c2=jogadores[jogadorturno].size()-1;c2>c1;c2--)
                {
                    if(jogadores[jogadorturno][c1].first>jogadores[jogadorturno][c2].first ||
                    (jogadores[jogadorturno][c1].first==jogadores[jogadorturno][c2].first ? (jogadores[jogadorturno][c1].second>jogadores[jogadorturno][c2].second ? 1 : 0) : 0))
                    {
                        paux.first = jogadores[jogadorturno][c2].first;
                        paux.second = jogadores[jogadorturno][c2].second;
                        jogadores[jogadorturno][c2].first = jogadores[jogadorturno][c1].first;
                        jogadores[jogadorturno][c2].second = jogadores[jogadorturno][c1].second;
                        jogadores[jogadorturno][c1].first = paux.first;
                        jogadores[jogadorturno][c1].second = paux.second;
                    }
                }
            }

            bool descartou=false;

            for(int c2=jogadores[jogadorturno].size()-1;c2>=0;c2--)
            {
                if(jogadores[jogadorturno][c2].first==descarte.top().first || jogadores[jogadorturno][c2].second==descarte.top().second)
                {
                    descarte.push(jogadores[jogadorturno][c2]);
                    efeito=false;
                    if(c2==jogadores[jogadorturno].size()-1) jogadores[jogadorturno].resize(jogadores[jogadorturno].size()-1);
                    else
                    {
                        for(;c2<jogadores[jogadorturno].size()-1;c2++)
                        {
                            jogadores[jogadorturno][c2] = jogadores[jogadorturno][c2+1];
                        }
                        jogadores[jogadorturno].resize(jogadores[jogadorturno].size()-1);
                    }
                    descartou=true;
                    break;
                }
            }

            if(!descartou)
            {
                paux = saque.front();
                jogadores[jogadorturno].push_back(paux);
                saque.pop();

                int novacarta = jogadores[jogadorturno].size()-1;

                if(jogadores[jogadorturno][novacarta].first==descarte.top().first || jogadores[jogadorturno][novacarta].second==descarte.top().second)
                {
                    descarte.push(jogadores[jogadorturno][novacarta]);
                    efeito=false;
                    jogadores[jogadorturno].resize(novacarta);
                }
            }

            for(int c=0;c<P;c++)
            {
                if(jogadores[c].size()==0)
                {
                    cout << ++c << endl;
                    vitoria=true;
                    break;
                }
            }
            
            if(!vitoria)
            {
                if(!efeito&&descarte.top().first==12)
                {
                    horario=!horario;
                    efeito=true;
                }

                if(horario)
                {
                    if(jogadorturno==P-1) jogadorturno=0;
                    else jogadorturno++;
                }
                else
                {
                    if(jogadorturno==0) jogadorturno=P-1;
                    else jogadorturno--;
                }
                
                if(!efeito&&descarte.top().first==7)
                {
                    paux = saque.front();
                    jogadores[jogadorturno].push_back(paux);
                    saque.pop();
                    paux = saque.front();
                    jogadores[jogadorturno].push_back(paux);
                    saque.pop();

                    if(horario)
                    {
                        if(jogadorturno==P-1) jogadorturno=0;
                        else jogadorturno++;
                    }
                    else
                    {
                        if(jogadorturno==0) jogadorturno=P-1;
                        else jogadorturno--;
                    }

                    efeito=true;
                }
                if(!efeito&&descarte.top().first==1)
                {
                    paux = saque.front();
                    jogadores[jogadorturno].push_back(paux);
                    saque.pop();

                    if(horario)
                    {
                        if(jogadorturno==P-1) jogadorturno=0;
                        else jogadorturno++;
                    }
                    else
                    {
                        if(jogadorturno==0) jogadorturno=P-1;
                        else jogadorturno--;
                    }

                    efeito=true;
                }
                if(!efeito&&descarte.top().first==11)
                {
                    if(horario)
                    {
                        if(jogadorturno==P-1) jogadorturno=0;
                        else jogadorturno++;
                    }
                    else
                    {
                        if(jogadorturno==0) jogadorturno=P-1;
                        else jogadorturno--;
                    }

                    efeito=true;
                }
            }
        }
        
        cin >> P >> M >> N;
    }
    
    return 0;
}