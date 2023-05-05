#include <iostream>

using namespace std;

bool eh_primo(int x)
{
    if(x<2) return false;
	if(x!=2)
	{
		if(x%2==0) return false;
		for(int c=3;c<x/2;c+=2)
			if(x%c==0) return false;
	}
	return true;
}

int main()
{
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}
