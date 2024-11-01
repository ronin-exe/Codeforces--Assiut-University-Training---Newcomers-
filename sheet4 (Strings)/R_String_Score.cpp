#include <bits/stdc++.h>
int main(){
    int n,s=0;
    std::cin>>n;
    std::string a;
    std::cin>>a;
    for(int i=0;i<n;i++){
        if(a[i]=='V'){
            s+=5;
        }
        else if(a[i]=='W'){
            s+=2;
        }
        else if(a[i]=='X'){
            i++;
        }
        else if(a[i]=='Y' && i!=n-1){
            a.push_back(a[i+1]);
            i++;
        }
        else if(a[i]=='Z' && i!=n-1){
            if(a[i+1]=='V'){
                s/=5;
                i++;
            }
            else if(a[i+1]=='W'){
                s/=2;
                i++;
            }
        }
    }
    std::cout<<s;
}