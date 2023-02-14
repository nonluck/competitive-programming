//https://codeforces.com/problemset/problem/231/A

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k;
    int n;
    int m;
    vector <int> veeector;
    int total = 0;
    cin >> k >> n;
    for (int i = 0; i < k; i++){
        cin >> m;
        //(m>n)?total+=1:total+=0;
        veeector.push_back(m);
    }
    for (int x : veeector)
        if (x >= veeector[n-1] && x!=0){
            total+=1;
        };
    cout << total<<"\n";
}