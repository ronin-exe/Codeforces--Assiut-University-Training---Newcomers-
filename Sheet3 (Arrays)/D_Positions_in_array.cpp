#include <bits/stdc++.h>
int main(){
    int n,x,y,t;
    std::cin>>n;
    int arr[n], p[n], d[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

    x=0;
    t=0;

    for(int j=0;j<n;j++){
        if(arr[j]<=10){
            p[x]=j;
            d[x]=arr[j];
            x++;
            t++;
        }
       
    }

    for(int k=0;k<t;k++){
        std::cout<<"A["<<p[k]<<"] = "<<d[k]<<'\n';
    }
    return 0;
}