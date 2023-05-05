#include <iostream>

using namespace std;

int main()
{
	int N, V, anterior, atual=1, maior=1;
    
	cin >> N;
	
	
	for(int c=0;c<N;c++)
	{
		cin >> V;
		
		if(!c) anterior=V;
		else if(V!=anterior)
		{
			anterior=V;
			atual=1;
		}
		else if(V==anterior) atual++;
		if(atual>maior) maior=atual;
	}
	
	cout << maior << endl;

    return 0;
}
