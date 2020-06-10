#include<iostream>
using namespace std;
int main()
{
	int i,num,factorial=1;
	cout<<"enter a number";
	cin>>num;
	for(i=1;i<=num;i++){
		factorial=factorial*i;
		}
		cout<<"factorial of a number = "<<factorial;
	return 0;
}
