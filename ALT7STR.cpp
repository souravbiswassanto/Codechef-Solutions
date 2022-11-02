// Problem: Alternating Strings
// Contest: CodeChef - Starters 44 Division 2 (Rated)
// URL: https://www.codechef.com/START44B/problems/ALT7STR
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Wsign-compare"
//#pragma GCC optimize ("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std ;

#define   Pi     2*acos(0.0)
#define   ll     long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());	
template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX], B[MAX], C[MAX];
const ll  mod = 1e9 + 7;
ll dp[MAX];

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> t;
    cntr = 1LL;
    vector<ll> v;
    v.pb(0);
    while(sum <= 1000000000LL){
    	sum += cntr;
    	A[cntr] = (A[cntr - 1] + sum) % mod; A[cntr] %= mod;
    	ans++;
    	cntr++;
    	v.pb(sum);
    }
    dp[0] = 0;
    for(int i = 1; i <= 200000; i++){
    	a = (i * 1LL * A[i - 1]); a %= mod;
    	dp[i] = (dp[i - 1] + a) % mod;
    	dp[i] %= mod;
    	//if(i < 10) cout << dp[i] << endl;
    }
   // cout << endl;

    while(t--){
        cin >>  n;
        a = upper_bound(v.begin(), v.end(), n) - v.begin();
        //cout << "a " << v[a - 1] << endl;
        ans = ((A[a - 1]) * 1LL * (n - v[a - 1])) % mod;
        ans = (ans + dp[a - 1]) % mod;
		cout << ans << endl;
    }
    /* 
        precedence : ! * / % + - << >> 
        < > <= >= == != & ^ | && ||
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
