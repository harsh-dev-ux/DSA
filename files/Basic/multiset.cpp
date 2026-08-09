#include<bits/stdc++.h>
using namespace std;

int main(){

    // multiset = sorted + duplicates allowed
    multiset<int> ms = {1,2,2,3,3,3};

    ms.insert(4);
    ms.emplace(5);

    for(auto i : ms)
        cout << i << " ";
    cout << endl;

    // count = number of occurrences
    cout << "count of 3 = " << ms.count(3) << endl;

    // erase(value) removes ALL occurrences of value
    ms.erase(3);

    // erase only one occurrence
    auto it = ms.find(2);
    if(it != ms.end())
        ms.erase(it);

    // lower_bound / upper_bound work
    it = ms.lower_bound(2);
    if(it != ms.end())
        cout << "lower_bound = " << *it << endl;

    it = ms.upper_bound(2);
    if(it != ms.end())
        cout << "upper_bound = " << *it << endl;

    cout << "size = " << ms.size() << endl;
    cout << "empty = " << ms.empty() << endl;

    return 0;
}
