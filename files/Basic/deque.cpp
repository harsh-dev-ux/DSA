#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> d = {2,3,4};

    // add
    d.push_front(1);
    d.push_back(5);

    // remove
    d.pop_front();
    d.pop_back();

    // access
    cout << d[1] << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;

    // insert / erase
    d.insert(d.begin()+1, 100);
    d.erase(d.begin()+1);

    cout << "size = " << d.size() << endl;
    cout << "empty = " << d.empty() << endl;

    for(auto i : d)
        cout << i << " ";

    return 0;
}
