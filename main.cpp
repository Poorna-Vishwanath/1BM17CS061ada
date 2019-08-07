#include<iostream>
using namespace std;

int main()
{ 
	int i,arr1[10],arr2[10];
	int n1,n2,k1,k2;
	cout<<"Enter the number of elements for 1st array:";
	cin>>n1;
	cout<<"Enter the elements:";
	for(i=0;i<n1;i++)
		cin>>arr1[i];
	cout<<"Enter the key element to be searched:";
	cin>>k1;
	for(i=0;i<n1;i++)
	{
		if(k1==arr1[i])
			{  cout<<"1";
			   break;
			}
		if(i==arr1[n1]-1)
			cout<<"-1"<<endl;
	}
			
	cout<<"Enter the number of elements for 2nd array:";
	cin>>n2;
	cout<<"Enter the elements:";
	for(i=0;i<n2;i++)
		cin>>arr2[i];
	cout<<"Enter the key element to be searched:";
	cin>>k2;
	for(i=0;i<n2;i++)
	{
		if(k2==arr2[i])
	       {  cout<<"1";
		      break;
		   }
		if(i==arr2[n2]-1)
			cout<<"-1";
	}
			
	return 0;
}
