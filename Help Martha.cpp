#include <bits/stdc++.h>
using namespace std ;

#define      LINF   1LL<<63
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   ft     first
#define   sd     second
#define   PII    pair<int,int>
#define   all(x) x.begin(),x.end()
#define   VL vector<long long int >
#define   VLL vector<pair<long long ,long long > >
#define   PLL pair<long long ,long long >
#define fill(x,v) fill(all(x),v)

#define sc1(x) scanf("%lld",&x)
#define sc2(x,y) scanf("lld",&x,&y)
#define sc3(x,y,z) scanf("lld%lld",&x,&y,&z)
#define sc4(a,b,c,d) scanf("lldlld",&a,&b,&c,&d)
#define sc5(a,b,c,d,e) scanf("lldlld%lld",&a,&b,&c,&d,&e)

#define pr1(x) printf("%lld\n",x)
#define pr2(x,y) printf("%lld %lld\n",x,y)
#define pr3(x,y,z) printf("%lld %lld %lld\n",x,y,z)
#define pr4(a,b,c,d) printf("%lld %lld %lld %lld\n",a,b,c,d)
#define pr5(a,b,c,d,e) printf("%lld %lld %lld %lld %lld\n",a,b,c,d,e)


void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[MAX];
ll B[MAX];
ll C[MAX];
vector< ll >V;
vector< ll >Ans;
vector< pair<ll,ll> >VP;
map< ll,ll >M;
vector<ll>prime;
bool mark[MAX1];
ll N=1e7;
void seive (){int limit = sqrt(N*1.0)+2;mark[1]=1;for (int i=4;i<=N;i+=2)mark[i]=1;prime.push_back(2);for (int i=3;i<=N;i+=2){if(!mark[i]){prime.push_back(i);if(i<=limit){for (int j=i*i;j<=N;j+=i*2)mark[j]=1;}}}}
/*
ll bin_pow(ll o, ll s) {
    if (s == 0) return 1;
    if (s == 1) return o % mod;
    ll d = bin_pow(o, s/2);
    d = (d * 1ll * d) % mod;
    if (s % 2 == 1)
        d = (d * 1ll * o) % mod;
    return d;
}
*/
/*
vector<int> z_function (string s) {
    int n = (int) s.length();
    vector<int> z (n);
    for (int i=1, l=0, r=0; i<n; ++i) {
        if (i <= r)
            z[i] = min (r-i+1, z[i-l]);
        while (i+z[i] < n && s[z[i]] == s[i+z[i]])
            ++z[i];
        if (i+z[i]-1 > r)
            l = i,  r = i+z[i]-1;
    }
    return z;
}*/

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1;
    ll Min = 1e18;
    string s1,s3,s4;

    //cin>>n;
    scanf("%lld",&t);

    while(t--){
        char s[1000006];
        scanf("%s",s);

        ll u=0;l=0,r=0,d=0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='U')u++;
            if(s[i]=='D')d++;
            if(s[i]=='L')l++;
            if(s[i]=='R')r++;
        }
        scanf("%lld %lld",&x,&y);
        scanf("%lld",&q);
        check=0;
        while(q--){
            scanf("%lld %lld",&a,&b);
            check=0;
            ll p1=0,p2=0,p3=0,p4=0;
            if(a>=x){
                p1 = a-x;
                if(r<p1)check=1;
            }
            else {
                p2=x-a;
                if(l<p2)check=1;
            }
            if(b>=y){
                p3 = b-y;
                if(u<p3)check=1;
            }
            else {
                p4=y-b;
                if(d<p4)check=1;
            }
            if(check){
                printf("NO\n");
            }
            else{
                printf("YES %lld\n",p1+p2+p3+p4);
            }
        }


    }

    return 0;
}
