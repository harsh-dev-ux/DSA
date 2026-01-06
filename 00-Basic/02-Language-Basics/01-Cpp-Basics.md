# C++ Basics
> The Language of Speed

---

## 📌 Welcome to the Coding World!

C++ is a powerful, general-purpose programming language widely used for:
- System development
- Software engineering
- Competitive programming

---

## 1️⃣ Basic Skeleton

Every human has a skeleton (bones) that gives them structure. Similarly, every C++ program has a standard skeleton.

### Minimum Code Required:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Write your code here
    return 0;
}
```

### Understanding the Parts:

| Part | Meaning |
|------|---------|
| `#include <iostream>` | Include tools for Input/Output. Without this, we cannot take input or print anything. |
| `using namespace std;` | Shortcut to use standard tools (like `cout`) directly without `std::` prefix. |
| `int main()` | Starting point. Computer looks for `main()` and starts executing from there. |
| `{ ... }` | Curly braces mark beginning and end of main function. Everything inside executes sequentially. |
| `return 0;` | Tells computer: "Program finished successfully." |

> 💡 **Note:** If you need other tools (like maths), include: `#include <cmath>`

---

## 2️⃣ Data Types

In real life, we have different containers for different things:
- 🍶 Bottle for water (Liquid)
- 📦 Box for shoes (Solid)
- 👛 Wallet for money (Cash)

In C++, **Data Types** are containers (variables) for different kinds of data.

### Common Data Types:

| Type | Name | Stores | Examples |
|------|------|--------|----------|
| `int` | Integer | Whole numbers | `5`, `-10`, `100` |
| `float` | Floating Point | Decimal numbers | `3.14`, `2.5`, `-0.1` |
| `char` | Character | Single letter/symbol | `'a'`, `'Z'`, `'$'` |
| `bool` | Boolean | True or False | `true`, `false` |
| `string` | String | Text (collection of chars) | `"Hello"`, `"C++"` |

### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    float height = 5.9;
    char grade = 'A';
    bool isStudent = true;
    string name = "Rahul";
    return 0;
}
```

---

## 3️⃣ Input / Output (I/O)

How do we talk to the computer?

| Action | Keyword | Description |
|--------|---------|-------------|
| **Output** | `cout` | Show something on screen (See-Out) |
| **Input** | `cin` | Read what user types (See-In) |

### Arrow Direction Trick:

```
cout << data   // Arrows go OUT towards the screen →
cin >> variable // Arrows go IN towards the variable ←
```

### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;

    // Output: Ask user a question
    cout << "Enter your age: ";
    
    // Input: Read what user types and store in 'age'
    cin >> age;
    
    // Output: Show the result
    cout << "Your age is: " << age;
    
    return 0;
}
```

---

## 4️⃣ If-Else (Decision Making)

Life is full of decisions: *"If it rains, I will take an umbrella. Else, I will not."*

### Syntax:

```cpp
if (condition) {
    // Do this if condition is TRUE
} else {
    // Do this if condition is FALSE
}
```

### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int money = 500;

    if (money >= 1000) {
        cout << "I will buy a pizza";
    } else {
        cout << "I will buy a burger";
    }
    
    return 0;
}
```

> **Output:** "I will buy a burger" (since 500 < 1000)

---

## 5️⃣ For Loop (Repetition)

Imagine teacher says: *"Write 'I am sorry' 100 times."*

You wouldn't write the same line 100 times. Use a **Loop**!

### Syntax:

```cpp
for (initialization; condition; updation) {
    // Code to repeat
}
```

### Breakdown:

| Part | Purpose | Runs When |
|------|---------|-----------|
| `initialization` | Where we start (e.g., `int i = 1`) | Only once at beginning |
| `condition` | Check before every round (e.g., `i <= 5`) | Before each iteration |
| `updation` | Update counter (e.g., `i++`) | End of every round |

### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Print "Hello" 5 times
    for (int i = 1; i <= 5; i++) {
        cout << "Hello" << endl;
    }
    
    return 0;
}
```

---

## 6️⃣ While Loop

A simpler loop. It only cares about the condition.

*"While you are hungry, eat."*

### Syntax:

```cpp
while (condition) {
    // Code to repeat
    // Don't forget to update! Otherwise infinite loop
}
```

### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int count = 1;

    while (count <= 5) {
        cout << count << " ";
        count++; // Important! Increase count
    }
    
    return 0;
}
```

> **Output:** `1 2 3 4 5`

---

## 7️⃣ Switch Case

When you have many options (like a menu), many if-else gets messy. Use **switch**!

### Syntax:

```cpp
switch (variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code if no match
}
```

### Important Keywords:

| Keyword | Purpose |
|---------|---------|
| `break` | Exit the switch block. Without it, code "falls through" to next cases. |
| `default` | Runs if no case matches. Like final `else`. |

### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int day = 3;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        default:
            cout << "Invalid day";
    }
    
    return 0;
}
```

> **Output:** `Wednesday`

---

## 8️⃣ Arrays

What if we need to store marks of 50 students? Creating 50 variables (`m1, m2, m3...`) is bad!

> **Array** = Single variable holding multiple values of same type. Think of it as an **egg tray** 🥚

### Syntax:

```cpp
datatype arrayName[size] = {values};
```

### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Create an array of 5 integers
    int marks[5] = {90, 85, 92, 78, 88};
    
    // Accessing elements
    cout << marks[0] << endl; // Output: 90 (first)
    cout << marks[2] << endl; // Output: 92 (third)
    
    return 0;
}
```

> ⚠️ **Important:** Indexing starts from **0**. First element = index 0.

| Index | 0 | 1 | 2 | 3 | 4 |
|-------|---|---|---|---|---|
| Value | 90 | 85 | 92 | 78 | 88 |

---

## 9️⃣ Strings

A **string** stores text. It's actually a chain of characters.

### Code Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    string firstName = "John";
    string lastName = "Doe";
    
    // Concatenation (Joining strings)
    string fullName = firstName + " " + lastName;
    
    cout << fullName << endl;      // Output: John Doe
    cout << fullName.length();     // Output: 8 (characters)
    
    return 0;
}
```

### Common String Operations:

| Operation | Syntax | Example |
|-----------|--------|---------|
| Concatenate | `str1 + str2` | `"Hello" + "World"` |
| Length | `str.length()` | `name.length()` |
| Access char | `str[index]` | `name[0]` → first char |

---

## 🔟 Functions

A **function** is a block of code that does a specific task. Write once, call whenever needed.

> It's like a **servant**. Teach them how to make tea once, then just order "Make Tea" anytime! ☕

### Syntax:

```cpp
returnType functionName(parameters) {
    // code
    return value; // if returnType is not void
}
```

### Code Example:

```cpp
#include <iostream>
using namespace std;

// Function Definition
void sayHello() {
    cout << "Hello user!" << endl;
}

int main() {
    sayHello(); // Calling the function
    sayHello(); // Calling it again
    return 0;
}
```

> **Functions keep our code clean and reusable!**

---

## 1️⃣1️⃣ Pass by Value vs Pass by Reference

When we pass variables to functions, how are they sent?

### Pass by Value (The Photocopy) 📄

Function gets a **copy**. Changing copy does NOT change original.

```cpp
#include <iostream>
using namespace std;

void changeValue(int x) {
    x = 100; // Changes only the copy
}

int main() {
    int num = 10;
    changeValue(num);
    cout << num; // Output: 10 (Original didn't change!)
}
```

### Pass by Reference (The Original) 📓

We send the **address** using `&`. Function works on the original.

```cpp
#include <iostream>
using namespace std;

void changeRealValue(int &x) { // Note the '&'
    x = 100; // Changes the actual variable
}

int main() {
    int num = 10;
    changeRealValue(num);
    cout << num; // Output: 100 (It changed!)
}
```

### Analogy:

| Type | Analogy |
|------|---------|
| Pass by Value | Sharing a **photo** of your homework. Friend writes on photo, your notebook stays clean. |
| Pass by Reference | Giving your **actual notebook**. Friend writes in it, your notebook changes. |

---

## 📋 Summary

| Topic | Key Point |
|-------|-----------|
| Skeleton | `#include <iostream>`, `int main()` |
| Data Types | `int`, `float`, `char`, `bool`, `string` |
| I/O | `cin >>` (input), `cout <<` (output) |
| Decisions | `if-else`, `switch` |
| Loops | `for`, `while` (to repeat) |
| Arrays | Store multiple values of same type |
| Strings | Store text, use `.length()` |
| Functions | Reusable code blocks |
| Pass by Reference | Use `&` to modify originals |

---

## 🚀 Next Steps

> **Don't just read. Type these examples. See them run. Break them. Fix them.**
> 
> That is the only way to learn C++.

---

*Next: Practice Problems*
