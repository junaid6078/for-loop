#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	int i;
	int j=0;
	cout<<"enter a number = ";
	cin>>num;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			cout<<"number is not prime number"<<endl;
			j=1;
			break;
		}
	}
	if(j==0)
	cout<<"number is prime";

	return 0;
	
}
