#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    long long N,aux,tot=0;
 
    cin >> N;
 
    vector<long long> v;
 
    for(int c=0;c<N;c++) {cin >> aux; v.push_back(aux);}
 
    for(int c=1;c<N;c++)
    {
        if(v[c]<v[c-1])
        {
            tot+=(v[c-1]-v[c]);
            v[c]+=(v[c-1]-v[c]);
        }
    }
 
    cout << tot << '\n';
 
    return 0;
}
