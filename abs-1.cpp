#include<iostream>
using namespace std;
#define lld long long int
lld a[10000000];
int main()
{
lld n,t,sum;
cin>>t;
while(t--)
{
sum=0;
cin>>n;
for(lld i=0;i<n;i++)
{
cin>>a[i];
}
for(lld i=0;i<n/2;i++)
{
sum=sum+(n-1-2*i)*(a[n-1-i]-a[i]);
}
cout<<sum<<endl;
}
return 0;
}
