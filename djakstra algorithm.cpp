#include<bits/stdc++.h>
using namespace std;

priority_queue <pair < long long int, int > > pq;
vector < pair<int, int> > x[100005];
long long int dis[100005];

void dijkstra(int node) {
    for(int i = 0; i < 100005; i++)dis[i] = 1e18;
    dis[node] = 0;
    pq.push({-dis[node], node});
    while(!pq.empty()){
        int currentNode = pq.top().second;
        long long currentCost = -pq.top().first;
        pq.pop();
        for(auto to: x[currentNode]){
            long long currentDistance = currentCost + to.second;
            if(currentDistance<dis[to.first]){
                dis[to.first] = currentDistance;
                pq.push({-dis[to.first], to.first});
            }
        }

    }
}

int main() {
    int node, edge;
    cin >> node >> edge;
    if(edge==0)
    {
        cout<<"unreachable";
    }
    while(edge--) {
        int u, v, cost;
        cin >> u >> v >> cost;
        x[u].push_back({v, cost});
        x[v].push_back({u, cost});
    }
    int s,e;
    cin>>s>>e;


    dijkstra(s);

    cout<<"Distance of "<<e <<" is "<<dis[e]<<endl;



    return 0;
}
