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
#define vb vector <bool>
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

/*// SEIVE OF ERATOSTHENES ::::
	
	int N = 100000000 ;
	vi is_prime (N+1) ;
	Fi(i , 0 , N)
		is_prime[i] = 1 ;
	is_prime[0] = 0 ;
	is_prime[1] = 0 ;
	for (int i = 2 ; i <= sqrt(N) ; i++)
	{
		if (is_prime[i])
		{
			for (int j = 2 ; j*i <= N ; j++)
			{
				is_prime[i*j] = 0 ;
			}
		}
	}*/

void solve (int testcase)
{
	int count1 = 0 , count0 = 0 ;
	string num ;
	cin >> num ;
	int len = num.size() ;
	Fi(i, 0 , len-1)
	{
		if (num[i] == '1')
		    ++count1 ;
		else
		    ++count0 ;
	}
	if (count1 == len)
	{
		Fi(i , 0 , len-2)
		    cout << '1' ;
	}
	else if (count0 == len)
	{
		Fi(i , 0 , len-2)
		    cout << '0' ; 
	}
	else
	{
		Fi(i , 0 , len-1)
		{
			if (num[i]== '0')
			{
				Fi(j , 0 , len-1)
				{
					if (j == i)
					    continue ;
					else
					    cout << num[j] ;
				}
				return ;
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