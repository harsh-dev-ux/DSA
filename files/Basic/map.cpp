#include<bits/stdc++.h>
using namespace std;

int main(){

    // map = unique keys + sorted by key
    map<int,string> mp;

    mp[1] = "one";
    mp[2] = "two";

    mp.insert({3,"three"});
    mp.emplace(4,"four");

    // access
    cout << mp[2] << endl;

    // find
    auto it = mp.find(3);

    if(it != mp.end())
        cout << it->first << " " << it->second << endl;

    // print key and value
    for(auto i : mp)
        cout << i.first << " " << i.second << endl;

    // lower_bound = first key >= x
    it = mp.lower_bound(2);
    if(it != mp.end())
        cout << "lower_bound = " << it->first << endl;

    // upper_bound = first key > x
    it = mp.upper_bound(2);
    if(it != mp.end())
        cout << "upper_bound = " << it->first << endl;

    cout << "size = " << mp.size() << endl;
    cout << "empty = " << mp.empty() << endl;

    // erase
    mp.erase(3);

    return 0;
}
