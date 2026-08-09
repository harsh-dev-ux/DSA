#include<bits/stdc++.h>
using namespace std;

int main(){

    // pair stores two values together
    pair<int,int> p = {10,20};

    cout << p.first << endl;
    cout << p.second << endl;

    // make_pair
    pair<int,string> p2 = make_pair(1,"Harsh");

    cout << p2.first << " " << p2.second << endl;

    // change values
    p.first = 30;
    p.second = 40;

    cout << p.first << " " << p.second << endl;

    // pair of different types
    pair<string,int> p3 = {"abc",100};

    cout << p3.first << " " << p3.second << endl;

    // swap
    pair<int,int> a = {1,2};
    pair<int,int> b = {3,4};

    a.swap(b);

    cout << a.first << " " << a.second << endl;
    cout << b.first << " " << b.second << endl;

    return 0;
}
