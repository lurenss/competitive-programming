
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int count = 0;
    string supp;
    
    getline(cin,supp);
    n = stoi(supp);

    vector <string> s (n);

    for(int i = 0; i<n; i++){
        getline(cin,supp);
        s[i] = supp;
    }

    for(int i = 0; i<n; i++){
        if(s[i].at(0)-'0'  + s[i].at(2)-'0' + s[i].at(4)-'0' > 1){
            count++;
        }
    }

     cout << count;
}



