
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string supp;
    
    getline(cin,supp);
    n = stoi(supp);

    vector <string> s (n);

    for(int i = 0; i<n; i++){
        getline(cin,supp);
        s[i] = supp;
    }

    for(int i = 0; i<n; i++){
        if(s[i].length() > 10)
            cout << s[i].at(0) << s[i].length()-2 << s[i].back() << "\n";
        else
            cout << s[i] << "\n";
    }

     
}



