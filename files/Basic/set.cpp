#include<bits/stdc++.h>
using namespace std;

int main(){

    // set = unique + sorted
    set<int> s = {4,1,3,2,2};

    // insert / emplace
    s.insert(5);
    s.emplace(6);

    // print in sorted order
    for(auto i : s)
        cout << i << " ";
    cout << endl;

    // find
    auto it = s.find(3);

    if(it != s.end())
        cout << "3 found" << endl;

    // count -> 0 or 1 in set
    cout << "count = " << s.count(3) << endl;

    // erase by value
    s.erase(3);

    // erase by iterator
    it = s.find(4);
    if(it != s.end())
        s.erase(it);

    // lower_bound = first element >= x
    it = s.lower_bound(4);
    if(it != s.end())
        cout << "lower_bound = " << *it << endl;

    // upper_bound = first element > x
    it = s.upper_bound(4);
    if(it != s.end())
        cout << "upper_bound = " << *it << endl;

    cout << "size = " << s.size() << endl;
    cout << "empty = " << s.empty() << endl;

    return 0;
}
