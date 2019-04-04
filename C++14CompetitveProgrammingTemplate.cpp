/*
	CREATED BY: Akshay Kumar Ravi
*/

//#pragma GCC optimize("O3")
//(UNCOMMENT WHEN HAVING LOTS OF RECURSIONS)
//#pragma comment(linker, "/stack:200000000")
//(UNCOMMENT WHEN TRYING TO BRUTEFORCE WITH A LOT OF LOOPS)\
//#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>


using namespace std;


typedef long long ll;
typedef long double LD;
#define int ll
#define double LD
#define pb push_back
#define mp make_pair
#define REP(i,n) for (int i = 0; i < n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define REPD(i,n) for (int i = n-1; i >= 0; i--)
#define FORD(i,a,b) for (int i = a; i >= b; i--)
#define remax(a,b) a = max(a,b)
#define remin(a,b) a = min(a,b)
#define all(v) v.begin(),v.end()
typedef map<int,int> mii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;


#define PRECISION(x) cout << fixed << setprecision(x); 
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


const int MAXN = 1000005;
const double PI=acos(-1);
const int INF = 1000000000;
const int MOD = 1000000007;
const int FMOD = 998244353;


template <typename T> inline T LCM(T a,T b){return (a*b)/GCD(a,b);}
template <typename T> inline T GCD(T a,T b)   {ll t;while(a){t = a;a = b%a;b = t;}return b;}
template <typename T> inline T EGCD(T a,T b,T &x,T &y){if(a == 0) {x = 0;y = 1;return b;}T x1, y1;T d = EGCD(b % a, a, x1, y1);x = y1 - (b / a) * x1;y = x1;return d;}

signed main(){
	//UNCOMMENT WHEN REQUIRED
	//FAST_IO
	//PRECISION(10)
 
	return 0;
}
