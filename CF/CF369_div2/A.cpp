#include <iostream>
#include <string>
using namespace std;
int n,flag=0;
string s[1010];
main()
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>s[i];
		if (s[i][0]=='O'&&s[i][1]=='O'&&flag==0)
		{
			flag=1;
			s[i][0]='+';
			s[i][1]='+';
		}
		else
		if (s[i][3]=='O'&&s[i][4]=='O'&&flag==0)
		{
			flag=1;
			s[i][3]='+';
			s[i][4]='+';
		}
	}
	if (flag==0) cout<<"NO"<<endl;
	else 
	{
		cout<<"YES"<<endl;
		for (int i=1;i<=n;i++) cout<<s[i]<<endl;
	}
}
