#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
double x,y,t,q=-2e9,p=2e9,w,v,u;
int n;
main()
{
  cin>>n>>w>>v>>u;
  for (int i=1;i<=n;i++) 
  {
     cin>>x>>y;
     t=x/v-y/u;
     p=min(p,t);
     q=max(q,t);
  } 
  if (p>=0||q<0) printf("%.10f\n",w/u);
  else printf("%.10f\n",q+w/u);
}
