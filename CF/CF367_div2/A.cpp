#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int a,b,n;
double ans=2e9;
main()
{
  cin>>a>>b>>n;
  for (int i=1;i<=n;i++)
  {
    int x,y,v;
    cin>>x>>y>>v;
    if (sqrt((a-x)*(a-x)+(b-y)*(b-y))/v<ans) ans=sqrt((a-x)*(a-x)+(b-y)*(b-y))/v;
  } 
  printf("%.20lf\n",ans);
}
