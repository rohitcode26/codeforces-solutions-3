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
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp
 
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
 
# define Fi(i,L,R) for (int i = L ; i <= R ; i++)
# define Fd(i,R,L) for (int i = R ; i >= L ; i--)
# define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
const ld PI = 3.1415926535897932384626 ;
const ll MOD = 1e9 + 7 ;
 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

vi v ;
ll n , t , ans = 0 ;

bool check (ll mid)
{
	ll sum = 0 ;
	Fi(i , 0 , mid-1)
		sum += v[i] ;
	
	if (sum <= t)
	    return true ;
	
	Fi(i , mid , n-1)
	{
		sum += v[i] ;
		sum -= v[i-mid] ;   // sliding-window... right element enter window. left element leaves window.
	    
		if (sum <= t)
	        return true ; 
	}
	
	
	return false ;
	    
}

void solve ()
{
	cin >> n >> t ;
	v.resize(n) ;
	Fi(i , 0 , n-1)
	    cin >> v[i] ;
	
	// i will go for binary search to find the maximum length array with sum atmost = t ;
	
	ll lo = 0 , hi = n ;
	
	while(lo <= hi)
	{
		ll mid = (lo + hi)/2 ;
		if (check(mid))    //  it means that sub-array with length atleast equal to value of mid exists that matches our condition
		{
			ans = max(ans , mid) ;
			lo = mid + 1 ;    // now will check if sub-array with greater length exists or not
		}
		else
		{
			hi = mid - 1 ;   // if it doesnt exist then we will check for intermediate valude of prev lo and new hi . in short : binary search 
		}
	}
	
	cout << ans ;
	
}
 
int main()
{
	//freopen ("input.txt","r",stdin) ;
	//freopen ("output.txt","w",stdout) ;
	fast ;
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve () ;
	return 0 ;
}
