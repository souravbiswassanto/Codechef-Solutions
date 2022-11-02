
// Problem: JEC AND THE LIGHTS
// Contest: CodeChef - Codepentry
// URL: https://www.codechef.com/CDPY2022/problems/JECLIGHTS
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> t;

    while(t--){
        Max = 0; Min = 100000;
        cin >> n >> m; vector<string> vs;
        vector<pair<int, int>> v; 
        v.pb({0, 0});
        for(int i = 0; i < n; i++){
            cin >> s; vs.pb(s);
        }
        reverse(vs.begin(), vs.end());
        for(int i = 0; i < n; i++){
            s = vs[i]; Min = 10000; Max = 0;
            for(int j = 0; j < s.size(); j++){
                if(s[j] == '1'){
                    Min = min(Min, (ll)j);
                    Max = max(Max, (ll)j);
                }
            }
            if(Max == 0)v.pb({s.size() - 1, 0});
            else v.pb({Min, Max});
        }
        ll dp[n + 3][2]; dp[0][0] = -1; dp[0][1] = 10000000;
        for(int i = 1; i <= n; i++){
            dp[i][0] = dp[i - 1][0] + 1;
            dp[i][1] = dp[i - 1][1] + 1; b = dp[i][0];
            dp[i][0] = min(dp[i][0] + 2 * v[i].second, dp[i][1] + m + 1);
            dp[i][1] = min(dp[i][1] + 2 * (m + 1 - v[i].first), b + m + 1);
            //cout << i <<" "<< dp[i][0] << " "<< dp[i][1] << endl;
        }
        ans = 0;
        for(int i = n; i >= 1; i--){
            if(v[i].second != 0){
                ans = i; 
                Max = v[i].second;
                Min = v[i].first;
                break;
            }
        }
        //cout << ans << endl;
        if(ans == 0){
            cout << 0 << endl; continue;
        }
        ans--;
        cout << min(dp[ans][0] + 1 + Max, dp[ans][1] + 1 + (m + 1 - Min)) << endl;

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
