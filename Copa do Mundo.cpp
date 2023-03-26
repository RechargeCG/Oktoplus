#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int M, N;

    queue<char> times;
    char vencedor;

    for(int c=0;c<16;c++) times.push('A'+c);

    for(int c=0;c<15;c++)
    {
        cin >> M >> N;
        if(M>N)
        {
            vencedor=times.front();
            times.push(vencedor);
            times.pop();
            times.pop();
        }
        else
        {
            times.pop();
            vencedor=times.front();
            times.push(vencedor);
            times.pop();
        }
    }

    cout << vencedor << endl;

    return 0;
}