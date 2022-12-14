
// Problem: Horoscope Matrix
// Contest: CodeChef - December Lunchtime 2020 Division 2
// URL: https://www.codechef.com/LTIME91B/problems/HRSCPMTR
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable" 
//#pragma GCC diagnostic ignored "-Wformat"

using namespace std ;

#define   Pi     2*acos(0.0)
#define   LINF   1LL<<62
#define   ll     long long
#define   ull    unsigned long long
#define   pb     push_back
#define   mp     make_pair
#define   MAX    500006
#define   MAX1   10000008
#define   mem(a,v)   memset(a,v,sizeof(a))
#define   all(x) x.begin(),x.end()
#define   lcm(a, b)        ((a)*((b)/__gcd(a,b)))
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define buga  cout<<1<<endl
#define bugb  cout<<2<<endl
#define bugc  cout<<3<<endl
#define bugd  cout<<4<<endl
#define buge  cout<<5<<endl

void fastIO (){ios_base::sync_with_stdio(false);cin.tie(0); cout.precision(20);}

ll A[506][506];
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
ll sti(string a,int base=10)
{
	ll k=0;
	for (int i=0;i<(int)a.size();++i)
	{
		k*=base;
		k+=a[i]-'0';
	}
	return k;
}
 
/*
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

void chk(int n, int m){
	bool check = 0;
	for(int i = 1; i <= m; i++){
		int a = 1 , b = i;
		int last = A[a][b]; check = 0; 
		for(int j = 1; ;j++){
			if(a>n or b > m)break;
			if(A[a][b] != last)check = 1;
			last = A[a][b];
			a++;b++;
		}
		if(check)B[i] = false;
		else B[i] = true;
	}
	check = 0;
	for(int i = 2; i <= n; i++){
		int a = i , b = 1;
		int last = A[a][b];  check = 0;
		for(int j = 1; ;j++){
			if(a>n or b > m)break;
			if(A[a][b] != last)check = 1;
			last = A[a][b];
			a++;b++;
		}
		if(check)C[i] = false;
		else C[i] = true;
	}
}

void chk1(int n, int m, int a ,int b){
	bool check = 0;
	a = a - b + 1; b = 1;
	for(int i = a; i <= a; i++){
		int a = i , b = 1;
		int last = A[a][b]; 
		for(int j = 1; ;j++){
			if(a>n or b > m)break;
			if(A[a][b] != last)check = 1;
			last = A[a][b];
			a++;b++;
		}
		if(check)C[i] = false;
		else C[i] = true;
	}
}

void chk2(int n, int m, int a ,int b){
	bool check = 0;
	 b =  b - a + 1; a = 1;
	for(int i = b; i <= b; i++){
		int a = 1 , b = i;
		int last = A[a][b]; 
		for(int j = 1; ;j++){
			if(a>n or b > m)break;
			if(A[a][b] != last)check = 1;
			last = A[a][b];
			a++;b++;
		}
		if(check)B[i] = false;
		else B[i] = true;
	}
	
}

int main ()
{
    fastIO();
    ll a,b,c,d,n,m,k,l,p,q,r,t,x,y;
    ll cnt=0,cntr=0,sum=0,ans=1,check=0;
    ll Max= 0,Max1=-1e18+1,Min=LINF;
    string s,s1,s3,s4;

    //cin>>n;
    cin>>t;

    while(t--){
        cin>>n>>m;
        for(int i = 1; i <= m + n; i++){
        	B[i] = C[i] = 0;
        }
        for(int i = 1; i <= n; i++){
        	for(int j = 1; j <= m; j++)cin >> A[i][j];
        }
        chk(n,m);
        cin >> q;
        while(q--){
        	cin >> a >> b >> p;
        	A[a][b] = p;
        	if(a > b){
        		chk1(n,m,a,b);
        	}
        	else {
        		chk2(n,m,a,b);
        	}
        	check = 0;
        	for(int i = 1; i <= m; i++){
        		if(!B[i])check = 1;
        	}
        	for(int i = 2; i <= n; i++){
        		if(!C[i])check = 1;
        	}
        	if(!check)cout<<"Yes"<<endl;
        	else cout<<"No"<<endl;
        }

    }

    return 0;
}

