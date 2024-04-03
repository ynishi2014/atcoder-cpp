#include <stdio.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <string>
#include <algorithm>
#include <queue>
#define ll long long
using namespace std;

class Dijkstra{
    public:
        vector<vector<pair<ll, ll>>> G;
        vector<ll> dist;
        vector<ll> prev;
        ll V;
        Dijkstra(ll v){
            V = v;
            G.resize(v);
            dist.resize(v, 1e18);
            prev.resize(v, -1);
        }
        void add_edge(ll from, ll to, ll cost){
            G[from].push_back(make_pair(to, cost));
        }
        void solve(ll from){
            dist[from] = 0;
            priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> que;
            que.push(make_pair(0, from));
            while(!que.empty()){
                pair<ll, ll> p = que.top();
                que.pop();
                ll v = p.second;
                if(dist[v] < p.first){
                    continue;
                }
                for(int i = 0; i < G[v].size(); i++){
                    pair<ll, ll> e = G[v][i];
                    if(dist[e.first] > dist[v] + e.second){
                        dist[e.first] = dist[v] + e.second;
                        prev[e.first] = v;
                        que.push(make_pair(dist[e.first], e.first));
                    }
                }
            }
        }
};

int main(){
    ll N;
    cin >> N;
    Dijkstra dijkstra(N);
    for(int i = 0; i < N-1; i++){
        ll f, t, d;
        cin >> f >> t >> d;
        dijkstra.add_edge(i, i+1, f);
        dijkstra.add_edge(i, d-1, t);
    }
    dijkstra.solve(0);
    cout << dijkstra.dist[N-1] << endl;
}
