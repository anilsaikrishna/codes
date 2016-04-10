#include<iostream>
using namespace std;
#include<cmath>
#define lld long long int
lld func(lld n)
{
	lld m=floor(log(n)/log(2)),k;
	int x;
	lld sum=0;
	k=pow(2,m);
	while(n>0)
	{
		x=n%2;
		sum+=(x)*k;
		k=k/2;
		n=n/2;
	}
	return(sum);
}
int main()
{
	lld a;
	cin>>a;
	cout<<func(a);
	return 0;
}
