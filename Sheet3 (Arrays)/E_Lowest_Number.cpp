#include <bits/stdc++.h>
int main(){
    int n,m,p;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        if(i==0){
            m=arr[0];
            p=1;
        }
        else if(arr[i]<m){
            m=arr[i];
            p=i+1;
        }
    }

    std::cout<<m<<" "<<p;
    return 0;
}