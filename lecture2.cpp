Complier/language strictness

Both Java and C++ compilers are pretty assertive about making sure your code meets certain standards 
(all variables declared, right number of parameters in calls, types used correctly, and so on)

C++ compiler is noticeably lax compared to what you're used to in Java.
Don't forget to initialize a variable before you use it.
Do not forget to return a value from a non-void method.
Do not use a non-boolean expression where a boolean is expected. 
The original C language has no explicit boolean type and 
it interprets any non-zero value as true, zero as false. C++ inherits this from C. 
For example, in the test of an if or while statement, 
you can use any expression (boolean or not). 
Combine this with the fact that an assignment statement returns a value and 
you have set the stage for an insidious and all-too-common error in C/C++ programming:

if (x = 3) // oops! meant == but used =
cout << "Ack!" << endl;

What does the above code do? It always prints Ack because it assigns x the value 3 and 
that value is non-zero, so the test expression is true.

