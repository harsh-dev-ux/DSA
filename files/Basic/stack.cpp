#include<bits/stdc++.h>
using namespace std;

int main(){

    // stack = LIFO
    stack<int> st;

    st.push(10);
    st.emplace(20);
    st.push(30);

    // top element comes out first
    cout << "top = " << st.top() << endl;

    st.pop();

    cout << "top after pop = " << st.top() << endl;

    cout << "size = " << st.size() << endl;
    cout << "empty = " << st.empty() << endl;

    stack<int> st2;
    st2.push(100);

    st.swap(st2);

    return 0;
}
