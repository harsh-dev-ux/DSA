#include<bits/stdc++.h>
using namespace std;

int main(){

    // multimap = sorted + duplicate keys allowed
    multimap<int,string> mp;

    mp.insert({1,"A"});
    mp.insert({1,"B"});
    mp.emplace(2,"C");

    for(auto i : mp)
        cout << i.first << " " << i.second << endl;

    // find
    auto it = mp.find(1);

    if(it != mp.end())
        cout << it->first << " " << it->second << endl;

    // count = number of elements with this key
    cout << "count = " << mp.count(1) << endl;

    // equal_range = all elements with the same key
    auto range = mp.equal_range(1);

    for(auto i = range.first; i != range.second; i++)
        cout << i->first << " " << i->second << endl;

    // erase by key removes all pairs with that key
    mp.erase(1);

    cout << "size = " << mp.size() << endl;

    // mp[key] does NOT work in multimap

    return 0;
}
