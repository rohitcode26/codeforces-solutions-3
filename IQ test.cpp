#include<bits/stdc++.h>

using namespace std ;

#define F first
#define S second
#define R return
#define C continue 
#define pb push_back 
#define pf push_front
#define mod1 1000000007

#define vi vector <int>
#define vl vector <long>
#define vll vector <long long>
#define vii vector <vector <int> >
#define vs vector <string>
#define vpii vector <pair <int , int> >
#define vpll vector <pair <long , long> >
#define Fi(i,L,R) for (int i = L; i <= R; i++)
#define Fd(i,R,L) for (int i = R; i >= L; i--)
#define fast ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;

void swap_int(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int solve (int testcase)
{
	int n , even = 0 , odd = 0 ;
	cin >> n ;
	vi v (n+1) ;
	Fi(i, 1 , n)
		cin >> v[i] ;
	Fi(i , 1 , 3)
	{
		if(v[i] % 2 == 0)
		   even++ ;
		else
		   odd++ ;
	}
	if (even > odd)
	{
		Fi(i , 1 , n)
		{
			if (v[i] % 2 == 1)
			{
				cout << i ;
				return 0 ;
			}
		}
    }
		else
		{
			Fi(i , 1 , n)
			{
				if (v[i] % 2 == 0)
				{
					cout << i ;
					return 0 ;
				}
			}
		}
}

int main()
{
	fast 
	int t = 1 ;
//	cin>>t ;
	while (t--) 
	  solve (1) ;
	return 0 ;
}
