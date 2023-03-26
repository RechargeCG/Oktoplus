#include <iostream>
using namespace std;
int Hanoi(int N){
    if(N == 1) 
        return 1;
    else     
        return 2 * Hanoi(N-1) + 1;
}

int main() {
    int N,c=1;
    cin >> N;
    while (N > 0) {
        cout << "Teste " << c << endl << Hanoi(N) << "\n\n";
        c++;
        cin >> N;
    }

    return 0;
}