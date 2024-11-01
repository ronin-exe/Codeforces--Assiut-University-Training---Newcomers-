#include<bits/stdc++.h>


int main()
{

std::string s;
getline(std::cin,s);

int n = s.size();
    
int i = 0, j = 0;
    
while(j  < n){
    if(s[j] == ' ' || j == n-1){
    reverse(s.begin()+i, s.begin()+j+(j==n-1?1:0));
        j++;
        i = j;
    }
    else{
        j++;
    }
}

std::cout << s;

return 0;

}