#include <iostream>
using namespace std;
int n,x,y,flag;
long long ans,sum,t,a[510][510];
main()
{
	cin>>n;
	if (n==1)
	{
		cout<<1<<endl;
		return 0;
	}
	for (int i=1;i<=n;i++)
	{
		flag=0;
		sum=0;
	    for (int j=1;j<=n;j++)
        {
        	cin>>a[i][j];
        	if (a[i][j]==0) 
        	{
        		x=i;y=j;
        		flag=1;
			}
        	sum+=a[i][j];
	    }  
	    if (flag==0) ans=sum;
    }
    a[x][y]=ans;
    for (int j=1;j<=n;j++) 
     if (y!=j) a[x][y]-=a[x][j];
    for (int i=1;i<=n;i++)
	{
		t=0;
		for (int j=1;j<=n;j++) t+=a[i][j];
		if (t!=ans) 
		{
			cout<<-1<<endl;
			return 0;
		}
	} 
    for (int j=1;j<=n;j++)
	{
		t=0;
		for (int i=1;i<=n;i++) t+=a[i][j];
		if (t!=ans) 
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	t=0;
	for (int i=1;i<=n;i++)
	{
		t+=a[i][i];
	}
	if (t!=ans) 
    {
		cout<<-1<<endl;
		return 0;
	}
	t=0;
	for (int i=1;i<=n;i++)
	{
		t+=a[i][n-i+1];
	}
	if (t!=ans) 
    {
		cout<<-1<<endl;
		return 0;
	}
	if (a[x][y]<=0) 
	{
		cout<<-1<<endl;
		return 0;
	}
	cout<<a[x][y]<<endl;
}
