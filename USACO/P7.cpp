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
    string b;
    cin>>b;
    vector<char> permutation;
    vector<string> collect;

    FOR(i,0,b.size())
    {
        permutation.push_back(b[i]);
    }

    sort(permutation.begin(),permutation.end());

    do{
        string t = "";
        FOR(i,0,b.size()){
            t+=permutation[i];
        }
        collect.push_back(t);
    }while(next_permutation(permutation.begin(),permutation.end()));

    cout<<collect.size()<<endl;

    FOR(i,0,collect.size()){
        cout<<collect[i]<<endl;
    }
}
