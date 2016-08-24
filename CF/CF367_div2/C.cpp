#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int c[100010],n;
long long f[100010][2],ans;
string s[100010],s2[100010];
const long long MAXANS=1e15;
main()
{
  cin>>n;
  for (int i=1;i<=n;i++) cin>>c[i];
  f[1][0]=0;f[1][1]=c[1];
  cin>>s[1];
  //cout<<s[1]<<endl;
  s2[1]=s[1];
  reverse(s2[1].begin(),s2[1].end());
  for (int i=2;i<=n;i++)
  {
     cin>>s[i];
     //cout<<s[i]<<endl;
     s2[i]=s[i];
     reverse(s2[i].begin(),s2[i].end());
     f[i][0]=MAXANS;
     f[i][1]=MAXANS;
     if (s[i-1]<=s[i]) f[i][0]=min(f[i][0],f[i-1][0]);
     if (s[i-1]<=s2[i]) f[i][1]=min(f[i][1],f[i-1][0]+c[i]);
     if (s2[i-1]<=s[i]) f[i][0]=min(f[i][0],f[i-1][1]);
     if (s2[i-1]<=s2[i]) f[i][1]=min(f[i][1],f[i-1][1]+c[i]);
     /*if (f[i][0]==MAXANS && f[i][1]==MAXANS) 
     {
        cout<<"-1"<<endl;
        return 0;
     }*/
  } 
  ans=min(f[n][0],f[n][1]);
  if (ans==MAXANS) cout<<-1<<endl;
  else cout<<ans<<endl;
}
