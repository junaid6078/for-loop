#include<iostream>
using namespace std;
int main()
{
	int sign=-1;
	int n;
	float x;
	cout<<"entr x = ";
	cin>>x;
	cout<<endl<<"enter term";
	cin>>n;
	cout<<endl;
	int i,den,j;
	float num;
	float result=0;
	for(i=2;i<=n;i+=2){
		num=1;
		den=1;
		for(j=1;j<=i;j++)
		{
			num=num*x;
			den=den*j;
		}
		result=result+((sign*num)/den);
		sign=sign*(-1);
	}
	cout<<endl<<"final result"<<1+result;
	return 0;
}
