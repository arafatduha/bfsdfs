#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
int visited[1000];
void dfs(int strt){
    stack<int>s;
    s.push(strt);
    visited[strt]=1;
        while(!s.empty()){
                int n=s.top();
                s.pop();
            cout<<n<<endl;
                for(int i=0; i<adj[n].size(); i++){
                        if(visited[adj[n][i]]==0){
                                int k=adj[n][i];
                                s.push(k);
                                visited[k]=1;
                        }
                }
        }
    }
int main(){
    int n,node,edge,i,j,k,x,y,strnode;
    memset(visited,0,sizeof(visited));
    memset(adj,0,sizeof(adj));
    cout<<"Enter Node & Edge: ";
    cin>>node>>edge;
    cout<<"Enter Edges: "<<endl;
        for(i=0; i<edge; i++){
            cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        }
        cout<<"Enter starting Node: ";
        cin>>strnode;
        dfs(strnode);

return 0;
}
