#include <iostream>
using namespace std;
int s [1000];

int check (int X, int Y){

s[X]=1;
for(int i=X+1; i<=Y; i++ ){
    if (((i)%6==0)){
            if ( ((i/3) < X) && ((i/2) < X) ){
                    s[i]=s[i-1];
                } else{
                    if(i/3<X) {
                        s[i]=s[i-1]+s[i/2];
                    }
                    else
                        s[i]= s[i/2] + s[i/3 ] + s[i-1];
        }
        }
  else if ((i)%2==0){
        if (((i)/2) <X){
            s[i]=s[i-1];
        }
        else{
    s[i]= ( (s[i/2 ] + s[i-1]));
        }
  }
  else if(i%3==0){
        if ((i/3) <X)
{
   s[i]=s[i-1];
    } else{
      s[i]= (s[i/3] + s[i-1]);
  }
  }
  else {
    s[i]=  (s[i-1]);
  }


}

        return s[Y];

}









int main() {
int  X ,Y;
cin>> X >> Y;


cout << check(X,Y) << endl;

for (int i=X; i<=Y; i++ )
    cout << s[i] << " ";
return 0;
}
