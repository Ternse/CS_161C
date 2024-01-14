/* Lab 2
   Name: Ernest Ho
   Date: 10/4/2023
   Version: 1.1
   Description: Generate two random integers between 1 and 99. Each time the program is run it should get new random numbers.
                Asks the user to enter their sum.
                Display the numbers in the form a standard equation: See examples below.
                You do not need to indicate if the user entered the correct answer, but you can if you want.
 */
#include <iostream>
#include <cstdlib>  // included for random functions
#include <ctime>    // included to get the time for srand
#include <iomanip>
using namespace std;


int main() {

    srand(time(NULL));

    int num_1;
    int num_2;
    int sum;
    int answer;

    //generates random numbers for num_1 and num_2
    //note to self. These always go before the question.
    num_1 = rand() % 99 + 1;
    num_2 = rand() % 99 + 1;

    //asks the user what is the sum of the two random numbers
    cout << "What is the sum of " << num_1 << " and " << num_2 << "?" << endl;
    //user's answer
    cin >> sum;

    //finds the sum of the two numbers
    answer = num_1 + num_2;

    if (sum != answer) {
        cout << "The answer you put was not correct" << endl;

    }

    //displays the math in standard form equation
    cout << setw(3) << num_1 << endl;
    cout << setw(1) << "+" << num_2 << endl;
    cout << setw(3) << "---" << endl;
    cout << setw(3) << sum << endl;

    return 0;
}