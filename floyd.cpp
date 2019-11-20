#include <bits/stdc++.h> 
using namespace std; 
#define V 4  
 
   
void print(int dist[][V]);  
   
void floyd (int graph[][V])  
{  
   
    int dist[V][V], i, j, k;  
    for (i = 0; i < V; i++)  
        for (j = 0; j < V; j++)  
            dist[i][j] = graph[i][j];  
  
    for (k = 0; k < V; k++)  
    {  
        for (i = 0; i < V; i++)  
        {  
              for (j = 0; j < V; j++)  
            {   
                if (dist[i][k] + dist[k][j] < dist[i][j])  
                    dist[i][j] = dist[i][k] + dist[k][j];  
            }  
        }  
    }  
  
    print(dist);  
}  
  
void print(int dist[][V])  
{  
    cout<<"The following matrix shows the shortest distances"
            " between every pair of vertices \n";  
    for (int i = 0; i < V; i++)  
    {  
        for (int j = 0; j < V; j++)  
        {  
            if (dist[i][j] == 99)  
                cout<<"99"<<"     ";  
            else
                cout<<dist[i][j]<<"     ";  
        }  
        cout<<endl;  
    }  
}  
 
int main()  
{  
    
    int graph[V][V];
    cout<<"Enter the adjacency matrix:\n";
    for(int i=0;i<V;i++)
       for(int j=0;j<V;j++)
         cin>>graph[i][j];
  
   
    floyd(graph);  
    return 0;  
}  
