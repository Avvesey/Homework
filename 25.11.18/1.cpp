#include <iostream>
using namespace std;
int main()
{
int x=0,y;
long int n=78487894;
y=n/2019;
while((n-(2019*y))%2018!=0){
y--;
x++;
}
x++;
cout<<"x:"<<x<<" "<<"y:"<<y;
return 0;
}
