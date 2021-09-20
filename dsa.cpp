#include <bits/stdc++.h>
#define MOD 1000000007
#define ff first
#define ss second
#define pb push_back
#define ll long long
#define N 100005
#define ccin cin >>
#define ccout cout <<
 
using namespace std;
 
int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll a[200] = {0};
	for(int i = 200; i <= 300; i++){
		for(int j = 2; j <= 150; j++){
			if(i % j == 0){
				a[i - 200] += j;
			}
		}
	}
	for (int i = 0; i < 200; ++i){
		ccout a[i] << endl;
	}
}	