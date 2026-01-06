# Practice Problems - Language Basics
> Quick solutions for revision

---

## 1. Basic Input/Output

**Task:** Take two numbers as input, print their sum.

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a + b;
    return 0;
}
```

---

## 2. Adult or Teen Check

**Task:** Check if a person is Adult (age >= 18) or Teen.

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    if (age >= 18) {
        cout << "Adult";
    } else {
        cout << "Teen";
    }
    return 0;
}
```

---

## 3. If-Else If Ladder

**Task:** Grade classification based on marks.

```cpp
#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;
    
    if (marks >= 90) {
        cout << "A";
    } else if (marks >= 80) {
        cout << "B";
    } else if (marks >= 70) {
        cout << "C";
    } else if (marks >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }
    return 0;
}
```

---

## 4. Switch Case - Day of Week

**Task:** Print day name based on number (1-7).

```cpp
#include <iostream>
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
    return 0;
}
```

---

## 5. Sum of First N Elements in Array

**Task:** Given an array, find sum of first N elements.

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 3; // Sum of first 3 elements
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    cout << "Sum: " << sum; // Output: 60
    return 0;
}
```

---

## 6. Print X, N Times

**Task:** Print a character X, N number of times.

```cpp
#include <iostream>
using namespace std;

int main() {
    char x;
    int n;
    cin >> x >> n;
    
    for (int i = 0; i < n; i++) {
        cout << x;
    }
    return 0;
}
```

---

## 7. Print Last Character of String

**Task:** Given a string, print only the last character.

```cpp
#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;
    
    // Method 1: Using length
    cout << str[str.length() - 1];
    
    // Method 2: Using back()
    // cout << str.back();
    
    return 0;
}
```

---

## 📋 Quick Reference

| Problem | Key Concept |
|---------|-------------|
| I/O | `cin >>`, `cout <<` |
| Adult/Teen | `if-else` |
| Grade | `if-else if-else` ladder |
| Day Name | `switch-case` |
| Array Sum | `for` loop + indexing |
| Print N times | `for` loop |
| Last Char | `str[str.length() - 1]` or `str.back()` |

---

*All basics covered! Ready for next topic.* ✅
