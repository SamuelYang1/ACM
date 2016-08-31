#include <iostream>
using namespace std;
int a[110],c[110][110],n,m,p;
long long f[110][110][110],ans;
const long long MAXANS=1e12;
main()
{
	cin>>n>>m>>p;
	for (int i=1;i<=n;i++) cin>>a[i];
	for (int i=1;i<=n;i++)
	 for (int j=1;j<=m;j++)
	  cin>>c[i][j];
	for (int i=0;i<=n;i++)
	 for (int j=0;j<=m;j++)
	  for (int k=0;k<=p;k++)
	   f[i][j][k]=MAXANS;
	f[0][0][0]=0;
	for (int i=1;i<=n;i++)
	 if (a[i]!=0)
	 {
	 	for (int j=0;j<=m;j++)
	 	 for (int k=0;k<=p;k++)
	 	  if (j==a[i]) f[i][a[i]][k]=min(f[i][a[i]][k],f[i-1][j][k]);
	 	  else if (k>=1) f[i][a[i]][k]=min(f[i][a[i]][k],f[i-1][j][k-1]);
	 }
	 else
	 {
	 	for (int j=0;j<=m;j++)
	 	 for (int k=0;k<=p;k++)
	 	  for (int u=1;u<=m;u++)
	 	   if (u==j) f[i][u][k]=min(f[i][u][k],f[i-1][j][k]+c[i][u]);
	 	   else if (k>=1) f[i][u][k]=min(f[i][u][k],f[i-1][j][k-1]+c[i][u]);
	 }
	ans=MAXANS;
	for (int j=1;j<=m;j++) ans=min(f[n][j][p],ans);
	/*for (int i=0;i<=n;i++)
	{
	 for (int j=0;j<=m;j++)
	 {
	  for (int k=0;k<=p;k++)
	   cout<<f[i][j][k]<<" ";
	  cout<<endl;
     }
     cout<<endl<<endl;
    }*/
	if (ans==MAXANS) cout<<-1<<endl;
	else cout<<ans<<endl;
}
