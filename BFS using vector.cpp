#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
vector<int> adj[100];
int visited[100];
void bfs(int s, int e)
{
        for(int i=0; i<e; i++)
            visited[i]=0;
            queue<int>q;
            q.push(s);
            visited[s]=1;
            while(!q.empty()){
                int n=q.front();
                cout<<n<<endl;
                q.pop();
               // cout<<"size of adj[n]"<<adj[n].size()<<endl;
                for(int i=0; i<adj[n].size(); i++)
                    if(visited[adj[n][i]]==0)
                {
                    int v=adj[n][i];
                    visited[v]=1;
                    q.push(v);
                }
        }
}
int main(){
        int node,edge,strnode,i,a,b;
        printf("Enter Node & Edge:\n");
        cin>>node>>edge;
        for(i=0; i<edge;  i++){
            cin>>a>>b;
            adj[a].push_back(b);
        }
        printf("Enter Straring Node:\n");
        cin>>strnode;
        bfs(strnode,edge);
return 0;
}
