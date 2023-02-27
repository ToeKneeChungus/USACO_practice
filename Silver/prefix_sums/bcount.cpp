#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream fin("bcount.in");
    ofstream fout("bcount.out");
    int n,q; fin>>n>>q;
    vector<int>p1(1);
    vector<int>p2(1);
    vector<int>p3(1);
    for(int i=0;i<n;i++){
        int t; fin>>t;
        if(t==1){
            p1.push_back(p1[i]+1);
            p2.push_back(p2[i]);
            p3.push_back(p3[i]);
        }
        else if (t==2){
            p1.push_back(p1[i]);
            p2.push_back(p2[i]+1);
            p3.push_back(p3[i]);
        }
        else{
            p1.push_back(p1[i]);
            p2.push_back(p2[i]);
            p3.push_back(p3[i]+1);
        }
    }

    for(int i=0;i<q;i++){
        int start, end;
        fin>>start>>end;
        fout<<p1[end]-p1[start-1]<<" "<<p2[end]-p2[start-1]<<" "<<p3[end]-p3[start-1]<<endl;
    }


}