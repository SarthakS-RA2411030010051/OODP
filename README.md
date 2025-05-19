# Object-Oriented Design and Programming (OODP) Important Topics Documentation

This documentation covers important topics and questions from the OODP syllabus, with C++ code examples provided for relevant questions. Conceptual explanations and notes on UML diagrams are also included.

---

## UNIT-1

### 1. Basic concept of OOPs
Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects", which can contain data and code: data in the form of fields (attributes), and code in the form of procedures (methods). The main concepts of OOP are encapsulation, inheritance, polymorphism, and abstraction.

### 2. Features of OOPs
- Encapsulation
- Inheritance
- Polymorphism
- Abstraction
- Data hiding
- Reusability

### 3. C++ Access Specifiers
C++ provides three access specifiers:
- `public`: Members are accessible from outside the class.
- `private`: Members are accessible only within the class.
- `protected`: Members are accessible within the class and by derived classes.

### 4. Write a C++ program for:
#### a) Reverse a number
```cpp
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}
```

#### b) Fibonacci series
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
    cout << endl;
    return 0;
}
```

#### c) Armstrong number or not
```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;

    // Find number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate Armstrong number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (round(result) == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
```

#### d) Prime number or not
```cpp
#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool isPrime = true;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
```

#### e) Sum of even numbers
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num % 2 == 0) {
            sum += num;
        }
    }
    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}
```

#### f) Sum of odd numbers
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num % 2 != 0) {
            sum += num;
        }
    }
    cout << "Sum of odd numbers: " << sum << endl;
    return 0;
}
```

### 5. Draw a Use case diagram for any one application
- Note: Use case diagrams represent the interactions between users and the system.
- Example applications: Banking Management System, ATM Management System, etc.
- (Diagram to be drawn separately; not represented in code)

### 6. Draw a Class diagram for any one application
- UML Class Diagram example in text format:

```
#ClassName
- privateMember1 : type
- privateMember2 : type
+ publicMember1() : returnType
+ publicMember2() : returnType
```

- Example:

```
#BankAccount
- accountNumber : int
- balance : double
+ deposit(amount : double) : void
+ withdraw(amount : double) : bool
+ getBalance() : double
```

- This diagram links to the Banking Management System application.

---

## UNIT-2

### 1. Types of constructors with an example
```cpp
#include <iostream>
using namespace std;

class Example {
public:
    int x;

    // Default constructor
    Example() {
        x = 0;
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor
    Example(int val) {
        x = val;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Example(const Example &obj) {
        x = obj.x;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Example obj1;          // Default constructor
    Example obj2(10);      // Parameterized constructor
    Example obj3 = obj2;   // Copy constructor

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
```

### 2. Destructor with an example
```cpp
#include <iostream>
using namespace std;

class Example {
public:
    Example() {
        cout << "Constructor called" << endl;
    }
    ~Example() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Example obj;
    return 0;
}
```

### 3. Method Overloading with an example
```cpp
#include <iostream>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }
    void display(double f) {
        cout << "Float: " << f << endl;
    }
    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print obj;
    obj.display(5);
    obj.display(5.5);
    obj.display("Hello");
    return 0;
}
```

### 4. Operator Overloading with an example
```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    // Overload + operator
    Complex operator + (const Complex &obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
```

### 5. Draw a UML Interaction Diagrams (Sequence Diagram / Collaboration Diagram) any one application
- Note: Interaction diagrams show how objects interact in a particular scenario of a use case.
- (Diagram to be drawn separately; not represented in code)

---

## UNIT-3

### 1. Multiple Inheritance with an example
```cpp
#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Base1 display function" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 show function" << endl;
    }
};

class Derived : public Base1, public Base2 {
};

int main() {
    Derived obj;
    obj.display();
    obj.show();
    return 0;
}
```

### 2. Multilevel inheritance with an example
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : public Base {
};

class Derived2 : public Derived1 {
};

int main() {
    Derived2 obj;
    obj.display();
    return 0;
}
```

### 3. Hierarchical with an example
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : public Base {
};

class Derived2 : public Base {
};

int main() {
    Derived1 obj1;
    Derived2 obj2;
    obj1.display();
    obj2.display();
    return 0;
}
```

### 4. Hybrid Inheritance with an example
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : public Base {
};

class Derived2 : public Base {
};

class Derived3 : public Derived1, public Derived2 {
};

int main() {
    Derived3 obj;
    // obj.display(); // Ambiguous call due to multiple Base classes
    obj.Derived1::display(); // Specify which display to call
    obj.Derived2::display();
    return 0;
}
```

### 5. Friend function with an example
```cpp
#include <iostream>
using namespace std;

class Box {
private:
    int width;
public:
    Box() : width(0) {}
    friend void printWidth(Box box);
};

void printWidth(Box box) {
    cout << "Width of box: " << box.width << endl;
}

int main() {
    Box box;
    printWidth(box);
    return 0;
}
```

### 6. Virtual function with an example
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show(); // Calls Derived's show()
    return 0;
}
```

### 7. Pure Virtual function with an example
```cpp
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class implementation of show()" << endl;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}
```

### 8. Abstract class with an example
```cpp
#include <iostream>
using namespace std;

class AbstractBase {
public:
    virtual void display() = 0; // Pure virtual function
};

class Derived : public AbstractBase {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    return 0;
}
```

### 9. Interface or Pure abstract class with an example
```cpp
#include <iostream>
using namespace std;

class Interface {
public:
    virtual void func() = 0; // Pure virtual function
};

class Implementation : public Interface {
public:
    void func() override {
        cout << "Implementation of interface function" << endl;
    }
};

int main() {
    Implementation obj;
    obj.func();
    return 0;
}
```

### 10. Draw UML State Chart Diagram for any one application
- Note: State chart diagrams show the states of an object and transitions.
- (Diagram to be drawn separately; not represented in code)

### 11. Draw UML Activity Diagram for any one application
- Note: Activity diagrams represent workflows of stepwise activities.
- (Diagram to be drawn separately; not represented in code)

---

## UNIT-4

### 1. Function template
```cpp
#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(3, 4) << endl;
    cout << add<double>(3.5, 4.5) << endl;
    return 0;
}
```

### 2. Class template
```cpp
#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}
    T add() {
        return a + b;
    }
};

int main() {
    Calculator<int> calc(3, 4);
    cout << calc.add() << endl;
    return 0;
}
```

### 3. Exception handling (try, throw, catch and multiple catch)
```cpp
#include <iostream>
using namespace std;

int main() {
    try {
        int age;
        cout << "Enter age: ";
        cin >> age;
        if (age < 18)
            throw age;
        else
            cout << "Access granted." << endl;
    }
    catch (int e) {
        cout << "Access denied. Age " << e << " is less than 18." << endl;
    }
    catch (...) {
        cout << "Unknown exception caught." << endl;
    }
    return 0;
}
```

### 4. Types of exceptions
- Standard exceptions (e.g., `std::exception`, `std::runtime_error`)
- User-defined exceptions
- Catch-all exceptions (`catch(...)`)

### 5. Package diagram, Component diagram and Deployment diagram for applications
- Note: These diagrams represent different views of system architecture.
- (Diagrams to be drawn separately; not represented in code)

---

## UNIT-5

### 1. Sequence Container: Vector, List, Deque, Array, Stack with an example
```cpp
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
using namespace std;

int main() {
    // Vector
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    cout << "Vector elements: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    // List
    list<int> l = {10, 20, 30};
    l.push_back(40);
    cout << "List elements: ";
    for (int i : l) cout << i << " ";
    cout << endl;

    // Deque
    deque<int> d = {100, 200, 300};
    d.push_front(50);
    cout << "Deque elements: ";
    for (int i : d) cout << i << " ";
    cout << endl;

    // Stack
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Stack elements (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
```

### 2. Associative Containers: Map, Multimap with an example
```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    // Map
    map<int, string> m;
    m[1] = "One";
    m[2] = "Two";
    m[3] = "Three";

    cout << "Map elements:" << endl;
    for (auto &pair : m) {
        cout << pair.first << " => " << pair.second << endl;
    }

    // Multimap
    multimap<int, string> mm;
    mm.insert({1, "Apple"});
    mm.insert({1, "Apricot"});
    mm.insert({2, "Banana"});

    cout << "Multimap elements:" << endl;
    for (auto &pair : mm) {
        cout << pair.first << " => " << pair.second << endl;
    }

    return 0;
}
```

### 3. Algorithms: find(), count(), sort(), search(), merge(), for_each(), transform() with an example
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {4, 5, 6, 7, 8};

    // find()
    auto it = find(v1.begin(), v1.end(), 3);
    if (it != v1.end())
        cout << "Element 3 found in v1" << endl;

    // count()
    int cnt = count(v1.begin(), v1.end(), 2);
    cout << "Number of 2's in v1: " << cnt << endl;

    // sort()
    sort(v1.begin(), v1.end(), greater<int>());
    cout << "v1 sorted in descending order: ";
    for (int i : v1) cout << i << " ";
    cout << endl;

    // merge()
    vector<int> v3(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    cout << "Merged vector: ";
    for (int i : v3) cout << i << " ";
    cout << endl;

    // for_each()
    cout << "Elements in v2: ";
    for_each(v2.begin(), v2.end(), [](int x) { cout << x << " "; });
    cout << endl;

    // transform()
    vector<int> v4(v2.size());
    transform(v2.begin(), v2.end(), v4.begin(), [](int x) { return x * 2; });
    cout << "v2 elements doubled: ";
    for (int i : v4) cout << i << " ";
    cout << endl;

    return 0;
}
```

---

# End of Documentation
