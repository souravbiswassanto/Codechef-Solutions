#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
#pragma GCC diagnostic ignored "-Wformat"
#pragma GCC diagnostic ignored "-Wsign-compare"
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
void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

template<class T> using oset=tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// order_of_key returns the 0 based position of a value
// find_by_order returns a pointer pointing at the kth element 
// also 0 indexed
ll A[MAX];
ll B[MAX];
ll C[MAX];

int main ()
{
    fastIO();
    ll a, b, c, d, n, m, k, l, p, q, r, t, x, y;
    ll cnt = 0, cntr = 0, sum = 0,ans = 1, check = 0;
    ll Max = 0, Min = 2e18;
    string s, s1, s2;

    cin >> t;
    loop:
    while(t--){
        cin >> n;
        if(n == 1){
            cout <<"Alice"<<endl; continue;
        }
        if(n == 2){
            cout <<"Bob"<<endl; continue;
        }
        if(n == 3){
            cout <<"Alice"<<endl; continue;
        }
        m = n; b = 0;
        while(n){
            a = 0;
            for(int i = 0; i < 63; i++){
                bool ck  = n & (1LL << i);
                if(ck){
                    a = i; break;
                }
            }
            if(a == 0){
                n--; b++;
            }
            else if(a == 1){
                b++; n/=2;
            }
            else{
                if(b % 2 == 0){
                    cout << "Alice"<<endl; goto loop;
                }
                else {
                    cout <<"Bob"<<endl; goto loop;
                }
            }
        }
        if(b %2){
            cout <<"Alice"<<endl;
        }
        else cout <<"Bob"<<endl;

    }
    /* 
        always check the limit and make sure that is correct.
        lcm of first 40 numbers  can be calculated.
        sqrt of 10^9 is 31622.
        always usee 1LL while doing binary operations.
    */

    return (0 - 0 + 1 -  1 * 1);
}
