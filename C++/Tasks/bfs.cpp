#include <bits/stdc++.h>
using namespace std;
void addedge(vector<int>adj[],int u,int v){
  adj[u].push_back(v);
}

void bfs(vector<int> adj[],int V){
  bool visited[V+1];
  for(int i=1;i<=V;i++){
    visited[i]=false;
  }
  queue<int> q;
  int s=1;
  visited[s]=true;
  q.push(s);
  while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<node<<" ";
    for(int i=0;i<adj[node].size();i++){
      if(visited[adj[node][i]]==false){
        visited[adj[node][i]]=true;
        q.push(adj[node][i]);
            }
    }
  }
}

int main(){
  int V=7;
  vector<int> adj[V+1];
  addedge(adj,0,1);
  addedge(adj,0,2);
  addedge(adj,0,3);
  addedge(adj,1,2);
  addedge(adj,1,3);
  addedge(adj,2,3);
  bfs(adj,V);
}
