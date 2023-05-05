#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,n;
	vector<int> seq;
	
	cin >> N;
	
	for(int c=0;c<N;c++)
	{
		cin >> n;
		seq.push_back(n);
	}
	
	sort(seq.begin(),seq.end());
	
	for(int c=0;c<N;c++) cout << seq[c] << ' ';

    return 0;
}
