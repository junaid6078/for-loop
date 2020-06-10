#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int ans,bas,exp;
	cout<<"enter base number";
	cin>>bas;
	cout<<endl<<"enter exponent of base";
	cin>>exp;
	{
		ans=pow(bas,exp);
	}
	cout<<endl<<"result = "<<ans;
	return 0;
}
