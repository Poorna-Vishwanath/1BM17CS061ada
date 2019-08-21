#include<iostream>
using namespace std;

int main()
{
	int i,j,n,a[10];
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
		for(j=0;j<n-2-i;j++)
		{
			if(a[j+1]>a[j])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			int max=a[n-2-i];
		}
		cout<<max;
	}
	
}