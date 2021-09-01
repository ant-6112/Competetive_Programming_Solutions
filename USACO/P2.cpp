#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    int D[N];
    for(int i = 0;i<N;++i)
    {
        cin>>D[i];
    }

    int p = 0;
    for(int j = 0;j<N;++j)
    {
        for(int k = 0;k<N;++k)
        {
            if(D[k] == D[j]){
                continue;
            }else if(abs(D[k] - D[j]) > K){
                p++;
            }
        }
    }
    cout<<p;
}