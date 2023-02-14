//https://codeforces.com/problemset/problem/4/A
#include<iostream>
int main(){
/*
#ifdef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
*/
    int num;
    std::cin >> num;
    if (num%2==0 && num != 2 )
    {
        std::cout << "YES" << "\n";
    }
    else
    {
        std::cout << "NO" << "\n";
    }
    return 0;
}