# 🧵 Custom String Class in C++  
### From-Scratch Implementation (Without STL)

![Language](https://img.shields.io/badge/Language-C++-blue)
![Concept](https://img.shields.io/badge/OOP-Rule%20of%20Three-orange)
![Memory](https://img.shields.io/badge/Memory-Dynamic%20Allocation-red)
![Level](https://img.shields.io/badge/Level-Interview%20Ready-success)
![Status](https://img.shields.io/badge/Project-Completed-brightgreen)

---

## 📌 Project Overview
This project implements a **Custom String Class in C++** from scratch **without using `std::string` or STL containers**.

The goal is to deeply understand how strings work internally in C++, focusing on **dynamic memory management**, **deep copy semantics**, and **operator overloading**.

This project is highly suitable for:
- 💼 **C++ Interview Preparation**  
  *Demonstrates strong understanding of core C++ concepts such as dynamic memory management, deep copy semantics, the Rule of Three, and operator overloading by implementing a string class from scratch without using `std::string`. This highlights solid foundational knowledge and low-level C++ design skills.*

---

## ✨ Key Features
- 🧠 Manual memory management using `new` and `delete`
- 📏 Dynamic string length handling
- 🔁 **Rule of Three** implementation
- ➕ Operator overloading:
  - Assignment `=`
  - Concatenation `+`
  - Comparison `==`
  - Indexing `[]`
- 🤝 Friend functions for input/output
- 🧩 Modular and readable code structure
- 🚫 No use of `std::string`

---

## 🗂️ Project Structure
```
Custom-String-Class-CPP/
├── header.h            # Custom String class declaration
├── CustomString.cpp    # Core string implementation
├── methods.cpp         # Helper string operations
├── friend.cpp          # Friend function demonstrations
├── main.cpp            # Test cases and demo
├── Makefile            # Build automation
└── README.md           # Documentation
```

---

## ⚙️ Working Principle (Brief)
1. The string is stored as a dynamically allocated character array.
2. Constructors allocate memory based on input size.
3. Copy constructor and assignment operator perform **deep copy**.
4. Destructor safely frees allocated memory.
5. Operators are overloaded to behave like built-in string operations.
6. Friend functions handle input/output streams.

---

## 🧠 Core Concept: Rule of Three
Since the class manages dynamic memory, it correctly implements:

1. **Copy Constructor**  
2. **Copy Assignment Operator**  
3. **Destructor**  

This prevents:
- ❌ Shallow copying
- ❌ Memory leaks
- ❌ Dangling pointers

---

## 📘 Example: Class Interface (`header.h`)
```cpp
class CustomString {
private:
    char* data;
    size_t length;

public:
    CustomString();
    CustomString(const char*);
    CustomString(const CustomString&);
    ~CustomString();

    CustomString& operator=(const CustomString&);
    CustomString operator+(const CustomString&) const;
    bool operator==(const CustomString&) const;

    char& operator[](size_t);
    const char& operator[](size_t) const;

    size_t size() const;

    friend std::ostream& operator<<(std::ostream&, const CustomString&);
    friend std::istream& operator>>(std::istream&, CustomString&);
};
```

---

## ▶️ How to Build & Run

### 🔧 Using Makefile (Recommended)
```bash
make
```

---

## 🧪 Sample Output
```
Enter string 1: Hello
Enter string 2: World
Concatenated String: HelloWorld
Length: 10
```

---

## 🎯 Learning Outcomes
- Deep understanding of string internals
- Practical use of pointers and heap memory
- Operator overloading mastery
- Rule of Three application
- Writing safe, maintainable C++ code
- Interview-level C++ design thinking

---

## 🧩 Possible Enhancements
- Rule of Five (move constructor & move assignment)
- Add a safe `at()` method with bounds checking (similar to `std::string::at()`)
- Exception safety
- Unit testing
- Additional string utilities

---

## 👤 Author
**Siddesh G M**  
C++ / Embedded Systems Fresher  

**Skills:** C++ • OOP • Memory Management • Pointers • Data Structures  
