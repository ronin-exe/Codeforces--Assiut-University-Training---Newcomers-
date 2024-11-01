#include <bits/stdc++.h>
int main(){
    std::string A,B;
    char x;
    std::cin>>A>>B;
    std::cout<<A.size()<<" "<<B.size()<<'\n';
    std::cout<<A + B<<'\n';
    x=A[0]; A[0]=B[0]; B[0]=x;
    std::cout<<A<<" "<<B;
    return 0;

}