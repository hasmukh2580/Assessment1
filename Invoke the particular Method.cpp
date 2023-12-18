#include <iostream>

class MyClass {
public:
    void myMethod() {
        std::cout << "Hello from myMethod!" << std::endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass myObject;

    // Invoke the method using the object and the dot operator
    myObject.myMethod();

    return 0;
}


/*

#include <iostream>

class MyClass {
public:
    static void myStaticMethod() {
        std::cout << "Hello from myStaticMethod!" << std::endl;
    }
};

int main() {
    // Invoke the static method using the class name
    MyClass::myStaticMethod();

    return 0;
}
*/

