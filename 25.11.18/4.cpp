
#include <iostream>
using namespace std;

void Eratosthenes(bool B[], int N)
{
int i, P;
for (P=2; P<=N; P++) B[P]=true;
P=2;
while (P*P<=N)
{
i=P*P;
if (B[P])
while (i<=N)
{
B[i]=false;
i=i+P;
}
P=P+1;
}
cout<<"cоставные числа: " << endl;
for (P=2; P<=N; P++)
if (B[P]==false) cout<<" "<<P << endl;
}

int main()
{
setlocale(LC_ALL,"Rus");
int N;
cout<<"N > "; cin>>N;
bool *B=new bool[N];
Eratosthenes(B, N);
return 0;
}
