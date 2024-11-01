    #include <bits/stdc++.h>
    int main(){
        long long a,b,c,d,m,f,s;
        std::cin>>a>>b>>c>>d;
        a=a%100;
        b=b%100;
        c=c%100;
        d=d%100;
        m=(a*b*c*d)%100;
        if(m<10){
            std::cout<<0<<m<<'\n';
        }
        else{
            std::cout<<m<<'\n';
        }
        
    }