# 🏆 Object-Oriented Programming System (OOPS)

## 📌 Overview  
Object-Oriented Programming (OOP) is a paradigm that focuses on organizing code using objects and classes. It enhances modularity, reusability, and scalability of code.

---

## 📖 Topics Covered  
✔ **Classes & Objects**  
✔ **This Keyword**  
✔ **Constructors & Destructors**  
✔ **Dynamic Memory Allocation**  
✔ **Access Modifiers**  
✔ **Inheritance**  
✔ **Encapsulation**  
✔ **Abstraction**  
✔ **Polymorphism**  
✔ **Friend Keyword**  

---

## 📌 Class & Object  

### 🟡 **Class**  
A class is a blueprint or template for creating objects.  

```cpp
class Car {
public:
    string brand;
    int speed;
    
    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};
```

### 🔵 **Object**  
An object is an instance of a class.  

```cpp
Car car1; // Object of class Car
car1.brand = "Toyota";
car1.speed = 120;
car1.showDetails();
```

---

## 📌 Encapsulation  
Encapsulation is the wrapping of data and methods into a single unit called a class.  

✅ Data is hidden using the `private` keyword.  
✅ Access is provided using `public` methods (getters and setters).  

```cpp
class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) { balance = amount; }
    double getBalance() { return balance; }
};
```

---

## 📌 Abstraction  
Hiding complex implementation details and exposing only relevant functionality.  

```cpp
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() { cout << "Drawing Circle" << endl; }
};
```

---

## 📌 Inheritance  
Inheritance allows a class to acquire properties and behaviors of another class.  

```cpp
class Animal {
public:
    void sound() { cout << "Animals make sound" << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Dog barks" << endl; }
};
```

---

## 📌 Polymorphism  

### 🔵 **Method Overloading (Compile-time Polymorphism)**  
```cpp
class Math {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
};
```

### 🟡 **Method Overriding (Runtime Polymorphism)**  
```cpp
class Base {
public:
    virtual void show() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived class" << endl; }
};
```

---

## 📌 Constructor  
A special function that initializes an object automatically.  

### 🔹 **Types of Constructors**  
✔ **Default Constructor** (No parameters)  
✔ **Parameterized Constructor** (Takes parameters)  
✔ **Copy Constructor** (Creates a copy of another object)  

```cpp
class Person {
public:
    string name;
    
    // Constructor
    Person(string n) { name = n; }

    void show() { cout << "Name: " << name << endl; }
};
```

---

## 📌 `this` Pointer  
A special pointer that points to the current object.  

```cpp
class Student {
private:
    string name;

public:
    void setName(string name) { this->name = name; } 
};
```

---

## 📌 Static Keyword  
✔ Used for **class-level** variables and functions.  
✔ Static variables are **shared by all objects**.  
✔ Static functions can be **called without objects**.  

```cpp
class Counter {
public:
    static int count;
    static void showCount() { cout << "Count: " << count << endl; }
};

int Counter::count = 0;
```

---

## 📆 Project Timeline  

- **Started on:** 🗓 8 Jan 2025  
- **Expected to end on:** 🗓 10 Jan 2025  
- **Ended on:** 🗓 12 Feb 2025  

---

## 📜 License  
This project is **open-source** and available under the **MIT License**.  

---

## 📩 Contact  
📌 **GitHub**: [AmanKumar9958](https://github.com/AmanKumar9958)  
📌 **Portfolio**: [My Portfolio](https://aman-dev-portfolio.netlify.app)  

If you find this useful, don't forget to ⭐ the repository! 🚀
