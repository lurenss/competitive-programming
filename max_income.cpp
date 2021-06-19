#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int temp;
    string supp;
    string supp1;
    vector <int> vect_supp (2);
    

    getline(cin,supp);
    n = stoi(supp);
    vector<pair<int,int>> comp_a (n);

    for(int i=0; i<n ; i++){
        getline(cin,supp1);
        istringstream iss (supp1);
        
        for (int j = 0; i < 2; j++){
            iss >> temp;
            vect_supp[i] = temp;
        }
        comp_a.push_back(make_pair(vect_supp[0],vect_supp[1]));       
    }

    for(int i=0; i<n ; i++){
        cout << comp_a[i].first << comp_a[i].second;
    }
}

    