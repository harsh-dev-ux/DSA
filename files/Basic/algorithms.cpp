#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){

    vector<int> v = {3,1,5,2,4,2};

    // sort
    sort(v.begin(), v.end());
    cout << "sort : ";
    for(auto i : v) cout << i << " ";
    cout << endl;

    // comparator
    sort(v.begin(), v.end(), cmp);
    cout << "comparator : ";
    for(auto i : v) cout << i << " ";
    cout << endl;

    // accumulate = sum
    cout << "sum = "
         << accumulate(v.begin(), v.end(), 0) << endl;

    // count
    cout << "count of 2 = "
         << count(v.begin(), v.end(), 2) << endl;

    // find
    auto it = find(v.begin(), v.end(), 5);
    if(it != v.end())
        cout << "5 found" << endl;

    // max / min
    cout << "max = "
         << *max_element(v.begin(), v.end()) << endl;

    cout << "min = "
         << *min_element(v.begin(), v.end()) << endl;

    // reverse
    reverse(v.begin(), v.end());

    cout << "reverse : ";
    for(auto i : v) cout << i << " ";
    cout << endl;

    // next_permutation
    vector<int> p = {1,2,3};

    next_permutation(p.begin(), p.end());

    cout << "next permutation : ";
    for(auto i : p) cout << i << " ";
    cout << endl;

    // pow
    cout << "2^5 = " << pow(2,5) << endl;

    return 0;
}
