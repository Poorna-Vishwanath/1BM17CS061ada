#include<iostream>
using namespace std;

int main()
{
	int n,key,mid;
	cout<<"Enter a numner";
	cin>>n;
	int low=0,high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(mid*mid==n)
		{
			key=mid;
			break;
		}
		else if(mid*mid>n)
		{
			high=mid-1;
			key=mid;
		}
		else
			low=mid+1;
		
		mid=(low+high)/2;
	}
	cout<<"Square root="<<key;
}