#include<bits/stdc++.h>
 
using namespace std ;
 
typedef double D ;
typedef long long ll ;
typedef long double ld ;
typedef unsigned int ui ;
typedef unsigned long long ull ;
 
# define F first
# define S second
# define R return
# define C continue 
# define pb push_back 
# define pf push_front
# define mp make_pair
 
# define vi vector <int>
# define vb vector <bool>
# define vll vector <ll>
# define vs vector <string>
 
# define vvi vector < vector < int > >
# define vvb vector < vector < bool > >
# define vvc vector < vector < char > >
# define vvll vector < vector < ll > >
# define vvd vector < vector < D > >
# define vvld vector < vector < ld > >
 
# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >
 
# define vpld vector < pld >
# define vpii vector < pii >
# define vpll vector < pll >
# define vpDD vector < pDD >
# define vvpii vector < vector < pii > >
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp
 
# define Fi(i,L,R) for (int i = L ; i <= R ; i++)
# define Fd(i,R,L) for (int i = R ; i >= L ; i--)

# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
const ll MOD = 1e9 + 7 ;
const int infi =  INT_MAX ;
const ll infll =  LLONG_MAX ;
const ld PI = 3.1415926535897932384626 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve (int test_case)
{
	int n , a , b ;
	cin >> n >> a >> b ;
	int left = n % a ;
	string ans = "" ;
	char ch = 'a' ;
	if (b == 1)
	{
		for (int i = 0 ; i < n ; ++i)
		    cout << 'a' ;
		cout << '\n' ; return ;
	}
	if (a == b)
	{
		for (int i = 1 ; i <= b ; ++i)
		{
			ans += ch ;
			++ch ;
		}
	}
	else
	{
		for (int i = 1 ; i <= a-b+1 ;++i)
		    ans += 'a' ;
		for (int i = 1 ; i <= b-1 ; ++i)
		{
			++ch ;
			ans += ch ;
		}
	}
	for (int i = 1 ; i <= n/a ; ++i)
		cout << ans ;
	if(left > 0)
	{
		for (int i = 0 ; i < left ; ++i)
		    cout << ans[i] ;
	}
	cout << '\n' ;
}

int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	
	FAST ;
	int tc = 1 ;
	cin >> tc ;
	while (tc--) 
	    solve (tc) ;
	return 0 ;
}
