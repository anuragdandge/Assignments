-------------#
## Q. What is Object Oriented Programming. Compare Object Oriented and Procedure Oriented Programming

Object-oriented programming (OOP) is a programming paradigm that focuses on the use of objects, which are instances of classes, to represent real-world entities or concepts. OOP involves the use of encapsulation, inheritance, and polymorphism to organize and structure code.

In contrast, procedure-oriented programming (POP) is a programming paradigm that focuses on writing procedures or functions to accomplish tasks. POP involves breaking down a program into a set of procedures that perform specific tasks and modifying data through the use of parameters and return values.

Here are some key differences between OOP and POP:

- Data and code organization: OOP organizes code and data together in the form of objects, while POP separates data and code into procedures or functions.

 - Encapsulation: OOP provides encapsulation, which means that the internal details of an object are hidden from the outside world. POP does not provide encapsulation, and data can be modified from anywhere in the program.

 - Inheritance: OOP provides inheritance, which allows new classes to be created by inheriting properties and methods from existing classes. POP does not provide inheritance.

- Polymorphism: OOP provides polymorphism, which allows objects to take on multiple forms or behaviors depending on the context in which they are used. POP does not provide polymorphism.

Overall, OOP is generally considered to be more flexible, modular, and easier to maintain than POP. It allows for better code reuse and supports more complex and scalable applications. However, POP can be simpler and more efficient for small-scale applications.

-------------#
## Q . Explain the Concept of Classes, objects and message passing with suitable example
Classes, objects, and message passing are fundamental concepts in object-oriented programming (OOP).

A class is a blueprint or template for creating objects that share similar properties and behavior. It defines the attributes and methods that an object will have. For example, a class called "Car" might have attributes such as "color," "model," and "year," and methods such as "start," "stop," and "accelerate."

An object is an instance of a class. It represents a specific instance of the class and has its own unique set of values for the attributes defined by the class. For example, an object of the "Car" class might have the color "red," the model "Toyota Corolla," and the year "2019."

Message passing is the way in which objects communicate with each other by invoking methods on each other. When an object sends a message to another object, it is essentially calling a method on that object. The receiving object processes the message and sends a response back to the sending object. This communication enables objects to work together to accomplish tasks.

Here's an example that demonstrates these concepts:

Let's say we have a class called "Person" that has attributes such as "name," "age," and "gender," and methods such as "greet," "talk," and "listen." We can create objects of this class to represent individual people. For example, we can create an object called "John" that has the name "John," the age "30," and the gender "male."

Now let's say we have another class called "Meeting" that has attributes such as "location," "start time," and "end time," and methods such as "schedule," "cancel," and "attendees." We can create objects of this class to represent individual meetings. For example, we can create an object called "Sales Meeting" that has the location "Conference Room A," the start time "10:00 AM," the end time "11:00 AM," and a list of attendees.

When we want to schedule a meeting, we can send a message to the "Sales Meeting" object to invoke its "schedule" method. This method might take parameters such as the location, start time, and end time of the meeting. We can also send a message to the "John" object to add him as an attendee to the "Sales Meeting" object. This might involve invoking a method on the "Sales Meeting" object that adds "John" to its list of attendees.

When the time for the meeting arrives, we can send a message to the "Sales Meeting" object to invoke its "attendees" method, which will return the list of attendees. We can then send a message to each attendee object to invoke its "listen" method, which will simulate each person listening to the meeting.

In this way, objects can work together to accomplish tasks by sending messages to each other and invoking methods. This enables a more natural and intuitive way of programming by modeling real-world objects and their interactions.


-------------#
## Q. Explain the Benefits and applications of OOP in cpp 
Object-oriented programming (OOP) has several benefits in C++, including:

1. Modularity and maintainability: OOP allows code to be organized into modular, reusable units called classes. This makes it easier to maintain and modify code over time.

3. Code reusability: OOP encourages code reuse through inheritance, where a new class can be created by inheriting properties and methods from existing classes.

3. Encapsulation: OOP provides encapsulation, which means that the internal details of an object are hidden from the outside world. This protects the integrity of the object and makes it easier to modify the implementation without affecting other parts of the code.

4. Polymorphism: OOP provides polymorphism, which allows objects to take on multiple forms or behaviors depending on the context in which they are used. This enables greater flexibility and extensibility in code.

5. Abstraction: OOP allows for abstraction, which means that complex systems can be simplified and represented in a more manageable way.

#### Some applications of OOP in C++ include:

1. Graphical User Interfaces (GUIs): GUIs are often built using object-oriented programming techniques. For example, a button object might have properties such as its position, size, and label, as well as methods for handling user input.

2. Games: Games often use OOP to model game entities such as players, enemies, and obstacles, and to handle game logic and physics.

3. Financial applications: OOP can be used to model financial concepts such as accounts, transactions, and investments.

4. Scientific simulations: OOP can be used to model complex systems in scientific simulations, such as weather patterns, biological systems, or physical phenomena.

5. Web applications: Many web frameworks use OOP to organize code and data into classes, such as models, controllers, and views.

Overall, OOP is a powerful and flexible programming paradigm that can be applied to a wide range of applications. By organizing code into classes and objects, it provides a more intuitive and natural way of representing complex systems and enables code to be more modular, maintainable, and extensible.


Compare C & C++ in the Tabular format 
Here's a comparison of C and C++ in a tabular format:

|Feature|	C	|C++|
|-|-|-|
|Paradigm	|Procedural	|Object-Oriented|
|Compiler|	C compiler|	C++ compiler|
|Header files	|Used to declare functions and variables|	Same as C, but also used to declare classes, templates, and namespaces|
|Pointers	|Used extensively	|Used, but can be avoided with references and smart pointer|
|Memory management	|Manual (malloc/free)|	Manual (new/delete), but also supports automatic garbage collection with smart pointers|
|Inheritance	|Not supported	|Supported|
|Polymorphism	|Not supported	|Supported (via virtual functions and templates)|
|Operator overloading	|Not supported	|Supported|
|Templates	|Not supported	|Supported|
|Exception handling	|Not supported	|Supported|
|Standard library	|Limited (stdio.h, string.h, etc.)|	Extensive (STL, IOstream, etc.)|
|Performance	|Fast and efficient, but limited by lack of abstraction|	Fast and efficient, with better abstraction and flexibility|
|Ease of use	|Can be more difficult to write and maintain, especially for large projects	|Easier to write and maintain, with better support for encapsulation and modular design|
|Portability	|Highly portable, with compilers for virtually all platforms	|Highly portable, with support for multiple operating systems and hardware platforms|
|Applications	|Low-level programming and system development	|A wide range of applications, including game development, web applications, scientific simulations, and more|

Overall, C and C++ have several similarities but also some key differences. C is a procedural language that is fast and efficient but lacks many of the advanced features of C++. C++ is an object-oriented language that supports features such as inheritance, polymorphism, templates, and exception handling, and has a more extensive standard library. While C is often used for low-level programming and system development, C++ is used for a wider range of applications, including game development, web applications, scientific simulations, and more.


-------------
## Q . Compare C & C++ 
C and C++ are two popular programming languages with many similarities and some important differences. Here are some key differences between C and C++:

`Paradigm`: C is a procedural programming language, while C++ is an object-oriented programming language. C++ also supports procedural programming.

`Features`: C is a relatively simple language with basic data types, functions, and pointers. C++ extends C with classes, inheritance, polymorphism, templates, operator overloading, and more advanced features.

`Memory management`: In C, memory management is done manually using functions such as malloc() and free(). In C++, memory can be managed manually using new and delete operators or automatically using smart pointers and garbage collection.

`Standard library`: C has a limited standard library that includes basic input/output functions and string handling functions. C++ has a much larger standard library that includes the Standard Template Library (STL) for data structures and algorithms, as well as other libraries for file input/output, networking, and more.

`Performance`: C is a very fast language that is often used for low-level programming and system development. C++ is also fast, but can be slower than C for some tasks due to its added overhead.

`Ease of use`: C is a relatively simple language that can be difficult to write and maintain for large projects. C++ provides more advanced features and supports better encapsulation and modular design, making it easier to write and maintain large projects.

`Portability`: C and C++ are both highly portable languages with compilers available for virtually all platforms.

Overall, C and C++ are both powerful and flexible programming languages, but C++ provides more advanced features and better support for object-oriented programming. The choice between C and C++ depends on the specific needs of the project and the expertise of the development team.





-------------
## Q . Explain the Concept of reference variable along with example 
In C++, a reference is a type of variable that refers to another variable. A reference variable is essentially an alias for another variable, meaning that any changes made to the reference variable are reflected in the original variable it refers to. Here is an example to illustrate the concept of reference variable:

```cpp
#include <iostream>
using namespace std;

int main() {
   int num = 10;
   int& refNum = num;

   cout << "num = " << num << endl;
   cout << "refNum = " << refNum << endl;

   refNum = 20;

   cout << "num = " << num << endl;
   cout << "refNum = " << refNum << endl;

   return 0;
}
```
In this example, we declare an integer variable num and initialize it to 10. We then declare a reference variable refNum and set it equal to num. This means that refNum is now an alias for num, and any changes made to refNum will also affect num.

We then use cout to print the values of num and refNum. At this point, both variables have the same value of 10.

Next, we set refNum equal to 20. This changes the value of num as well, since refNum is an alias for num.

Finally, we use cout again to print the updated values of num and refNum. Both variables now have a value of 20.

Using reference variables can be useful in a variety of situations, such as passing arguments to functions, returning values from functions, and working with complex data structures. Reference variables allow us to work with the original variables directly, without creating copies or unnecessary overhead.





-------------
## Q . What is Function Overloading ? What is difference between function overloading and Default Argument
Function overloading is a feature in C++ that allows a function to have multiple definitions with the same name but different parameters. In function overloading, the compiler selects the appropriate function to call based on the number, types, and order of the arguments passed to the function.

For example, consider the following functions:

```cpp
int sum(int a, int b);
double sum(double a, double b);
```

These are two different definitions of a function named sum, but with different parameter types. The first function takes two integers as arguments and returns an integer, while the second function takes two doubles as arguments and returns a double. When we call the sum function with integers, the first definition is used, and when we call it with doubles, the second definition is used.

Default arguments, on the other hand, allow us to specify default values for function parameters. When a function is called with fewer arguments than the number of parameters defined, the default values are used for the missing arguments.

For example, consider the following function:

```cpp
int sum(int a, int b, int c = 0);
```
Here, we have defined a function named sum that takes three integer arguments, but the third argument has a default value of 0. This means that we can call the sum function with either two or three arguments, and if we call it with two arguments, the third argument is assumed to be 0.

The main difference between function overloading and default arguments is that function overloading allows us to define multiple functions with the same name but different parameter lists, while default arguments allow us to define a single function with optional parameters. Both features can be useful for simplifying code and improving readability, but they serve different purposes and should be used appropriately based on the requirements of the program.





#### Explain inline function with example 
In C++, an inline function is a function that is expanded in-line at the point of its call, rather than being called through the function call mechanism. Inline functions are defined with the inline keyword, which tells the compiler to replace the function call with the function body whenever the function is called. This can improve performance by eliminating the overhead of a function call, but can also increase code size.

Here is an example of an inline function:

```cpp
#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
   return a * b;
}

int main() {
   int x = 5, y = 10;
   cout << "Product of " << x << " and " << y << " is " << multiply(x, y) << endl;
   return 0;
}
```
In this example, we define an inline function named multiply that takes two integer arguments and returns their product. We then call the multiply function with the values of x and y and print the result.

When the multiply function is called in the cout statement, the compiler will replace the function call with the function body, like this:

```cpp
cout << "Product of " << x << " and " << y << " is " << x * y << endl;
```
This eliminates the overhead of a function call, which can be especially beneficial for small functions that are called frequently.

Note that whether or not a function is actually inlined is up to the compiler, which may choose not to inline a function in certain circumstances, such as when the function is too large or when the function call is part of a loop. In general, it's best to use inline functions sparingly and only for small, frequently called functions where the performance benefits are likely to be significant.





-------------
## Q . Compare cout and cin over `printf()` and `scanf()`
`cout` and `cin` are C++ I/O stream objects that provide a convenient and type-safe way to perform input and output operations, while `printf()` and `scanf()` are C library functions that provide similar functionality in C.

Here are some differences between `cout` and `cin` and `printf()` and `scanf()`:

1. `Type Safety` : C++ I/O streams are type-safe, meaning that the types of the input and output values are checked at compile time. In contrast, `printf()` and `scanf()` are not type-safe and can lead to undefined behavior if the format string does not match the types of the input and output values.

2. `Formatting` : `printf()` and `scanf()` use format strings to specify the format of the input and output values, which can be more flexible than the formatting options provided by cout and cin. However, format strings can be difficult to use correctly and can introduce security vulnerabilities if not used carefully.

3. `Object-Oriented` : C++ I/O streams are object-oriented, which allows for greater flexibility and modularity in I/O operations. In contrast, `printf()` and `scanf()` are function calls, which can be less flexible and harder to modify.

4. `Stream Manipulation`: C++ I/O streams provide a powerful mechanism for manipulating I/O streams using the `<<` and `>>` operators, which can be used to format output, extract input, and manipulate the stream state. In contrast, `printf()` and `scanf()` provide limited stream manipulation capabilities.

5. `Performance` : `printf()` and `scanf()` are generally faster than cout and cin for simple I/O operations, but their performance can degrade rapidly for more complex operations or when formatting is required.

In general, cout and cin are preferred in C++ due to their type safety, object-oriented design, and stream manipulation capabilities, while `printf()` and `scanf()` are still commonly used in C and for performance-critical applications.





-------------
## Q . Explain Dynamic  memory allocation using NEW and DELETE with example and compare with malloc and free function in 'C' 
In C++, dynamic memory allocation is done using the new and delete operators, which are similar to the `malloc()` and `free()` functions in C. However, there are some differences in their usage and behavior.

Here's an example of dynamic memory allocation using new and delete:


```cpp
int main() {
   // allocate an integer dynamically
   int* ptr = new int;

   // assign a value to the dynamically allocated integer
   *ptr = 42;

   // print the value of the dynamically allocated integer
   std::cout << *ptr << std::endl;

   // deallocate the dynamically allocated integer
   delete ptr;

   return 0;
}
```
In this example, we allocate an integer dynamically using the `new` operator and assign a value to it. We then print the value of the dynamically allocated integer and deallocate it using the `delete` operator.

The `new` operator returns a pointer to the allocated memory, which can be stored in a pointer variable. The `delete` operator deallocates the memory pointed to by the pointer variable.

One important difference between `new/delete` and `malloc()/free()` is that `new/delete` are type-safe, meaning that they allocate memory of the correct size and alignment for the specified data type, and return a pointer of the correct type. In contrast, `malloc()` returns a void pointer, which must be cast to the appropriate type, and may not allocate memory of the correct alignment for certain data types.

Another difference is that `new/delete` can be overloaded by user-defined types, allowing for custom memory allocation behavior, while `malloc()/free()` cannot be overloaded.

Finally, it's worth noting that in C++ it's generally preferred to use `new/delete` over `malloc()/free()`, since `new/delete` are type-safe and offer better support for object-oriented programming features such as constructors and destructors. However, `malloc()/free()` are still commonly used in C code and in performance-critical applications where fine-grained control over memory allocation and deallocation is necessary.


-------------
## Q . Explain static data member and static member function 
In C++, a static data member is a class member that is shared by all instances of the class, rather than being unique to each instance. A static member function is a class member function that can be called without an instance of the class.

Here's an example of a class with a static data member and a static member function:

```cpp
class MyClass {
  public:
    static int count; // static data member
    static void incrementCount() { // static member function
        count++;
    }
};

int MyClass::count = 0; // initialization of static data member

int main() {
    MyClass::incrementCount(); // call static member function
    MyClass::incrementCount();
    std::cout << "Count: " << MyClass::count << std::endl; // print static data member
    return 0;
}
```
In this example, we define a class `MyClass` with a static data member count and a static member function `incrementCount()`. We initialize the static data member count to 0 outside the class definition.

We then call the static member function `incrementCount()` twice, which increments the value of the static data member count by 1 each time. Finally, we print the value of the static data member count.

Since the static data member count is shared by all instances of the class, any changes made to it by one instance will be visible to all other instances. The static member function `incrementCount()` can be called without an instance of the class, making it a convenient way to manipulate static data members.

Static data members and static member functions are useful in situations where we want to maintain some state or behavior that is shared by all instances of a class. For example, we might use a static data member to keep track of the number of instances of a class that have been created, or a static member function to perform some operation that does not depend on the state of any particular instance.

It's worth noting that static data members and static member functions can only access other static members of the class, since they do not have access to the state of any particular instance.


-------------
## Q . What are constructor and destructor explain with example 


In C++, a constructor is a special member function that is called when an object of a class is created, and is used to initialize the object's data members. A destructor is another special member function that is called when an object is destroyed, and is used to clean up any resources that the object acquired during its lifetime.

Here's an example of a class with a constructor and a destructor:

```cpp
class MyClass {
  public:
    int x;
    MyClass() { // constructor
        x = 0;
        std::cout << "Constructor called" << std::endl;
    }
    ~MyClass() { // destructor
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    MyClass obj; // create an object of MyClass
    std::cout << "Object created" << std::endl;
    return 0;
}
```
In this example, we define a class `MyClass` with a constructor that initializes the data member `x` to 0 and prints a message to the console, and a destructor that prints another message to the console.

We then create an object `obj` of `MyClass` in the main function. When `obj` is created, the constructor of `MyClass` is called and initializes `x` to 0 and prints a message to the console. When `obj` is destroyed, the destructor of `MyClass` is called and prints another message to the console.

Constructors and destructors are used to ensure that objects are always initialized and cleaned up properly, respectively. Constructors can also be used to perform any additional initialization that may be required, such as allocating memory or opening files. Similarly, destructors can be used to perform any cleanup that may be required, such as releasing memory or closing files.

It's worth noting that if a class does not have a constructor or a destructor defined explicitly, C++ provides a default constructor and a default destructor. The default constructor initializes all data members to their default values, while the default destructor does nothing. However, if a class acquires any resources during its lifetime, such as memory or file handles, it's important to define a destructor to ensure that those resources are properly released when the object is destroyed.

-------------
## Q . Explain Friend Function with example
In C++, a friend function is a function that is not a member of a class, but has access to the private and protected members of the class. A friend function can be declared inside the class definition using the friend keyword, or outside the class definition with the friend keyword and the class name.

Here's an example of a class with a friend function:

```cpp
class MyClass {
  private:
    int x;
  public:
    MyClass(int a) : x(a) {}
    friend void printX(MyClass obj);
};

void printX(MyClass obj) {
    std::cout << "The value of x is: " << obj.x << std::endl;
}

int main() {
    MyClass obj(42);
    printX(obj);
    return 0;
}
```
In this example, we define a class `MyClass` with a private data member `x` and a constructor that initializes `x` with an argument a. We then declare the `printX` function as a friend of `MyClass`.

The `printX` function takes an object of `MyClass` as a parameter, and since it is declared as a friend of `MyClass`, it has access to the private data member `x`. In the main function, we create an object obj of `MyClass` with a value of 42, and then call the `printX` function to print the value of `x`.

The output of this program is:

```cpp
The value of x is: 42
```
Friend functions are often used to allow functions that are not members of a class to access its private data. They can also be used to simplify the implementation of operators, as operators are often defined outside the class definition, but need access to its private data members. However, it's important to use friend functions sparingly, as they can break encapsulation and make it harder to maintain the code.

---

## Q .  What is Operator Overloading List the operator that cannot be overloaded as member function

In C++, operator overloading is a feature that allows operators such as `+, -, *, /, <<, >>,` and many others to be redefined for a user-defined class or data type. This allows for a more natural and intuitive syntax when working with user-defined types.

Operator overloading can be done in two ways: as a member function or as a non-member function. When overloading an operator as a member function, the left operand is the object on which the operator is applied, and the right operand is passed as a parameter to the function.

Here is an example of overloading the `+` operator as a member function:

```cpp
class MyClass {
  private:
    int value;
  public:
    MyClass(int v) : value(v) {}
    MyClass operator+(const MyClass& other) {
        return MyClass(value + other.value);
    }
};

int main() {
    MyClass a(10);
    MyClass b(20);
    MyClass c = a + b;
    return 0;
}
```
In this example, we define a class `MyClass` with a private data member value and a constructor that initializes value with an argument v. We then overload the `+` operator as a member function that takes a constant reference to another `MyClass` object as a parameter. The function returns a new `MyClass` object whose value is the sum of the value of the two objects.

We then create three `MyClass` objects and add the first two using the overloaded `+` operator as a member function. The result is assigned to the third `MyClass` object.

While most operators can be overloaded as member functions or non-member functions, there are a few operators that cannot be overloaded as member functions. These include:

- `::` (scope resolution operator)
- `.*` (pointer-to-member operator)
- `?:` (ternary operator)
These operators must be overloaded as non-member functions.'

---

## Q . What are rules for operator overloading ? Explain the need of operator overloading

Rules for operator overloading in C++:

1. Overloaded operators must have at least one operand that is a user-defined type or a reference/pointer to a user-defined type.
1. Overloaded operators must be defined using the operator keyword followed by the operator symbol.
1. Overloaded operators cannot have default arguments.
1. Overloaded operators cannot change the number of operands required by the operator.
1. Overloaded operators cannot change the precedence or associativity of the operator.
1. Overloaded operators must follow the same semantics as the built-in operators.

The need for operator overloading in C++ arises from the fact that it allows programmers to define new meanings for the built-in operators for user-defined types. This can lead to more natural and intuitive syntax when working with user-defined types, and can make code easier to read and maintain.

For example, consider a `Vector` class that represents a mathematical `vector` with two components `x` and `y`. We could overload the + operator to allow adding two `Vector` objects together:

```cpp
class Vector {
  private:
    double x, y;
  public:
    Vector(double a, double b) : x(a), y(b) {}
    Vector operator+(const Vector& other) {
        return Vector(x + other.x, y + other.y);
    }
};

int main() {
    Vector v1(1.0, 2.0);
    Vector v2(3.0, 4.0);
    Vector v3 = v1 + v2;
    return 0;
}
```
In this example, we overload the `+` operator as a member function of the Vector class. The function takes a constant reference to another Vector object as a parameter, and returns a new Vector object whose  `x` and `y` components are the sum of the corresponding components of the two vectors.

Without operator overloading, we would have to write something like `Vector v3 = Vector(v1.getX() + v2.getX(), v1.getY() + v2.getY());` to achieve the same result, which is less natural and less readable.

Operator overloading can also be used to define comparison operators, stream insertion/extraction operators, subscript operators, and many other operators.

---

## Q . Explain Different ways of binary overloading


Binary operator overloading in C++ allows programmers to define new behaviors for built-in binary operators such as `+` , `-` , `*` , `/`, `==` , `!=` , `<` , `<=` , `>` , and `>=` for user-defined types. There are three different ways to overload binary operators in C++:

1. Overloading binary operators as member functions:

Binary operators can be overloaded as member functions of a class, which means that the left-hand operand of the operator is an instance of the class. This approach is suitable when the operator needs to access the private data members of the class. For example:

```cpp
class Vector {
public:
    Vector operator+(const Vector& rhs) const {
        return Vector(x + rhs.x, y + rhs.y);
    }
private:
    double x, y;
};
```
In this example, the `+` operator is overloaded as a member function of the `Vector` class. The function takes a constant reference to another `Vector` object as a parameter, and returns a new `Vector` object whose `x` and `y` components are the sum of the corresponding components of the two vectors.

2. Overloading binary operators as friend functions:

Binary operators can also be overloaded as friend functions of a class, which means that the left-hand operand of the operator is not an instance of the class, but the function has access to the private data members of the class. This approach is suitable when the operator needs to access private data members of both operands. For example:

```cpp
class Matrix {
public:
    friend Matrix operator+(const Matrix& lhs, const Matrix& rhs) {
        return Matrix(lhs.a + rhs.a, lhs.b + rhs.b, lhs.c + rhs.c, lhs.d + rhs.d);
    }
private:
    int a, b, c, d;
};
```

In this example, the `+` operator is overloaded as a friend function of the Matrix class. The function takes constant references to two Matrix objects as parameters, and returns a new Matrix object whose elements are the sums of the corresponding elements of the two matrices.

3. Overloading binary operators using normal functions:

Binary operators can also be overloaded using normal functions, which take two arguments, one for each operand. This approach is suitable when the operator does not need to access private data members of either operand. For example:

```cpp
class Point {
public:
    double x, y;
};
Point operator+(const Point& lhs, const Point& rhs) {
    return Point{lhs.x + rhs.x, lhs.y + rhs.y};
}
```
In this example, the `+` operator is overloaded using a normal function, which takes constant references to two `Point` objects as parameters, and returns a new `Point` object whose coordinates are the sums of the corresponding coordinates of the two points.

Note that in all three cases, the function signature of the overloaded binary operator must match the syntax of the operator being overloaded.

