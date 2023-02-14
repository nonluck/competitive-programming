//https://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <string>
using namespace std;


int main(){
    int size;
    std::cin >> size;
    string str;
    for(int i = 0; i < size; i++){
        cin >> str;
        string new_string = str.substr(0, 1) + to_string(str.length()-2)+str.substr(str.length()-1, 1);
        if (str.length() > 10){
            cout << new_string << "\n";
        }else{
            cout << str << "\n";
        }
    }

}
