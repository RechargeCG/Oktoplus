#include <iostream>
#include <cctype>

using namespace std;

string title(string F)
{
	F[0]=toupper(F[0]);
	for(int c=1;c<F.size();c++)
		if(F[c-1]==' ') F[c]=toupper(F[c]);
		else F[c]=tolower(F[c]);
	
	return F;
}

int main()
{ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
