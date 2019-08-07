#include <iostream>
using namespace std;

int main()
{
	int a[20],i,n;
	cout<<"Enter the number of elements:";
	cin>>n;
	cout<<"Enter the numbers:";
	for(i=0;i<n;i++)
		cin>>a[i];
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	cout<<"Maximum number:"<<max<<endl;
	//cout<<a[n-1]<<endl;
}
