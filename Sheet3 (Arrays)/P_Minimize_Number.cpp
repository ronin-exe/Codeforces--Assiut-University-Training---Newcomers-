#include <bits/stdc++.h>
int main(){
    int n,t=1,s=0;
    std::cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        std::cin>>arr[j];
    }
    for(;t!=2;){
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                t++;
                break;
            }
            if(arr[i]%2==0){
                arr[i]=arr[i]/2;
            }
            else{
                t++;
                break;
            }
        }
        if(t==1){
            s++;
        }
    }
    std::cout<<s;
}