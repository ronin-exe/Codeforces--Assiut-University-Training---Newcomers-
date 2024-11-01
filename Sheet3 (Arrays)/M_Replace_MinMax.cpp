#include <bits/stdc++.h>
int main(){
    int n,mx,mn,p1,p2;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        if(i==0){
            mx=arr[0];
            mn=arr[0];
            p1=i;
            p2=i;
        }
        if(arr[i]<mn){
            mn=arr[i];
            p1=i;
        }
        if(arr[i]>mx){
            mx=arr[i];
            p2=i;
        }
    }

    arr[p1]=mx;
    arr[p2]=mn;

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }

    
    return 0;
}