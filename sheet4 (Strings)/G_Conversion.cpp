#include <bits/stdc++.h>
int main(){
    std::string a;
    getline(std::cin,a);
    int n=a.size();
    for(int i=0;i<n;i++){
        if(65<=(int)a[i] && (int)a[i]<=90){
            a[i]=tolower(a[i]);
        }
        else if(97<=(int)a[i] && (int)a[i]<=122){
            a[i]=toupper(a[i]);
        }
        else if(a[i]==','){
            a[i]=' ';
        }
    }
    std::cout<<a;
    return 0;

}