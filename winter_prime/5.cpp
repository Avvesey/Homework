#include <iostream>
using namespace std;
int s [1000] = {0};

int check (int X, int Y){
s[X]=1;
for(int i=X+1; i<=Y; i++ ){
        if ((i-4)> X){
        s[i]= s[i-4];
    } else s[i]= s[i-1];

     if ((i-5)> X){
        s[i]= s[i-5];
    } else s[i]= s[i-1];


             if ((i)%2==0){
                   if ((i/2)>X){
                      s[i]=s[i/2] +s[i];
        }
             } else s[i]= s[i-1];

        return s[Y];

}
}









int main() {
int  X ,Y;
cin>> X >> Y;


if ( check(X,Y)!=0){
    cout << "Yes" << endl;
} else cout << "No"<< endl;

for (int i=X; i<=Y; i++ )
    cout << s[i] << " ";
return 0;
}
