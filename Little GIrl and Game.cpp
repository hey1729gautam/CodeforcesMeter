
// Code by gautam_verma
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("03")
#define n_l '\n'
template <typename T, size_t N> int SIZE(const T (&t)[N]){ return N; } template<typename T> int SIZE(const T &t){ return t.size(); } string to_string(string s, int x1=0, int x2=1e9){ return '"' + ((x1 < s.size()) ? s.substr(x1, x2-x1+1) : "") + '"'; } string to_string(const char* s) { return to_string((string) s); } string to_string(bool b) { return (b ? "true" : "false"); } string to_string(char c){ return string({c}); } template<size_t N> string to_string(bitset<N> &b, int x1=0, int x2=1e9){ string t = ""; for(int __iii__ = min(x1,SIZE(b)),  __jjj__ = min(x2, SIZE(b)-1); __iii__ <= __jjj__; ++__iii__){ t += b[__iii__] + '0'; } return '"' + t + '"'; } template <typename A, typename... C> string to_string(A (&v), int x1=0, int x2=1e9, C... coords); int l_v_l_v_l = 0, t_a_b_s = 0; template <typename A, typename B> string to_string(pair<A, B> &p) { l_v_l_v_l++; string res = "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; l_v_l_v_l--; return res; } template <typename A, typename... C> string to_string(A (&v), int x1, int x2, C... coords) { int rnk = rank<A>::value; string tab(t_a_b_s, ' '); string res = ""; bool first = true; if(l_v_l_v_l == 0) res += n_l; res += tab + "["; x1 = min(x1, SIZE(v)), x2 = min(x2, SIZE(v)); auto l = begin(v); advance(l, x1); auto r = l; advance(r, (x2-x1) + (x2 < SIZE(v))); for (auto e = l; e != r; e = next(e)) { if (!first) { res += ", "; } first = false; l_v_l_v_l++; if(e != l){ if(rnk > 1) { res += n_l; t_a_b_s = l_v_l_v_l; }; } else{ t_a_b_s = 0; } res += to_string(*e, coords...); l_v_l_v_l--; } res += "]"; if(l_v_l_v_l == 0) res += n_l; return res; } void dbgs(){;} template<typename Heads, typename... Tails> void dbgs(Heads H, Tails... T){ cout << to_string(H) << " | "; dbgs(T...); }
#define dbgm(...) cout << "[" << #__VA_ARGS__ << "]: "; dbgs(__VA_ARGS__); cout << endl;
#define MOD 1000000007
#define MOD9 1000000009
#define ull unsigned long long
#define ll long long
#define blaze ios::sync_with_stdio(false)
const double pie = 2 * acos(0.0);
#define prec(n) fixed<<setprecision(n)
#define pii pair <int, int>
#define pll pair <ll, ll> 
#define f (i, x, n) for (int i = x; i < n; i++)
#define pb push_back
#define eb emplace_back
#define MP make_pair
#define all(v) v.begin(), v.end()
#define ff first
#define ss second

//Little Girl and Game
#include <cstring>
#include <algorithm>

int main() {
	#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
	freopen("outp.txt", "w", stdout);
	#endif
	blaze;
	cin.tie(NULL);
	cin.tie(NULL);
	string str;
	cin >> str;
	int a[26] = {0};
	for (int i = 0; i < str.length(); i++) {
		a[int(str[i]) - int('a')] += 1;
	}
	/*int count = 0;
	for (int i = 0; i < 24; i++) {
		if (a[i] > 0)
			count += 1
	}
	cout << count;*/

	int odd = 0, even = 0;

	for (int i = 0; i < 26; i++) {
		if (a[i] > 0) {
			if (a[i] & 1)
				odd += 1;
			else
				even += 1;
		}
	}

	//dbgm(odd, even);

	int x = odd & 1;		// Player Number turn, if n=1 == 1st Player		n=0 == 2nd Player
	int y = sizeof(a) & 1;
	//dbgm(x, y);
	if (odd == 1 || odd == 0)
	{
		cout << "First" << endl;
	    return 0;
	}
	// This is bitwise xor to determine the game value to be employed to the winner
	int z = x ^ y;

	if (z) {
		cout << "First" << endl;
	}
	else {
		cout << "Second" << endl;
	}

	return 0;
}
