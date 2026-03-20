// Program Structure

//     Java: All code must be inside a class
//     C++: Code can exist at global scope (functions and variables outside classes). 
//     C++ is a hybrid language (procedural + object-oriented)

// #include (Preprocessor Directive)

//     Similar to Java's import, but literally pastes the contents of a file
//     < > : System standard headers (e.g., <iostream>)
//     " " : User-defined / project-specific headers (e.g., "genlib.h")

//  The main Function

//     Entry point of every C++ program
//     Must return int. return 0; indicates successful execution

// Function Prototypes (Declarations)

//     C++ compilers read files top to bottom only once
//     If a function is called before it is defined, the compiler errors
//     Solution: Place a function prototype (return type, name, parameters) at the top before main

// Input / Output (I/O)

//     cout : Output stream
//     cin : Input stream
//     << : Insertion operator
//     >> : Extraction operator
//     endl : Newline + flush buffer

// Complier/language strictness

//     Both Java and C++ compilers are pretty assertive about making sure your code meets certain standards 
//     (all variables declared, right number of parameters in calls, types used correctly, and so on)

//     C++ compiler is noticeably lax compared to what you're used to in Java.
//     Don't forget to initialize a variable before you use it.
//     Do not forget to return a value from a non-void method.
//     Do not use a non-boolean expression where a boolean is expected. 
//     The original C language has no explicit boolean type and 
//     it interprets any non-zero value as true, zero as false. C++ inherits this from C. 
//     For example, in the test of an if or while statement, 
//     you can use any expression (boolean or not). 
//     Combine this with the fact that an assignment statement returns a value and 
//     you have set the stage for an insidious and all-too-common error in C/C++ programming:

if (x = 3) // oops! meant == but used =
cout << "Ack!" << endl;

//     What does the above code do? It always prints Ack because it assigns x the value 3 and 
//     that value is non-zero, so the test expression is true.

// Constants

//     Java: final
//     C++: const

// Enumerated Types (enum)

//     Defines a type with a set of named constants
//     Internally mapped to integers (0, 1, 2, ...)

enum directionT { North, South, East, West };

directinT dir = East;
if (dir == West) ...  

// Structures (struct)

//     Aggregates multiple data types into a single unit
//     Members accessed with dot (.) operator

struct pointT {
    double x;
    double y;
};

pointT p, q; // we have two pointT type structure p, q
p.x = 0; // inserting 0 to x of p
p = q;  // all q's values now copied to p 

// Default Arguments

//     Function parameters can have default values
//     Defaults must be assigned from right to left consecutively
//     Caller can omit the argument to use the default

// Parameter Passing

// Pass by Value (default)
//     A copy is passed to the function
//     Changes inside function do not affect the original

// Pass by Reference (&)
//     Declared with & (e.g., int &x)
//     A reference to the original is passed
//     Changes inside function do affect the original
//     Does not exist in Java

//     Uses:
//         1. Modifying the caller's original variable
//         2. Avoiding expensive copies of large data (performance)

// Sentinel Loop

//     Loop that continues until a special "sentinel" value is entered
//     Common pattern: while (true) with break when sentinel is encountered

//     Used when the number of iterations is unknown in advance
