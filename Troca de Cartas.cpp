#include <iostream>
#include <set>

using namespace std;

int main()
{
    int A,B,tot;

    cin >> A >> B;

    int CA[A],CB[B];

    for(int c=0;c<A;c++) cin >> CA[c];
    for(int c=0;c<B;c++) cin >> CB[c];

    set<int> SCA,SCB;

    for(int c=0;c<A;c++) SCA.insert(CA[c]);
    for(int c=0;c<B;c++) SCB.insert(CB[c]);

    for(int c=0;c<A;c++)
    {
        if(SCA.find(CA[c])!=SCA.end())
        {
            if(SCB.find(CA[c])!=SCB.end())
            {
                SCA.erase(CA[c]);
                SCB.erase(CA[c]);
            }
        }
    }

    tot=SCA.size();
    if(SCB.size()<tot) tot = SCB.size();

    cout << tot;

    return 0;
}