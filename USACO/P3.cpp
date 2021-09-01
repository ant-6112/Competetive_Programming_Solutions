#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int P[N];
    for(int i = 0;i<N;++i){
        cin>>P[i];
    }

    int ans = 0;

    for(int i = 0;i<N;++i)
    {
        for(int j = 0;j<N;++j)
        {
            float avg = 0;
            for(int u = i;u<=j;++u)
            {
                avg+=P[u];
            }
            avg /= (j-i+1);

            for(int u = i;u<=j;++u)
            {
                if((float)P[u] == avg){
                    ans++;
                    break;
                }
            }
        }
    }

    cout<<ans;
}