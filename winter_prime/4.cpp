#include <iostream>
using namespace std;
int s [1000] = {0};

int check (int X, int Y){
s[X]=1;
for(int i=X+1; i<=Y; i++ ){

        if(i>10){
             if(i%10==2){
                s[i]=s[(i/10)-1] +s[i];

        }
        }

  if ((i-5)> X){
        s[i]= s[i-5];
    }
     if (i/i > X){
                s[i]= s[i] +s[i/i];
             }

              if ((i)%5==0){
                   if ((i/5)>X){
                      s[i]=s[i/5] +s[i];
        }
             }

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
