#include <bits/stdc++.h>

void work(std::vector<int> a, int n){
    for(int i=0;i<n;i++){
        a.insert(a.begin(),*(a.end()-1));
        a.pop_back();
    }

    for(int i=0;i<a.size();i++){
        std::cout<<a[i];
        if(i!=a.size()-1){
            std::cout<<" ";
        }
    }
}

int main(){
    int n,x,p;
    std::cin>>n>>x;
    std::vector<int> a;
    for(int i=0;i<n;i++){
        std::cin>>p;
        a.push_back(p);
    }

    work(a,x);
    return 0;
}