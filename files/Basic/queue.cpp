#include<bits/stdc++.h>
using namespace std;

int main(){

    // queue = FIFO
    queue<int> q;

    q.push(10);
    q.emplace(20);
    q.push(30);

    // first element comes out first
    cout << "front = " << q.front() << endl;
    cout << "back = " << q.back() << endl;

    q.pop();

    cout << "front after pop = " << q.front() << endl;

    cout << "size = " << q.size() << endl;
    cout << "empty = " << q.empty() << endl;

    queue<int> q2;
    q2.push(100);

    q.swap(q2);

    return 0;
}
