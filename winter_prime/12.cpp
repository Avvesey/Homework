#include <iostream>
using namespace std;
int main() {
    int N;
    cin >> N;
   // unsigned int B[N];
 double A[N];
    for (int i=0; i<N; i++){
        cin >> B[i];
    }
    /*
    for (int i=0; i<N; i++){
        A[i]=B[i];
    }
*/
    int p=0;
    for(int i=0;i<N;++i){

   for(int j=i+2;j<N;++j)
   {
      if ( (A[i]>A[j])|| (A[i] < 2*A[j]) ){
        p++;
      }

   }
    }
    cout << p;
return 0;

}
