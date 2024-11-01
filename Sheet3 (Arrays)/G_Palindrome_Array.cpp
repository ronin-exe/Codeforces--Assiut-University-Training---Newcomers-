#include <bits/stdc++.h>
int main(){
    int n,m,t=1;
    std::cin>>n;
    int arr[n],arr2[n];
    m=n-1;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        arr2[m]=arr[i];
        m--;
    }

    for(int j=0;j<n/2;j++){
        if(arr[j]!=arr2[j]){
            std::cout<<"NO"<<'\n';
            t=2;
            break;
        }
    }

    if(t==1){
        std::cout<<"YES"<<'\n';
    }
    return 0;
}