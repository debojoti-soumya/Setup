#include <bits/stdc++.h>
using namespace std;
#define var(x) #x
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << "{"; __print(x.first); cerr << ", "; __print(x.second); cerr << "}";}
template<typename T, typename M, typename N>
void __print(tuple<T, M, N> x) {cerr << "{"; __print(get<0> (x)); cerr << ", "; __print(get<1> (x)); cerr << ", "; __print(get<2> (x)); cerr << "}";}
template<typename T>
void __print(const T &x) {int f = 0; cerr << "{"; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
template<typename T>
void debug_string(T t) { string r; while (t > 0) { r += (t % 10) + '0'; t /= 10; } reverse(r.begin(), r.end()); cerr << "[" << var(r) << "] = [" << r << "]\n"; }
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
