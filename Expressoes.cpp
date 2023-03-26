#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int instancias;
	string expressao;
	bool ok;

    cin >> instancias;

    for(int c=0;c<instancias;c++)
    {
        cin>>expressao;
        ok = true;

        stack<char> pilha;
        
        for(int i=0;i<(int)expressao.size();i++)
        {
            if(expressao[i] == '(')
            {
                pilha.push('(');
                continue;
            }
            if(expressao[i] == ')')
            {
                if(pilha.empty()||pilha.top()!='(')
                {
                    ok = false;
                    break;
                }
                else
                {
                    pilha.pop();
                }
            }
            if(expressao[i] == '[')
            {
                pilha.push('[');
                continue;
            }
            if(expressao[i] == ']')
            {
                if(pilha.empty()||pilha.top()!='[')
                {
                    ok = false;
                    break;
                }
                else
                {
                    pilha.pop();
                }
            }
            if(expressao[i] == '{')
            {
                pilha.push('{');
                continue;
            }
            if(expressao[i] == '}')
            {
                if(pilha.empty()||pilha.top()!='{')
                {
                    ok = false;
                    break;
                }
                else
                {
                    pilha.pop();
                }
            }
        }

        if(!pilha.empty())
        {
            ok = false;
        }

        if(ok) cout<<"S\n";
        else cout<<"N\n";
    }

	return 0;
}