#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int G, P, S, K, k;
	
	cin >> G >> P;
	
	while(G&&P)
	{
	    int colocacoes[G][P];
	    
	    for(int i=0;i<G;i++)
	    {
	        for(int j=0;j<P;j++)
	        {
	            cin >> colocacoes[i][j];
	        }
	    }
	    
	    cin >> S;
	    
	    vector<vector<int>> potuacao;
	    
	    for(int i=0;i<S;i++)
	    {
	        cin >> K >> k;
	        vector<int> p1;
	        p1.push_back(k);
	        potuacao.push_back(p1);
	        for(int j=0;j<K-1;j++)
	        {
	            cin >> k;
	            potuacao[i].push_back(k);
	        }
	    }
	    
	    int ordem[P],maior;
	    
	    for(int i=0;i<S;i++)
	    {
	        for(int j=0;j<P;j++)
	        {
	            ordem[j]=0;
	        }
	        for(int j=0;j<potuacao[i].size();j++)
	        {
	            for(int l=0;l<P;l++)
	            {
	                for(int r=0;r<G;r++) if(colocacoes[r][l]==j+1) ordem[l]+=potuacao[i][j];
	            }
	        }
	        
	        maior=0;
	    
    	    for(int i=1;i<P;i++)
    	    {
    	        if(ordem[i]>ordem[maior]) maior=i;
    	    }
    	    
    	    vector<int> campeoes;
    	    
    	    for(int i=0;i<P;i++)
    	    {
    	        if(ordem[i]==ordem[maior]) campeoes.push_back(i+1);
    	    }
    	    
    	    sort(campeoes.begin(),campeoes.end());
    	    
    	    for(int i=0;i<campeoes.size();i++) cout << campeoes[i] << ' ';
    	    cout << endl;
	    }
	    
	    cin >> G >> P;
	}
	
	return 0;
}
