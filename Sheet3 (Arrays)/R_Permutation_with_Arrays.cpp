#include <bits/stdc++.h>
int deleteElement(int arr[], int n, int x, int i) 
{ 
        n = n - 1; 
        for (int j = i; j < n; j++) 
            arr[j] = arr[j + 1]; 
    return n; 
} 

int main(){
    int n,t=0;
    std::cin>>n;
    int m=n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++){
        std::cin>>b[i];
    }
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                x++;
                deleteElement(b,m,b[j],j);
                break;
            }
        }
        if(x==0){
            std::cout<<"no"<<'\n';
            t++;
            break;
        }
    }
    if(t==0){
        std::cout<<"yes"<<'\n';
    }
    return 0;
}