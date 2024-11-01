#include <bits/stdc++.h>
int main(){
    unsigned long long a,b,t,s,x,i,j,k,arr[999];
    std::cin>>a;
    for(i=1;i<=a;i++){
        std::cin>>b;
        t=b;
        s=0;
        if(b==0){
            std::cout<<0<<'\n';
        }
        for(j=0;t!=0;j++){
            x=t%10;
            arr[j]=x;
            t=t/10;
            s++;
        }
        
        for(k=0;k<s;k++){
            std::cout<<arr[k];
            if(k!=(s-1)){
                std::cout<<" ";
            }
            else{
                std::cout<<'\n';
            }
        }

        }

        

    return 0;
}