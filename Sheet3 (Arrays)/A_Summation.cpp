    #include <bits/stdc++.h>
    int main(){
        long long n,a,x=0;
        std::cin>>n;
        for(long long i=0;i<n;i++){
            std::cin>>a;
            x+=a;
        }
        std::cout<<abs(x);
        return 0;
    }