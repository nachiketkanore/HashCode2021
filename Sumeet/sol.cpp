/* HashCode 2021 - Nachiket Kanore (Team: Pretests Passed) */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cassert>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <cmath>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <set>
#include <map>

#define int long long
#define pb push_back
#define ALL(x) (x).begin(),(x).end()
#define sz(x) (int)(x.size())
#define FOR(i,L,R) for(int i = (L); i <= (R); i++)
using namespace std;

template<class T> bool cmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool cmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; } 

struct edge {
	int to, w;
	string name;
	edge(int to_, int w_, string name_) {
		to = to_;
		w = w_;
		name = name_;
	}
};

const int N = 1e5 + 5;
int tot_time, n, e, cars, bonus;
vector<edge> to[N], from[N];
map<string, int> cnt_edge;
map<string,int>f,t;

int32_t main() {
	ios::sync_with_stdio(0); cin.tie(0);
	set<int> s;
	int count=0;
	cin >> tot_time >> n >> e >> cars >> bonus;
	for (int i = 0; i < e; i++) {
		int u, v, req;	cin >> u >> v;
		string name;	cin >> name >> req;
		f[name]=u;
		t[name]=v;
		to[u].push_back(edge(v, req, name));
		from[v].push_back(edge(u, req, name));	// reverse edge just for finding incoming edges
	}
	for (int i = 0; i < cars; i++) {
		int path_len;	cin >> path_len;
		string name;
		for(int j=0;j<path_len;j++){
			cin >> name;
			cnt_edge[name]++;
			// if(j==0){
			// 	s.insert(t.find(name)->second);
			// }
			// else if(j==path_len-1)
			// {	s.insert(t.find(name)->second);
			// }
			if(j!=0 && j!=path_len-1) {
				s.insert(f.find(name)->second);
				s.insert(t.find(name)->second);
			}
		}
		
	}



	cout << s.size() << '\n';
	for (int i = 0; i < n; i++) {
		cout << i << '\n';
		vector<edge> &incoming = from[i];
		cout << sz(incoming) << '\n';
		for (edge E : incoming) {
			cout << E.name << ' ' << tot_time << '\n';
		}
	}
	// cout<<3<<"\n"
}

/*
3
1
2
rue-d-athenes 2
rue-d-amsterdam 1
0
1
rue-de-londres 2
2
1
rue-de-moscou 1
*/