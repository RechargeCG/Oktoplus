#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int N,cont=0;
	string expressao;

    cin >> N;

    while(getline(cin, expressao)&&cont>=0)
    {
        for(int i=0;i<expressao.size();i++)
        {
            if(expressao[i] == '{') { cont++; continue; }
            if(expressao[i] == '}') cont--;
            if(cont<0) break;
        }
    }

    if(!cont) cout<<"S\n";
    else cout<<"N\n";

	return 0;
}