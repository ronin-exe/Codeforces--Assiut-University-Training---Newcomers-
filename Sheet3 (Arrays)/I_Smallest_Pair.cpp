#include <bits/stdc++.h>
int main(){
    int n,a,t,x,s;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>a;
        int arr[a];
        for(int j=0;j<a;j++){
            std::cin>>arr[j];
        }
            s=1;
        for(int j=0;j<a;j++){
            for(int k=j+1;k<a;k++){
                if(s==1){
                    t=(arr[j]+arr[k])+(k+1)-(j+1);
                    s++;
                }
                else{
                    x=(arr[j]+arr[k])+(k+1)-(j+1);
                    if(x<t){
                        t=x;
                    }
                }
            }
        }
        std::cout<<t;
    }
    return 0;
}