#include<iostream>
using namespace std;

int place(int , int);
int x[20];
void NQueens(int k,int n)
{
  
  for(int i=1;i<=n;i++)
   {  if(place(k,i))
       {  x[k]=i;
          if(k==n)
           { for(int i=1;i<=n;i++)
                cout<<x[i]<<" ";
              cout<<"\n";
            }
          else
              NQueens(k+1,n);
        }
    }
 }

int place(int k,int i)
{ for(int j=1;j<=k-1;j++)
   {   if ((x[j]==i) || (abs(x[j]-i) == abs(j-k)))
           return false;
   }
  return true;
}

int main()
{ 
   int n;
   cout<<"Enter the number of queens:";
   cin>>n;
   NQueens(1,n);
   return 0;
}
