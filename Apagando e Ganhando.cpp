#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,D;
    string num;

    cin >> N >> D;

    while(N&&D)
    {
        cin >> num;

        vector<int> cresc,numv;
        
        for(int c=0;c<N;c++) cresc.push_back(num[c]-48);
        numv=cresc;
        sort(cresc.begin(),cresc.end());

        for(int c=0;c<D;c++)
        {
            for(int c1=0;c1<N;c1++)
            {
                if(numv[c1]==cresc[c])
                {
                    numv.erase(numv.begin()+c1);
                    break;
                }
            }
        }
        
        for(int c=0;c<N-D;c++) cout << numv[c];
        cout << endl;

        cin >> N >> D;
    }

    return 0;
}