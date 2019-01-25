#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;

    int A[N];
    for (int i=0; i<N; i++){
        cin >> A[i];
    }
    int work =0;
    int maximal;
for (int i=0; i<N; i++){
    for (int j=i+4; j<N; j++){
        work = A[i]*A[j];
        if (work > maximal){
            maximal = work;
        }
    }
}

cout << endl << "work=" << "" << maximal;

return 0;
}
