#include <iostream>
#include <set>

using namespace std;

int main()
{
    int C,fab=0,atual;

    set<int> estoque;

    cin >> C;

    for(int c=0;c<C;c++)
    {
        cin >> atual;
        if(estoque.find(atual)!=estoque.end())
        {
            estoque.erase(atual);
        }
        else
        {
            estoque.insert(atual);
            fab+=2;
        }
    }

    cout << fab;

    return 0;
}