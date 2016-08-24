#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int w[100010],a[100010],n,x,q;
main()
{
  cin>>n;
  for (int i=1;i<=n;i++)
  {
    cin>>x;
    w[x]++;
  } 
  for (int i=1;i<=100000;i++) a[i]=a[i-1]+w[i];
  cin>>q;
  for (int i=1;i<=q;i++)
  {
     cin>>x;
     x=min(100000,x);
     cout<<a[x]<<endl;
  } 
}
