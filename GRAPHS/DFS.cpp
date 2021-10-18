/*The task is to find the Depth First Search traversal which uses stack */


#include<bits/stdc++.h>
using namespace std;

void DFS(int node,vector<int> adj[], vector<int> &vis, vector<int> &dfs)  //recursive function
{
	dfs.push_back(node);
	vis[node]=1;
	for(auto it: adj[node])
	{
		if(!vis[it])
		{
			DFS(it,adj,vis,dfs);
		}
	}
}

vector<int> dfsTraversal(int N, vector<int> adj[])   //function for dfs traversal
{
	vector<int> dfs;
	vector<int> vis(N+1,0);
	for(int i=1;i<=N;i++)
	{
		if(!vis[i])
		{
			DFS(i,adj,vis,dfs);
		}
	}
	return dfs;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
  int N,E;
  cin>>N>>E;
  vector<int> adj[N+1];
  for(int i=0;i<E;i++)
  {
  	int u,v;
  	cin>>u>>v;
  	adj[u].push_back(v);
  	adj[v].push_back(u);
  }
  vector<int> answer;
  answer = dfsTraversal(N,adj);
  for(int i=0;i<answer.size();i++)
  	cout<<answer[i]<<'\t';

	return 0;
}
