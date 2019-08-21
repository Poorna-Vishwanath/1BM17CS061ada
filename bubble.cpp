#include<iostream>
using namespace std;

int main()
{
	int i,j,n,a[10],max;
	cout<<"Enter size:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	int k;
	cout<<"Enter the value for k:";
	cin>>k;
	for(i=0;i<k;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			 max=a[n-1-i];
		}
		cout<<max;
	}
	
}
