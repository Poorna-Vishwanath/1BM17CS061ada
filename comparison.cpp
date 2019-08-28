#include<iostream>
using namespace std;
int count=0;
void selection(int a[],int n)
{  int i,min,j,temp,res,loc;
   for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {   count++;
                min=a[j];
                loc=j;
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
 
/* cout<<"\nNumber of comparisons:";
 res=(n*(n-1))/2;
 cout<<res<<endl;*/
}

void bubble(int a[],int n)
{ 
  int i,j,temp,res;
  for(i=1;i<n;++i)
	{
	   for(j=0;j<(n-i);++j)
		if(a[j]>a[j+1])
		{  count++;
	           temp=a[j];
		   a[j]=a[j+1];
		   a[j+1]=temp;
		}
	}
 /* cout<<"\nNumber of comparisons:";
 res=(n*(n-1))/2;
 cout<<res<<endl;*/
}
   
/*void split(int a[],int low,int high)
{ int mid;
  if(low<high)
  { 
     mid=(low+high)/2;
     split(a,low,mid);
     split(a,mid+1,high);
     combine(a,low,mid,high);
   
   
    
  }
}

void combine(int a[],int low,int mid,int high)
{
  int c[20],i,j,k;
  i=low; j=mid+1;
  k=low;
  while(i<=mid && j<=high)
 {
     if(a[i]<a[j])
       c[k++]=a[i++];
     else
       c[k++]=a[j++];
 }
 if(i>mid)
 { while(j<=high)
   c[k++]=a[j++];
 }
if(j>high)
 {
   while(i<=mid)
   c[k++]=a[i++];
 }
for(i=low;i<=high;i++)
  { a[i]=c[i];
    }

}*/
int main()
{
  int a[20],i,n,ch;
  cout<<"Enter the size:";
  cin>>n;
  cout<<"\nEnter the array elements:";
  for(i=0;i<n;i++)
  cin>>a[i];
  do{
  cout<<"\n1-Bubble 2-Selection 3-MergeSort 4-exit";
  cout<<"Enter your choice:";
  cin>>ch;
  switch (ch)
  { 
     case 1: bubble(a,n);
             cout<<"No of comparison:"<<count;
             break;
     case 2: selection(a,n);
             cout<<"No of comparison:"<<count;
             break;
    /* case 3: split(a,0,n-1);
             cout<<"Number of comparisons:"<<n-1;
             break;*/
     case 4: exit(1);
     default: cout<<"Invalid choice";
              break;
  }
 }while(ch!=4);

 
  cout<<"Array elements after sorting:";
  for(i=0;i<n;i++)
  cout<<a[i]<<" ";
  return 0;
}


