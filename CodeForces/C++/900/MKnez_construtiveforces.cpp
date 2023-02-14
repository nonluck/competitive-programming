//https://codeforces.com/problemset/problem/1779/B

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int limit=0;
    int num=0;
    cin >> limit;
    vector<int>answer;
    for(int i =0; i< limit; i++){
        cin >> num;
        answer.clear();
        if (num ==3){
            cout << "No\n";
        }else{
            cout << "Yes\n";
            int total=0;
            if(num%2==0){
                for(int i =0; i<num;i++){
                    if (i%2==0){answer.push_back(1);}else{answer.push_back(-1);}}
            }else{
                for(int i =0; i<num;i++){
                    if (i%2==0){
                        answer.push_back(((num/2)-0.5));
                        total+=3;
                    }else{
                        answer.push_back(-((num/2)-0.5+1));
                        total-=2;
                    }}
            }
            int b=0;
        for(int x:answer){
            if(b==answer.size()-1){
                cout << x <<"\n";
            }else{
                cout << x <<" ";
            }
            b+=1;
        }
        
        };
        
}}