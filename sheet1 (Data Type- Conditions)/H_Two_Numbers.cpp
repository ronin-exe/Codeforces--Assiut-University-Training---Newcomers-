    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        long long a,b; //
        cin>>a>>b;
        
        cout<<"floor "<<a<< " / "<<b<<" = "<<floor(a/(double)b)<<'\n';
        cout<<"ceil "<<a<< " / "<<b<<" = "<<ceil(a/(double)b)<<'\n';
        cout<<"round "<<a<< " / "<<b<<" = "<<round(a/(double)b)<<'\n';
        return 0;
     
    }