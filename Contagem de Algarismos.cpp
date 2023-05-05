#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N,histograma[10];
	string num;
	
	for(int c=0;c<10;c++) histograma[c]=0;
	
	cin >> N;
	
	for(int c=0;c<N;c++)
	{
		cin >> num;
		
		for(int c1=0;c1<num.size();c1++)
		{
			histograma[num[c1]-48]++;
		}
	}
	
	for(int c1=0;c1<10;c1++)
	{
		cout << c1 << " - " << histograma[c1] << endl;
	}

    return 0;
}
