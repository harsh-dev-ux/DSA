#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l = {1,2,3,4};

    // add at front
    l.push_front(0);
    l.emplace_front(-1);

    // first element
    cout << l.front() << endl;

    // add at back
    l.push_back(5);
    l.emplace_back(6);

    // remove first / last
    l.pop_front();
    l.pop_back();

    // print
    for(auto i : l)
        cout << i << " ";
    cout << endl;

    // insert
    auto it = l.begin();
    advance(it, 2);
    l.insert(it, 100);

    // erase
    it = l.begin();
    advance(it, 2);
    l.erase(it);

    cout << "size = " << l.size() << endl;
    cout << "empty = " << l.empty() << endl;

    return 0;
}
