#include<iostream>
using namespace std;
#define N 4
//int n;
int adj[N][N];
int indegree[4];
void indegree1(){
   for(int i=0;i<=N;i++){
      indegree[i]=0;
   }
   for(int i=0;i<=N;i++){
      for(int j=0;j<=N;j++){
      indegree[i]=indegree[i]+adj[j][i];
      }
   }
}
void topologicalsort(){
  indegree1();
int count=0;
  for(int i=0;i<=N;i++){
     if(indegree[i]==0){
       count++;
       cout<<i<<" ";
       indegree[i]=-1;
        for(int j=0;j<N;j++){
          if(adj[i][j]==1){
           indegree[j]=indegree[j]-1;
          }
        }
  }
  
}
    if(count==0){
      cout<<"Cycle in Graph - No solution exists\n";}
}
int main(){
 
 cout<<"enter adjacency matrix \n";
 for(int i=0;i<=N;i++){
  for(int j=0;j<=N;j++){
    cin>>adj[i][j];
  }
 } 
topologicalsort();
 return 0;
}
