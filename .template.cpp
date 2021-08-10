using namespace std;
#include <iostream>
#include <algorithm>
#include <numeric>
#define REP(i,n) for(int i=0; i<n; i++)
#define SORT(A) sort(A.begin(),A.end())
#define REV(A) reverse(A.begin(),A.end())
#define RSORT(A) SORT(A);REV(A)
#define ll long long
#define umap unordered_map
#define pb push_back
template<class T>bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}
template<class T>void o(const T &v){cout<<v;}
template<class T>void on(const T &v){cout<<v<<endl;}
template<class T>vector<T>copy(vector<T>v){vector<T>w;for(T t:v)w.pb(t);return w;}
template<class T>void ov(vector<T> vec){int i=0;for(T v:vec){if(i++)cout << " ";cout << v;}cout << endl;}
template<class T>vector<T>atsu(vector<T>vec){vector u=copy(vec);SORT(vec);unordered_map<T,int> mp;vector<T> a;int i = 1;for(T t:vec){if(mp[t]==0)mp[t]=i++;}for(T t:u){a.pb(mp[t]);}return a;}
ll in(){ll v;cin >> v;return v;}
vector<ll> ins(){vector <ll>v;for(std::string token;std::getline(cin,token,' ');)v.pb(stoi(std::move(token)));return v;}

int main(void){
    auto n = in();

    o(n);
}

