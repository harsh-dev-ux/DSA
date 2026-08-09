#include<bits/stdc++.h>
using namespace std;

int main(){

    // priority_queue = max heap by default
    priority_queue<int> pq;

    pq.push(10);
    pq.emplace(30);
    pq.push(20);

    // largest element is always on top
    cout << "top = " << pq.top() << endl;

    pq.pop();

    cout << "top after pop = " << pq.top() << endl;

    cout << "size = " << pq.size() << endl;
    cout << "empty = " << pq.empty() << endl;

    // min heap
    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(10);
    minpq.push(30);
    minpq.push(20);

    cout << "min heap top = " << minpq.top() << endl;

    return 0;
}
