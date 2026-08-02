#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb push_back

int main() {

    vector<int> a = {1,2,3,4};

    // Add element
    a.pb(5);

    // Print vector
    cout << "Vector : ";
    for(auto i : a)
        cout << i << " ";
    cout << endl<<endl;

    // Access
    cout << "a[2] = " << a[2] << endl;
    cout << "front() = " << a.front() << endl;
    cout << "back() = " << a.back() << endl;
    cout << "*begin() = " << *a.begin() << endl;
    cout << "*(end()-1) = " << *(a.end()-1) << endl;

    cout << endl;

    // Size
    cout << "size() = " << a.size() << endl;

    // Empty
    cout << "empty() = " << a.empty() << endl;

    cout << endl;

    // pop_back()
    a.pop_back();

    cout << "After pop_back() : ";
    for(auto i : a)
        cout << i << " ";
    cout << endl;

    // insert()
    a.insert(a.begin()+2,100);

    cout << "After insert() : ";
    for(auto i : a)
        cout << i << " ";
    cout << endl;

    // erase()
    a.erase(a.begin()+2);

    cout << "After erase() : ";
    for(auto i : a)
        cout << i << " ";
    cout << endl;

    cout << endl;

    // swap()
    vector<int> b = {10,20,30};

    swap(a, b); // or ----> a.swap(b) 

    cout << "Vector a after swap : ";
    for(auto i : a)
        cout << i << " ";
    cout << endl;

    cout << "Vector b after swap : ";
    for(auto i : b)
        cout << i << " ";
    cout << endl;

    cout << endl;

    // clear()
    b.clear();

    cout << "After clear(), b size = " << b.size() << endl;
    cout << "Is b empty? " << b.empty() << endl;

    return 0;
}


/*

push_back()	O(1) amortized
pop_back()	O(1)
front()		O(1)
back()		O(1)
size()		O(1)
empty()		O(1)
swap()		O(1) 
clear()		O(n)
insert()	O(n)
erase()		O(n)
sort()		O(n log n)
reverse()	O(n) /*