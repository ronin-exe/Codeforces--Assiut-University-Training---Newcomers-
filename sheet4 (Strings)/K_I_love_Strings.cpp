#include <bits/stdc++.h>
int main(){
    std::string s,t;
    int n,a,b;
    std::cin>>n;
    for(int i=0;i<n;i++){
        std::cin>>s>>t;
        a=s.size();
        b=t.size();
        for(int j=0;j<std::max(a,b);j++){
            if(j < s.size()) std::cout << s[j];
            if(j < t.size()) std::cout << t[j];
        }
        std::cout<<'\n';
    }
    return 0;

}