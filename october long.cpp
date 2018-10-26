#include<iostream>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int s,h,j,k,l,x;
		cin>>j>>k>>l;
		x=(j+k);
		if(x%l==0)
		 s=x/l;
		else
		{
			s=int(x/l);
			h=x%l;
		}
		if(s%2==0)
		{
			cout<<"CHEF"<<endl;
		}
		else
		cout<<"COOK"<<endl;
	}
}
