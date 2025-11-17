#include <iostream>
#include <climits>

int main()
{

    int number, i=1;
    // Assigning minimum and maximum values ​​to start
    int smallestNumber = INT_MAX;
    int largestNumber = INT_MIN;
    // Follow whether at least one number has been entered
    bool numberEntered = false;

     // the loop continues until the user enters zero
     do {
        std::cout << i << "th number:";
        std::cin >> number;

      // if the user enters 0, the loop is terminated
      if (number == 0)
            break;

       numberEntered = true; // at least one number has been entered

      // Update if the entered number is less than the current smallest number
      if (number < smallestNumber)
            smallestNumber = number;

      // Update if the entered number is greater than the largest number available
      if (number > largestNumber)
            largestNumber = number;

      i++; // Increase number order
     }while (number != 0); // Continue looping until 0 is entered

     // Warn if no number is entered
     if (!numberEntered) {
        std::cout << "\nNo numbers entered!" << std::endl;
     }
     else { // Printing the minimum and maximum values ​​of the entered numbers
        std::cout << "\nthe Smallest number: " << smallestNumber << std::endl;
        std::cout << "\nthe Largest number: " << largestNumber << std::endl;
     }

  return 0;
}
