#include <bits/stdc++.h>
using namespace std;
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
    int left = 0;
    int right = p.size()-1;
    int count =0;
    bool le = false;
    bool ri = false;
    while(true){
        if(p[left]-p[right]>x){
            right--;
        }
        else if(p[right]-p[left]<x){
            left++;
        }
        else{
            count++;
        }
        if(left==right){
            break;

        }
    }

    cout<<count<<endl;
}