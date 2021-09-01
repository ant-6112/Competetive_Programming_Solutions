#include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef long long			  ll;
typedef long double			ld;
typedef pair<int, int>		 pi;
typedef vector<int>			vi;
typedef vector<long long>	  vll;
typedef vector<pair<int, int>> vpi;

#define pb			push_back
#define pf			push_front
#define all(x)		begin(x), end(x)
#define sz(x)		 (int)(x).size()
#define ff			first
#define ss			second
#define mp			make_pair
#define lb			lower_bound
#define ub			upper_bound
#define TCase()	   int tcc; cin >> tcc; while(tcc--)
#define FOR(i, a, b)  for(int i = (a); i < (b); i++)
#define F0R(i, a)	 FOR(i, 0, a)

const ll  MOD   = 1e9 + 7;
const ll  INF   = 9e18;
const int MX	= 2e5 + 5;
const ld  PI	= acos((ld) -1);
const int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
const int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

void setIO(string name = ""){
	ios_base::sync_with_stdio(0); cin.tie(0);
	if(sz(name)){
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}

/*------------------------------------------------------------------------------------------------------------------*/

int main()
{
    setIO("cowqueue");
    int N;
    cin>>N;

    int ans = 0;

    vector<pair<int,int>> Time;

    FOR(i,0,N){
        int a,b;
        cin>>a>>b;
        pair<int,int> A;
        A.first = a;
        A.second = b;
        Time.push_back(A);
    }

    sort(Time.begin(),Time.end());

    ans+=Time[0].first;
    ans+=Time[0].second;


    FOR(j,1,N){
        if(Time[j].first < ans){
            ans+=Time[j].second;
        }else{
            ans = Time[j].first;
            ans+= Time[j].second;
        }
    }

    cout<<ans;	
}