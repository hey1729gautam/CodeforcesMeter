  //hey1729gautam@gmail.com
  #include<bits/stdc++.h>
 using namespace std;
 #define bolt ios::sync_with_stdio(false)
 #define n_l '\n'
 #define ll long long
 template <typename T, size_t N> int SIZE(const T (&t)[N]){ return N; } template<typename T> int SIZE(const T &t){ return t.size(); } string to_string(string s, int x1=0, int x2=1e9){ return '"' + ((x1 < s.size()) ? s.substr(x1, x2-x1+1) : "") + '"'; } string to_string(const char* s) { return to_string((string) s); } string to_string(bool b) { return (b ? "true" : "false"); } string to_string(char c){ return string({c}); } template<size_t N> string to_string(bitset<N> &b, int x1=0, int x2=1e9){ string t = ""; for(int __iii__ = min(x1,SIZE(b)),  __jjj__ = min(x2, SIZE(b)-1); __iii__ <= __jjj__; ++__iii__){ t += b[__iii__] + '0'; } return '"' + t + '"'; } template <typename A, typename... C> string to_string(A (&v), int x1=0, int x2=1e9, C... coords); int l_v_l_v_l = 0, t_a_b_s = 0; template <typename A, typename B> string to_string(pair<A, B> &p) { l_v_l_v_l++; string res = "(" + to_string(p.first) + ", " + to_string(p.second) + ")"; l_v_l_v_l--; return res; } template <typename A, typename... C> string to_string(A (&v), int x1, int x2, C... coords) { int rnk = rank<A>::value; string tab(t_a_b_s, ' '); string res = ""; bool first = true; if(l_v_l_v_l == 0) res += n_l; res += tab + "["; x1 = min(x1, SIZE(v)), x2 = min(x2, SIZE(v)); auto l = begin(v); advance(l, x1); auto r = l; advance(r, (x2-x1) + (x2 < SIZE(v))); for (auto e = l; e != r; e = next(e)) { if (!first) { res += ", "; } first = false; l_v_l_v_l++; if(e != l){ if(rnk > 1) { res += n_l; t_a_b_s = l_v_l_v_l; }; } else{ t_a_b_s = 0; } res += to_string(*e, coords...); l_v_l_v_l--; } res += "]"; if(l_v_l_v_l == 0) res += n_l; return res; } void dbgs(){;} template<typename Heads, typename... Tails> void dbgs(Heads H, Tails... T){ cout << to_string(H) << " | "; dbgs(T...); }
 #define dbgm(...) cout << "[" << #__VA_ARGS__ << "]: "; dbgs(__VA_ARGS__); cout << endl;
 int main() {

    bolt;
    cin.tie(NULL);
    cout.tie(NULL);
    ll L, R; cin >> L >> R;
    if(R - L + 1 >= 2019) {
    	cout << "0" << endl;
    }	
    else {
    	ll z = INT_MAX;
    	for(ll i = L; i <= R; i++) {
    		for(ll j = L; j <= R; j++) {
    			if(i == j) 
    				continue;
    		     z = min(z, ((i  % 2019) * (j % 2019)) % 2019);
    		}
    	}
    	cout << z << endl;
    }

  
    return 0;
 }