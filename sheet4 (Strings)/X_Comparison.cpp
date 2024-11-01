#include <bits/stdc++.h>
using namespace std;



int main() {
    string s;
    cin >> s;

  string smallest = s , first_half , second_half;
    int n = s.size();

    for (int i = 1; i < n; ++i) {
        first_half = s.substr(0, i);
        second_half = s.substr(i, n - i);

       

        sort(first_half.begin(), first_half.end());
        sort(second_half.begin(), second_half.end());

       
        string sorted_string = first_half + second_half;

       
        smallest = min(smallest, sorted_string);
    }


    cout << smallest << endl;

    return 0;
}
