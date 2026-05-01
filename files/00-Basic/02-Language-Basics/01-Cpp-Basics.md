# C++ Basics

Why C++? Because it's fast. Like really fast. In competitive programming and system-level stuff, C++ is the go-to because it compiles to machine code directly — no interpreter overhead like Python. You get manual memory control, and the STL (Standard Template Library) gives you optimized data structures out of the box.

---

## Basic Skeleton

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // code here
    return 0;
}
```

Most CP people use `#include <bits/stdc++.h>` instead of individual headers like `<iostream>`, `<vector>`, `<algorithm>` etc. It includes everything in one line. Yes it increases compile time slightly, but in contests you don't care — you care about writing speed. In production code or interviews you'd use specific headers though.

`using namespace std;` — saves you from writing `std::cout`, `std::cin` everywhere. Again, not great practice in big projects (namespace pollution), but in CP nobody cares. Speed of writing > code purity.

`return 0;` tells the OS the program exited fine. Technically optional in modern C++ but just keep it.

---

## Data Types — Pick the Right One

This matters more than people think. Wrong data type = wrong answer or TLE.

| Type | Size | Range | When to use |
|------|------|-------|-------------|
| `int` | 4 bytes | ~-2×10⁹ to 2×10⁹ | Default choice. Most problems fit in this |
| `long long` | 8 bytes | ~-9×10¹⁸ to 9×10¹⁸ | When numbers can go above 10⁹ (like n×n where n=10⁵) |
| `double` | 8 bytes | ~15 decimal digits | Decimal math. Avoid `float` — only 6-7 digits precision, will give wrong answers |
| `char` | 1 byte | single character | When dealing with characters. Uses way less memory than string for single chars |
| `bool` | 1 byte | true/false | Flags. Technically 1 bit of info but stored as 1 byte |
| `string` | varies | text | When you need text. Heavier than char arrays but easier to work with |

**Why not always use `long long`?** It takes 2x the memory of `int` and is slightly slower on some operations. If the problem says n ≤ 10⁵ and values ≤ 10⁶, `int` is fine. But if you're multiplying two ints that can be 10⁹, the result overflows `int` — use `long long`.

Quick trick in CP: `#define ll long long` so you type less.

```cpp
#define ll long long
ll bigNumber = 1e18; // instead of long long bigNumber
```

**`float` vs `double`**: Almost never use `float`. It has garbage precision (~7 digits). `double` gives ~15 digits. If a problem involves decimals, always `double`. Some problems even need `long double` for extra precision.

---

## Input / Output

```cpp
cin >> x;       // read input
cout << x;      // print output
```

Arrows point the direction of data flow. `>>` into variable, `<<` out to screen.

### Speed trick — THIS IS IMPORTANT for CP:

```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

Put this at the top of `main()`. By default `cin/cout` sync with C's `scanf/printf` which makes them slow. These two lines disable that sync and untie cin from cout. Can be the difference between AC and TLE on problems with heavy I/O (like 10⁵+ lines of input).

Some people still use `scanf/printf` from C — they're faster by default and you don't need the sync trick. But with the trick above, `cin/cout` are basically the same speed.

**Don't use `endl`** in loops — it flushes the buffer every time which is slow. Use `"\n"` instead.

```cpp
// slow in loops
cout << x << endl;

// fast
cout << x << "\n";
```

---

## If-Else

```cpp
if (condition) {
    // true
} else {
    // false
}
```

Nothing fancy here. But know the **ternary operator** — shorter to write:

```cpp
// instead of if-else for simple assignments:
int result = (a > b) ? a : b;  // gives max of a and b
```

Saves lines. Used a lot in CP for quick conditional assignments.

---

## Loops

### For loop
```cpp
for (int i = 0; i < n; i++) {
    // runs n times
}
```

Start from 0, not 1 — arrays are 0-indexed so it's cleaner. Most CP people do 0-indexed.

### While loop
```cpp
while (condition) {
    // keep going until condition is false
}
```

Use when you don't know how many iterations. Like reading input until EOF:
```cpp
int x;
while (cin >> x) {
    // processes each input
}
```

### do-while
Rarely used but runs at least once before checking condition:
```cpp
do {
    // code
} while (condition);
```

---

## Switch

```cpp
switch (x) {
    case 1: /* code */ break;
    case 2: /* code */ break;
    default: /* fallback */
}
```

Cleaner than chained if-else when you have multiple exact-value checks. Compiler can optimize switch into a jump table which is O(1) lookup — chained if-else is O(n) comparisons. But honestly in CP the difference is negligible, it's more about readability.

**Don't forget `break`** — without it, execution "falls through" to the next case.

---

## Arrays

```cpp
int arr[100005]; // global — initialized to 0 automatically
int arr2[5] = {1, 2, 3, 4, 5}; // local with values
```

**Why declare globally in CP?** Global arrays are initialized to 0 and have larger stack size limits. Local arrays sit on the stack which is limited (~1-8 MB). If you need an array of size 10⁶, declare it globally or you'll get a stack overflow / segfault.

**Indexing starts at 0.** `arr[0]` is the first element.

Size matters — an `int` array of size 10⁶ takes ~4 MB. `long long` array of same size takes ~8 MB. Most problems have 256 MB memory limit so you can usually fit ~6×10⁷ ints. Keep this in mind.

For dynamic sizes, use `vector` from STL (covered later) — it's basically a resizable array, slightly slower due to overhead but way more flexible.

---

## Strings

```cpp
string s = "hello";
cout << s.length();   // 5
cout << s[0];          // 'h'
s += " world";        // concatenation
```

Strings in C++ are mutable (unlike Java/Python). You can change individual characters: `s[0] = 'H';`

**For reading strings with spaces**, `cin >> s` stops at whitespace. Use `getline(cin, s)` instead. But watch out — if you mix `cin >>` and `getline`, there's a leftover newline issue. Fix it with `cin.ignore()` before `getline`.

```cpp
int n;
cin >> n;
cin.ignore();         // eat the leftover newline
string s;
getline(cin, s);      // now this works properly
```

---

## Functions

```cpp
int add(int a, int b) {
    return a + b;
}
```

Write once, call many times. Keeps code clean and avoids repetition.

`void` = function returns nothing. Otherwise specify the return type.

### Pass by Value vs Pass by Reference

```cpp
void byValue(int x) { x = 100; }     // changes copy, original stays same
void byRef(int &x) { x = 100; }      // changes the actual variable
```

**Why this matters**: When you pass a `vector` or `string` to a function by value, it copies the ENTIRE thing. That's O(n) time and memory. Pass by reference with `&` to avoid the copy.

```cpp
// BAD — copies entire vector every call, O(n) overhead
void process(vector<int> v) { ... }

// GOOD — no copy, works on original, O(1) to pass
void process(vector<int> &v) { ... }

// GOOD — no copy, and can't accidentally modify it
void process(const vector<int> &v) { ... }
```

This is a common source of TLE in CP. Always pass large data structures by reference.

---

## Summary

| Topic | What to remember |
|-------|-----------------|
| Headers | `bits/stdc++.h` for CP, specific headers for production |
| Data types | `int` default, `long long` when overflow possible, never `float` |
| Fast I/O | `ios_base::sync_with_stdio(false); cin.tie(NULL);` and `"\n"` over `endl` |
| Arrays | Declare large arrays globally, know memory limits |
| Strings | `getline` for spaces, `cin.ignore()` after `cin >>` |
| Functions | Always pass vectors/strings by reference (`&`) to avoid TLE |
| General | C++ is fast but you can still get TLE with bad practices |
