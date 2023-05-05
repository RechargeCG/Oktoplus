#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int hist[26];
    for(int c=0;c<26;c++)
    {
        hist[c]=0;
    }
 
    string s;
 
    getline(cin,s);
 
    for(int c=0;c<s.size();c++)
    {
        hist[(int) (s[c]-'A')]++;
    }
 
    int impar=0;
    char palindrome[s.size()];
 
    for(int c=0;c<26;c++)
    {
        if(hist[c]%2!=0)
        {
            impar++;
            if(s.size()%2==0) palindrome[(s.size()/2)-1] = (char)('A'+c);
            else palindrome[s.size()/2] = (char)('A'+c);
            hist[c]--;
        }
        if(impar>1)
        {
            cout << "NO SOLUTION\n";
            return 0;
        }
    }
 
    int cont=0;
 
    for(int j=0;j<26;j++)
    {
        if(hist[j]!=0)
        {
            for(int k=0;k<hist[j]/2;k++)
            {
                palindrome[cont]=(char)('A'+j);
                cont++;
            }
        }
    }
    if(s.size()%2!=0)cont++;
    for(int j=25;j>=0;j--)
    {
        if(hist[j]!=0)
        {
            for(int k=0;k<hist[j]/2;k++)
            {
                palindrome[cont]=(char)('A'+j);
                cont++;
            }
        }
    }
 
    for(int c=0;c<s.size();c++) cout << palindrome[c];
    cout << '\n';
 
    return 0;
}
