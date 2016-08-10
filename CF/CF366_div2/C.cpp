#include <iostream>
#include <queue>
using namespace std;
int n,q,x,t,ans=0,s=0;
queue<int>a[300010];
queue<int>w;
bool mark[300010];
main()
{
  cin>>n>>q;
  for (int i=1;i<=q;i++)
  {
    cin>>t>>x;
    if (t==1) 
    {
      s+=1;
      a[x].push(s);
      w.push(s);
      ans++;
    }  
    else 
    if (t==2) 
    {
      while (!a[x].empty())
      {
         if (!mark[a[x].front()]) 
         {
           ans-=1;
           mark[a[x].front()]=true;
         }
         a[x].pop();
      }
    }
    else 
    if (t==3) 
    {
      while (!w.empty()&&w.front()<=x)
      {
         //cout<<"!"<<w.front()<<endl;
         if (!mark[w.front()])
         {
            ans-=1;
            mark[w.front()]=true;
         }
         w.pop();
      }
    }
    cout<<ans<<endl;
  }
}
