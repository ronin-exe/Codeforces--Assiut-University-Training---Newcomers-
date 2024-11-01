#include <bits/stdc++.h>
int main(){
    int n,m;
    std::cin>>n;
    int arr[n],arr2[n];
    m=n-1;
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
        arr2[m]=arr[i];
        m--;
    }

    for(int j=0;j<n;j++){
        std::cout<<arr2[j]<<" ";
    }
    return 0;
}