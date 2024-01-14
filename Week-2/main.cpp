// This program should calculate three times the number in x
// add four to the result and store it in the variable y
// there are two problems in this program
// Use vocabulary, rewrite the wrong lines, or add a line if necessary.
// Note: Spaces matter with H5P.
/*
#include <iostream>
using namespace std;
int main() {
    int x = 5;
    int y;
    y = 3 * x + 4;
    cout << "y = " << y << endl;
    return 0;
 }
*/
// this program should input a value for x
// multiply it by three and add four, then output the result
// there are two problems with the program
// Use vocabulary, rewrite the wrong lines, or add a line if necessary.
// Note: Spaces matter with H5P.
/*
#include <iostream>
using namespace std;
int main() {
    int x = 0;
    int y = 0;
    cout << "Please enter a number";
    cin >> x;
    y = 3 * x + 4;
    cout << "y = " << y << endl;
    return 0;
} */
/*
#include <iostream> // for console input and output
#include <cstdlib>  // included for random functions
#include <ctime>    // included to get the time for srand
using namespace std;
int main() {
    //int dice1 = 0;
    //int dice2 = 0;
    //int total = 0;

    int x = 0;
    int y = 0;
    int total = 0;

    //is the same as srand(time(NULL));
    unsigned int seed = static_cast<unsigned int>(time(nullptr));
    srand(seed);

    const int MAX = 6; //The maximum number the dice can be
    const int MIN = 1; //The minimum number the dice can be

    //dice1 = rand() % (MAX - MIN + 1) + MIN;  //randomize the side of dice 1
    //dice1 = rand() % 6 + 1;
    x = rand() % 6 + 1;
    //dice2 = rand() % (MAX - MIN + 1) + MIN;  //randomize the side of dice 2
    //dice2 = rand() % 6 + 1;
    y = rand() % 6 + 1;


    //total = dice1 + dice2; //total score of dice 1 and 2
    total = x + y;

    cout << "The total value of the two dices are " << total << endl; //combines the value of dice one and two
    //shows the number of each dice individually
    //cout << "The value of dice 1 is " << dice1 << ", and the value of dice 2 is " << dice2 << endl;
    cout << "The value of dice 1 is " << x << ", and the value of dice 2 is " << y << endl;

    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main() {
    int x = 0;
    int y = 5;

    x = x + 1;
    y = y + 1;
    y = x + y;

    cout << y << endl;
    return 0;
} */
/*
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


}
*/
    //used to test if it works before formatting
    //cout << num_1 << "+" << num_2 << "=" << answer << endl;



    /*
    //do while loop used from www.w3school.com/cpp/cpp_do_while_loop.asp
    do {
        //asks the user what is the sum of the two random numbers
        cout << "What is the sum of " << num_1 << " and " << num_2 << "?" << endl;
        //user's answer
        cin >> sum;

        //finds the sum of the two numbers
        answer = num_1 + num_2;

        //used to test if it works before formatting
        //cout << num_1 << "+" << num_2 << "=" << answer << endl;

        //checks if the sum = answer.
        //If not, asks you to retry.
        if (sum != answer) {
            cout << "Wrong. Please try again." << endl;
        }
    }

    //will not finish the loop if the sum does not equal the answer.
    while (sum != answer);
    //end if the do while loop help

    //displays the math in standard form equation
    cout << " " << num_1 << endl;
    cout << "+" << num_2 << endl;
    cout << "---" << endl;
    cout << answer << endl;

    return 0;
}
     */
/*
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    //week 1
    //std::cout << std::setfill('0') << std::setw(3) << 7;
    //std::cout << std::setfill('0') << std::setw(5) << std::left << 7;
    //std::cout << 55555.666666;
    //std::cout << std::setprecision(3) << 55555.666666;
    //std::cout << std::fixed << std::setprecision(3) << 55555.666666;

    int num = 2;
    while (num <= 10) {
        cout << num << " ";
        num += 2;
    }

    return num;

}*/

#include <iostream>

using namespace std;

/* Using a while loop
 * add up the integers 1 to 10.
 * output the result.
 * Use an constant integer LIMIT to define how many numbers to add up.
 * Use integer variables count and sum in your code */

int main() {

    int sum=0;

    int i=1;

    for(i=1; i <= 10 ; i++)

    {

        sum=+i;

        cout << sum << "\n";

    }

    return 0;
}