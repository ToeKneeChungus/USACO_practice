#include <bits/stdc++.h>
using namespace std;
int diff(vector<int>&p,int a,int b){
    return(p[b]-p[a-1]);
}


int main(){
    int n,x;
    cin>>n>>x;
    vector<int>l;
    vector<int>p(1);
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        l.push_back(t);
        p.push_back(p[i]+t);
    }
    vector<int>ans(1);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(diff(p,i,j)>x){
                break;
            }
            else{
                ans.push_back(j-i+1);
            }
        }
    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;
}