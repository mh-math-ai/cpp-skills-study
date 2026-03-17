// C++ is a superset of C 
// It is object-oriented and has added features like string object 
// but they left the original string-handling part of C unchanged 
// We will find a little bit of weirdness here and there 
// because of this incorporation of legacy 

// Switch
// switch is one of selection control structure
// it evaluate one expression, and it find the case that matches it and jump to the corresponding block

// basic syntax:

/*
switch(expression) {
   case constant-expression1: statement sequence
      break;
   case constant-expression2: statement sequence
      break;
   ...
   default: statement sequence
      break;
}
*/

// it is easy to read than if and numerous else if statements 
// also, it uses jump table so you might expect slightly faster execution time than if and else statements 
// but it is not always true that it will be faster than if and else statements 
// because it has to jump to a case label instead of just executing the next statement after an if or while test 
// so it might not be as fast as you think

// switch has the important characteristic, which is "fall-through"
// if you don't place break after a case label, 
// it will execute all statements from that case to the next break statement or end of switch block

// you can use this characteristic if you want to execute a series of statements that are similar 



// C++ is not parental as Java and it has no window system or graphic system itself 

/*
* average.cpp
* ------------
* This program adds scores and prints their average.
*/

#include <iostream>
#include <string> // we use standard string library 
#include <sstream> // we use standard string stream library 

using namespace std; // we need std library for cout and cin

int GetInteger() { // function to get integer value from user
   int value;
   cin >> value;
   return value;
}

const int NumScores = 4;
double GetScoresAndAverage(int numScores);
int main()
{
cout << "This program averages " << NumScores << " scores." << endl;
double average = GetScoresAndAverage(NumScores);
cout << "The average is " << average << "." << endl;
return 0;
}

/*
* Function: GetScoresAndAverage
* Usage: avg = GetScoresAndAverage(10); 
* -------------------------------------
* This function prompts the user for a set of values and returns
* the average.
*/

double GetScoresAndAverage(int numScores)
{
int sum = 0;
for (int i = 0; i < numScores; i++) {
cout << "Next score? ";
int nextScore = GetInteger();
sum += nextScore;
}
return double(sum)/numScores;
}

// Things are mostly the same between C++ and Java 

// Both case-sensitive
// Same use of punctuation (semicolons, curly braces, commas, parentheses, square brackets, … )
// Same comment sequence (/* comment */, // comment)
// Same primitive variable types (e.g. int, double, char …)
// (although Java's boolean type is called bool in C++)
// Same operators for arithmetic, comparison, logical (e.g. +, %, *=, ++, ==, <, &&, ||,…)
// (same syntax, precedence, associativity, short-circuiting, conversions for mixed-types, etc.)
// Same control structures (e.g. if/else, for, while, switch, return, break …)
// All of the basic C++ language syntax is thoroughly covered in Chapter 1 of the reader. 

// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// int GetInteger() {
//    int value;
//    cin >> value;
//    return value;
// }

// int main() 
// {
//    cout << "how much do you love 106B? ";
//    int howAwesome = GetInteger();
//    for (int i = 0; i < howAwesome; i++)
//       cout << "106B rocks!" << endl;
//    return 0;
// }


