// recursive method to find all lucky numbers  less than 100000
// lucky numbers are those numbers whose decimal representation consists of only 4 and 7 

#include<bits/stdc++.h>
#define MAX 100000
#define ll long long int 
using namespace std;
vector<ll> v;

void create(ll n){
        if(n>= MAX){
            return;
        }
        if(n!=0){
            v.push_back(n);
        }
        create(n*10+4);
        create(n*10+7);
}
int main(){
    create(0);
    sort(v.begin(),v.end());
    for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}