    #include <bits/stdc++.h>
    int main(){
        int n,x,t=1;
        std::cin>>n;
        int a[n] ;
        for(int i=0;i<n;i++){
            std::cin>>a[i];
        }
     
        std::cin>>x;
     
        for(int j=0;j<n;j++){
            if(a[j]==x){
                std::cout<<j;
                t=2;
                break;
            }
        }
     
        if(t==1){
            std::cout<<-1;
        }
    }