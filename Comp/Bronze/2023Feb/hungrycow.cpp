#include <bits/stdc++.h>
using namespace std;
int  main(){
    long long int  N,T;
    cin>>N>>T;
    vector<pair<long long int ,long long int > >l;
    long long int  c=0;
    long long int  ans = 0;
    l.push_back(make_pair(1,0));
    for(long long int  i=0;i<N;i++){
        long long int  a,b;
        cin>>a>>b;
        l.push_back(make_pair(a,b));
    }
    l.push_back(make_pair(T,0));
    for(long long int  i=1;i<=N+1;i++){
        long long int  d = l[i].first-l[i-1].first;
        if(d>c){
            ans+=c;
            c=0;
        }
        else{
            ans+=d;
            c-=d;
        }
        c+=l[i].second;
        
    }
    if(c>0){
        ans++;
    }
    cout<<ans<<endl;
}