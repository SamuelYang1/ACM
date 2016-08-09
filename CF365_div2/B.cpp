#include <iostream>
using namespace std;
int n,k,a[100010],x;
bool b[100010];
long long ans,sum;
main()
{
	cin>>n>>k;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	for (int i=1;i<=k;i++)
	{
		cin>>x;
		b[x]=true;
		sum-=a[x];
		ans+=a[x]*sum;
	}
	for (int i=1;i<=n;i++)
	 if (!b[i]&&!b[(i%n)+1])
	 {
	 	ans+=a[i]*a[(i%n)+1];
	 }
	cout<<ans<<endl;
}
