#include <iostream>
#include<cstdlib>
using namespace std;
int main(void)
{
	long long i,j,n;
	cin>>n;
	short a[n];
	for(i=2;i<n;i++)
		a[i]=1;
	for(i=2;i<n;i++)
	{
		if(a[i])
			for(j=i;i*j<n;j++)
				a[i*j]=0;
	}
	for(i=2;i<n;i++)
	{
		if(a[i])
			cout<<i<<endl;
	}
	system("PAUSE");
	return 0;
}
