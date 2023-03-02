#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>&prediff, int B,int K){
    for(int i=0;i<B;i++){
        for(int j=0;j<B-i-1;j++){
            int d = prediff[j+i]-prediff[j-1];
            if(d>=K){
                return(i);
            }
        }
    }
    return(B);
}

int main(){
    ifstream fin("maxcross.in");
    ofstream fout("maxcross.out");
    int N,K,B;fin>>N>>K>>B;
    vector<int>l;
    for(int i=0;i<B;i++){
        int t;fin>>t;
        l.push_back(t);
    }
    sort(l.begin(),l.end());
    vector<int>diff;
    vector<int>prediff(1);
    for(int i=0;i<l.size()-1;i++){
            diff.push_back(l[i+1]-l[i]);
        }
    for(int i=0;i<diff.size();i++){
        prediff.push_back(prediff[i]+diff[i]);
    }
    fout<<solve(prediff,B,K)<<endl;
    }
