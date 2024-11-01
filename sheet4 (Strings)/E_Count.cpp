#include <bits/stdc++.h>
int main(){
    std::string a;
    std::cin>>a;
    int l,s=0;;
    l=a.length();
    for(int i=0;i<l;i++){
        s+=(a[i]-'0');
    }
    std::cout<<s;
    return 0;
}