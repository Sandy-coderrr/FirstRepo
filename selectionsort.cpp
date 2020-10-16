//implementation of selection sort 
// O(n*n) approach 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int m=i;
        for(int j=(i+1);j<n;j++){
            if(a[j]<a[m]){
                m=j;
            }
        }
        swap(a[m],a[i]);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
