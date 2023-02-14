#include<iostream>
#include <string>
using namespace std;
int main(){
    int total = 0;
    int limit = 0;
    cin >> limit;
    string answer;
    unsigned Petya;
    unsigned Vasya;
    unsigned Tonya;
    for (unsigned i = 0; i < limit; i++){

        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2){
            total += 1;
        }
    };
        /*
        cin >> answer;
        if (stoi(answer.substr(0,1)) + stoi(answer.substr(2,1)) + stoi(answer.substr(4,1)) >= 2){
            total += 1;
        }
        */
    cout << total << "\n";
    return 0;
}