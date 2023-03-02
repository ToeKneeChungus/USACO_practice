#include <bits/stdc++.h>
using namespace std;
long long int solve(vector<int>&prediff, long long int K){
    for(long long int i=1;i<prediff.size();i++){
        for(long long int j=0;j<prediff.size()-i;j++){
            long long int s = prediff[j+i]-prediff[j];
            if(s>=K){
                return(i-1);
            }

        }
    }
    return(-1);
}




int main(){
    ifstream fin("maxcross.in");
    ofstream fout("maxcross.out");
    long long int N,K,B;
    fin>>N>>K>>B;
    vector<int>l;
    for(long long int i=0;i<B;i++){
        long long int temp;
        fin>>temp;
        l.push_back(temp);
    }
    vector<int>diff;
    sort(l.begin(),l.end());
    for(long long int i=0;i<l.size()-1;i++){
        diff.push_back(l[i+1]-l[i]);
    }
    vector<int>prediff(1);
    for(long long int i=0;i<diff.size();i++){
        prediff.push_back(prediff[i]+diff[i]);
    }
    for(long long int i=0;i<prediff.size();i++){
        cout<<prediff[i]<<endl;
    }
    fout<<solve(prediff,K);
}