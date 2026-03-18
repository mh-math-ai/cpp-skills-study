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
