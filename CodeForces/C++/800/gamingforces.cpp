//https://codeforces.com/problemset/problem/1792/A
#include <iostream>
#include <vector>
using namespace std;

bool empty(vector<unsigned>lista){
    for(unsigned p:lista){
        if(p!=0){
            return true;
        }
    }
    return false;
}
bool check(vector<unsigned> lista){
    int flag=0;
    for(unsigned p:lista){
        if(p==1){
            flag+=1;
        }
    }
    if (flag>=2){
        return true;
    }else{
        return false;
    };
};
int main(){
    unsigned testcase;
    unsigned monsters;

    cin >> testcase;
    for(int i=0; i<testcase ;i++){

    cin >> monsters;
    vector<unsigned> monsterhealth;
    for(int j=0;j<monsters ;j++){
        unsigned aux;
        cin >> aux;
        monsterhealth.push_back(aux);
    }
    int total=0;
    while(empty(monsterhealth)){
        total+=1;
        if(!check(monsterhealth)){
            for(int i=0; i < monsterhealth.size(); i++){
                if(monsterhealth.at(i)!=0){
                    monsterhealth.at(i)=0;
                    break;
                }
            }
        }else{
            int flag=2;
            for(int i=0; i < monsterhealth.size(); i++){
                if (flag==0){
                    break;
                }
                if(monsterhealth.at(i)==1){
                    monsterhealth.at(i)=0;
                    flag-=1;
                }
            }
        }
    }
    cout << total <<"\n";
    
    }
};