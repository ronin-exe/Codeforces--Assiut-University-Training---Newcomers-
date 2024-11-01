    #include <bits/stdc++.h>
    int main(){
        long long a,i,p,q,x;
        std::cin>>a;
        p=0;
        q=1;
        if(a==1){
            std::cout<<p;
        }
        if(a==2){
            std::cout<<q;
        }
        if(a>2){
             for(i=3;i<=a;i++){
            x=p+q;
            if(i==a){
                std::cout<<x;
            }
            p=q;
            q=x;
        }
        }
        return 0;
    }