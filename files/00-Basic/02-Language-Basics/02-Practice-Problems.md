# Practice Problems - Language Basics

Basic problems to get comfortable with C++ syntax. Nothing fancy, just get your hands dirty.

---

## 1. Sum of Two Numbers

Read two ints, print their sum. The classic starter.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    cout << a + b << "\n";
    return 0;
}
```

Note: using `"\n"` instead of `endl` and fast I/O from the start — build the habit early.

---

## 2. Adult or Teen

Simple if-else. Check if age >= 18.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;
    cout << (age >= 18 ? "Adult" : "Teen") << "\n";
    return 0;
}
```

Used ternary here instead of full if-else — for something this simple, ternary is cleaner and faster to type in contests.

---

## 3. Grade Classification

If-else ladder. Order matters — check highest first so you don't need `&&` conditions.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 90) cout << "A";
    else if (marks >= 80) cout << "B";
    else if (marks >= 70) cout << "C";
    else if (marks >= 60) cout << "D";
    else cout << "F";

    cout << "\n";
    return 0;
}
```

No braces for single-line bodies — less clutter. Some people hate this style but in CP speed of writing matters. Just don't do it with nested ifs.

---

## 4. Day of Week (Switch)

Switch is cleaner than chained if-else here since we're matching exact values.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int day;
    cin >> day;

    switch (day) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid";
    }
    cout << "\n";
    return 0;
}
```

In reality for CP you'd probably just use an array of strings — O(1) lookup and way less code:
```cpp
string days[] = {"", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
cout << days[day] << "\n";
```

---

## 5. Sum of First N Elements

Basic array traversal with a for loop. O(n) time, O(1) extra space.

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 3;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum << "\n"; // 60
    return 0;
}
```

Could also use `accumulate(arr, arr + n, 0)` from `<numeric>` (included in bits/stdc++.h) — one liner, same O(n) internally.

---

## 6. Print Character N Times

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    char x;
    int n;
    cin >> x >> n;

    // method 1: loop
    for (int i = 0; i < n; i++) cout << x;

    // method 2: string constructor (faster to write)
    // cout << string(n, x);

    cout << "\n";
    return 0;
}
```

`string(n, x)` creates a string of n copies of char x. Useful shortcut — less code, same result.

---

## 7. Last Character of String

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s.back() << "\n";
    return 0;
}
```

`s.back()` is cleaner than `s[s.length() - 1]` and does the same thing. Also `s.front()` for first char. Know your STL — it saves time.

---

## Quick Reference

| # | Problem | Key Concept | Shortcut/Note |
|---|---------|------------|---------------|
| 1 | Sum | I/O basics | Always use fast I/O |
| 2 | Adult/Teen | if-else | Ternary for simple cases |
| 3 | Grades | if-else ladder | Check highest first, no braces for single lines |
| 4 | Day of Week | switch | Array lookup is often cleaner |
| 5 | Array Sum | for loop | `accumulate()` as alternative |
| 6 | Print N times | loop | `string(n, x)` constructor |
| 7 | Last char | string ops | `.back()` over manual indexing |
