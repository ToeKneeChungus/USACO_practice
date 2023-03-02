#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cin>>n>>x;
    vector<pair<int,int> > l;
    for(int i=0;i<n;i++){
        int temp;cin>>temp; l.push_back(make_pair(temp,i));
    }
    sort(l.begin(),l.end());
    int left = 0;
    int right = l.size()-1;
    for(int i=0;i<n;i++){
        if(l[right].first+l[left].first>x){
            right--;
        }
        else if(l[right].first+l[left].first<x){
            left++;
        }
        else if(l[right]==l[left]){
            break;
        }
        else{
            cout<<l[left].second+1<<" "<<l[right].second+1<<endl;
            break;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}