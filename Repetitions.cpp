#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long seq=1,atual=1;
    string DNA;
 
    getline(cin, DNA);
 
    for(long long c=1;(int)c<DNA.size();c++)
    {
        if(DNA[c]==DNA[c-1]) atual++;
        else
        {
            if(seq<atual) seq=atual;
            atual=1;
        }
    }
 
    if(seq<atual)
    {
        seq=atual;
        atual=1;
    }
 
    cout << seq << '\n';
 
    return 0;
}
