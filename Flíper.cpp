#include <iostream>

using namespace std;

int main(){
    // Lendo a entrada do exercício
    int A, B;
    cin >> A >> B;

    if(A&&B) cout << 'A' << endl;
	else if(A&&!B) cout << 'B' << endl;
	else cout << 'C' << endl;

    return 0;
}
