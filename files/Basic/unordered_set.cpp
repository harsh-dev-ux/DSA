#include<bits/stdc++.h>
using namespace std;

int main(){

    // unordered_set = unique + no sorted order
    unordered_set<int> us;

    us.insert(5);
    us.emplace(2);
    us.insert(8);
    us.insert(5);       // duplicate ignored

    // order is not fixed
    for(auto i : us)
        cout << i << " ";
    cout << endl;

    // find
    auto it = us.find(8);

    if(it != us.end())
        cout << "8 found" << endl;

    // count -> 0 or 1
    cout << "count = " << us.count(5) << endl;

    // erase
    us.erase(5);

    cout << "size = " << us.size() << endl;
    cout << "empty = " << us.empty() << endl;

    // lower_bound / upper_bound do NOT work here

    return 0;
}
