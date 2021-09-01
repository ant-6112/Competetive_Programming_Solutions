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

void setIO(string name = "") {
	ios_base::sync_with_stdio(0); cin.tie(0);
	if(sz(name)){
		freopen((name+".in").c_str(), "r", stdin);
		freopen((name+".out").c_str(), "w", stdout);
	}
}

float Slope(int x1,int y1,int x2,int y2)
{
    return ((y2-y1)/(x2-x1));
}

int main()
{
    setIO();
    int N;
    cin>>N;
    int P[N][2];
    FOR(i,0,N) cin>>P[i][0]>>P[i][1];

    int max = 0;
    int t = 0;
    FOR(i,0,N)
    {
        FOR(j,0,N)
        {
            if(j == i) continue;
            if(P[i][0] - P[j][0] == 0){
                t = 0;
            }else if(Slope(P[i][0],P[i][1],P[j][0],P[j][1]) == 0.00){
                t = 1;
            }else{
                t = 2;
            }

            FOR(k,0,N)
            {
                int Area = 0;
                if(j == k || i == k) continue;
                if(t == 0){
                    if((Slope(P[i][0],P[i][1],P[k][0],P[k][1]) == 0.00) || (Slope(P[i][0],P[i][1],P[k][0],P[k][1]) == 0.00)){
                        Area = (1/2)()
                    }
                }
                if((P[i][0] - P[k][0] == 0) || (P[j][0] - P[k][0] == 0) || (Slope(P[i][0],P[i][1],P[k][0],P[k][1]) == 0) || (Slope(P[i][0],P[i][1],P[k][0],P[k][1]) == 0)){
                    
                }

            }
        }
    }

}

