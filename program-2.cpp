#include<iostream>
using namespace std;
int main()
{
	int ans=0;
	int i;
	int input;
	for(i=1;i<=10;i++){
		cout<<i;
		cin>>input;
		ans = ans + input;
	}
cout<<"the sum of ten numbers is = "<<ans;
return 0;	
}
