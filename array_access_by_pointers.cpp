#include<iostream>
using namespace std;

int main()
{
	int *p;
	int arr[5];
	cout<<"Enter elements : ";
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	p = arr;
	cout<<"You entered : ";
	for(int i=0;i<5;i++)
	{
		cout<<*p<<" ";
		p++;
	}
	return 0;
}