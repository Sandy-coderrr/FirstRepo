
// Implementation of countsort 
// count sort is used when there are many duplicates in an array 
// O(n+k) : where n is size of the array and k is the maximum element 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array : "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the aray : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k= *max_element(a,a+n);                 // maximum element found in the array 
    int hm[k+1];                                // hashmap created using the maximum element 
    memset(hm,0,sizeof(hm));
    for(int i=0;i<n;i++){
        hm[a[i]]++;
    }
    
    for(int i=0;i<(k+1);i++){
        while(hm[i]--){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}