<h1 style="font-weight: bold">OOPS</h1>
<h4>OOPS: Object-Oriented Programming System</h4>
<h5>We will discuss the following topics:</h5>
<ul>
  <li>Classes & Objects</li> ✔
  <li>This Keyword</li> ✔
  <li>Constructors & Destructors</li> ✔
  <li>Dynamic Memory Allocation</li> ✔
  <li>Access Modifiers</li> ✔
  <li>Inheritance</li> ✔
  <li>Encapsulation</li>
  <li>Abstraction</li>
  <li>Polymorphism</li>
  <li>Friend Keyword</li>
</ul>

<h2><b>Class: </b>A class is a blueprint or template for creating objects.</h2>
<p>Example:</p>
class Car {
public:
    string brand;
    int speed;
    
    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

<br>

<h2><b>Objects: </b>An objects is an instance of a class</h2>
<p>Example:</p>
Car car1; // Object of class Car
car1.brand = "Toyota";
car1.speed = 120;
car1.showDetails();

<br>

<h2><b>Encapsulation:</b></h2>
<ul>
  <li>Wrapping data and functions into single using called class.</li>
  <li>Data is hidden is done by private keyword.</li>
  <li>Access is provided using public keyword (getters and setters).</li>
</ul>

<p>Example:</p>
class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) { balance = amount; }
    double getBalance() { return balance; }
};

<br>

<h2><b>Abstraction: </b>Hiding complex implementation details and showing only relevant information.</h2>
<p>Example:</p>
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() { cout << "Drawing Circle" << endl; }
};

<br>

<h2><b>Inheritance:</b> Acquiring properties and behaviors of one class in another.</h2>
<p>Example:</p>
class Animal {
public:
    void sound() { cout << "Animals make sound" << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Dog barks" << endl; }
};

<br>

<h2><b>Polymorphism:</b></h2>
<ul>
  <li>Same function, different behavior.</li>
  <li>Compile-time (Method Overloading & Operator Overloading)</li>
  <li>Runtime (Method Overriding using Virtual Functions)</li>
</ul>

<p>Example:</p>
<b>Method Overloading: </b>
class Math {
public:
    int add(int a, int b) { return a + b; }
    double add(double a, double b) { return a + b; }
};

<br>
<b>Method Overriding: </b>
class Base {
public:
    virtual void show() { cout << "Base class" << endl; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived class" << endl; }
};

<br>

<h2><b>Constructor: </b>A special function that initializes an object automatically.</h2>
<h3>Types of constructor: </h3>
<ul>
  <li>Default Constructor (No parameters)</li>
  <li>Parameterized Constructor (Takes parameters)</li>
  <li>Copy Constructor (Creates a copy of another object)</li>
</ul>

<p>Example: </p>
class Person {
public:
    string name;
    
    // Constructor
    Person(string n) { name = n; }

    void show() { cout << "Name: " << name << endl; }
};

<br>

<h2><b>This Pointer: </b>A special pointer that points to the current object.</h2>
<p>Example: </p>
class Student {
private:
    string name;

public:
    void setName(string name) { this->name = name; } 
};

<br>

<h2><b>Static Keyword: </b></h2>
<ul>
  <li>Used for class-level variables and functions.</li>
  <li>Static variables are shared by all objects.</li>
  <li>Static functions can be called without objects.</li>
</ul>
<p>Example: </p>
class Counter {
public:
    static int count;
    static void showCount() { cout << "Count: " << count << endl; }
};

int Counter::count = 0;


<p>Started on: 8 Jan 2025</p>
<p>Expected to end: 10 Jan 2025</p>
<p>Ended on: 12 Feb 2025</p>
