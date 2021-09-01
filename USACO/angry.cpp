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
    //setIO("angry");
    int N;
    cin>>N;
    vector<int> P;
    FOR(i,0,N){
        int K;
        cin>>K;
        P.push_back(K);
    }
	
    sort(P.begin(),P.end());

    int maxans = 0;

    FOR(i,0,N){
        int t = 1;

        vector<int> Blasted = {};
        vector<int> Current = {P[i]};

        while(true){

            vector<int> Temp = {};
            vector<int> Positions = {};

            for(int q = 0;q<P.size();q++){
        
                int Bl = 0;
                for(int wi = 0;wi<Blasted.size();wi++)
                {
                    if(Blasted[wi] != P[q]){
                        continue;
                    }else{
                        int Bl = 1;
                        break;
                    }

                }
                
                if(Bl = 0){
                    Temp.push_back(P[q]);
                }
            }

            sort(Temp.begin(),Temp.end());

            vector<int> Current2 = {};

            for(int l = 0;l<Current.size();l++){
                vector<int>::iterator it = find(Temp.begin(),Temp.end(),Current[l]);

                for(vector<int>::iterator w = it;w>Temp.begin();w--){
                    if(abs(*(w-1) - *it) == t){
                        Current2.push_back(*(w-1));
                    }
                }

                for(vector<int>::iterator w = it;w<Temp.end()-1;w++){
                    if(abs(*(w+1) - *it) == t){
                        Current2.push_back(*(w+1));
                    }
                }
            }

            if(Current2.empty()){
                break;
            }

            Blasted.insert(Blasted.end(),Current.begin(),Current.end());

            Current = Current2;

            t+=1;
        }

        maxans = max((int)Blasted.size(),maxans);
    }
    
    cout<<maxans;
}

