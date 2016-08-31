#include <iostream>
using namespace std;
const int cc=1e9+7;
int next[200010],n,l,mark[200010];
long long ans=1;
long long pow(int x,int k)
{
	long long p=1;
	for (int i=1;i<=k;i++) p=p*x%cc;
	return p;
}
main()
{
	cin>>n;
	l=n;
	for (int i=1;i<=n;i++) cin>>next[i];
	for (int i=1;i<=n;i++)
	 if (!mark[i])
	 {
	 	int j=i;
	 	while (!mark[j])
	 	{
	 		mark[j]=i;
	 		j=next[j];
		}
		if (mark[j]!=i) continue;
		int t=0;
		while (mark[j]!=-i)
		{
			t++;
			mark[j]=-i;
			j=next[j];
		}
		ans=ans*((pow(2,t)-2+cc)%cc)%cc;
		l-=t;
	 }
	 ans=ans*pow(2,l)%cc;
	 cout<<ans<<endl;
}
