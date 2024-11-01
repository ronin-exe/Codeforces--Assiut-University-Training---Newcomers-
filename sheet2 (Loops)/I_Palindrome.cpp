#include<bits/stdc++.h>
int main(){
    long long a,n,m,o,p,i,j,k,q,x,arr[99999],arr2[99999];
    int g=1;
    std::cin>>a;
    n=0;
    for(i=0;a>0;i++){
        x=a%10;
        a=a/10;
        arr[i]=x;
        n++;
    }

    m=n;
    o=n-1;
    p=n-1;

    for(j=0;j<n;j++){
        arr2[j]=arr[p];
        p--;
    }

    for(k=0;k<m/2;k++){
        int y=0;
        if(arr[k]!=arr[o]){
            for(q=0;q<n;q++){
                if(arr[q]==0 && y==0){
                    
                }
                else{
                    std::cout<<arr[q];
                    y++;
                }
            }
            std::cout<<'\n';
            std::cout<<"NO"<<'\n';
            g=2;
            break;
        }
        o--;
    }

    if(g==1){
        int y=0;
        for(q=0;q<n;q++){
                if(arr[q]==0 && y==0){
                    
                }
                else{
                    std::cout<<arr[q];
                    y++;
                }
            }
            std::cout<<'\n';
        std::cout<<"YES"<<'\n';
    }
    return 0;
}