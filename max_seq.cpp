
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string supp;
    string work;

    int max_len = 0;
    int current_lent = 0;
    
    getline(cin,supp);
    n = stoi(supp);

    getline(cin,work);

    istringstream iss (work);

    int prev = 0;
    int current;
    for(int i=0; i < n ; i++){
        iss >> current;
        if(current >= prev){
            current_lent++;
            prev = current;
        }
        else{
            if(current_lent > max_len){
                 max_len = current_lent;
             }
            current_lent = 1;
            prev = current;
        }   
    }

    if(current_lent > max_len){
        max_len = current_lent;
    }
    cout << max_len;    
}
