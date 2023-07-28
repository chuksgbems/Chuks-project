#include <iostream>
#include <string>
using namespace std;
    
// This function takes in two numbers and returns their sum.
double add(double number1, double number2) {
  return number1 + number2;
}

// This function takes in two numbers and returns their difference.
double subtract(double number1, double number2) {
  return number1 - number2;
}

// This function takes in two numbers and returns their product.
double multiply(double number1, double number2) {
  return number1 * number2;
}

// This function takes in two numbers and returns their quotient.
double divide(double number1, double number2) {
  return number1 / number2;
}

// This function takes in a number and returns its square root.
double squareRoot(double number) {
  return sqrt(number);
}

// This function takes in a number and returns its cube root.
double cubeRoot(double number) {
  return cbrt(number);
}

// This function takes in a number and returns its logarithm base 10.
double logarithm(double number) {
  return log10(number);
}

// This function takes in a number and returns its exponential value.
double exponential(double number) {
  return pow(number, 10);
}

// This function prints the menu of the calculator.
void printMenu() {
  cout << "Welcome to the Scientific Calculator!" << endl;
  cout << "What would you like to do?" << endl;
  cout << "1. Add two numbers" << endl;
  cout << "2. Subtract two numbers" << endl;
  cout << "3. Multiply two numbers" << endl;
  cout << "4. Divide two numbers" << endl;
  cout << "5. Find the square root of a number" << endl;
  cout << "6. Find the cube root of a number" << endl;
  cout << "7. Find the logarithm of a number" << endl;
  cout << "8. Find the exponential of a number" << endl;
  cout << "9. Exit the calculator" << endl;
}

int main() {
  // Print the menu of the calculator.
  printMenu();

  // Get the user's choice of operation.
  int choice;
  cin >> choice;

  // Perform the selected operation based on the user's choice.
  double number1, number2;
  switch (choice) {
    case 1:
      cout << "Enter two numbers to add: " << endl;
      cin >> number1 >> number2;
      cout << "The sum is: " << add(number1, number2) << endl;
      break;
    case 2:
      cout << "Enter two numbers to subtract: " << endl;
      cin >> number1 >> number2;
      cout << "The difference is: " << subtract(number1, number2) << endl;
      break;
    case 3:
      cout << "Enter two numbers to multiply: " << endl;
      cin >> number1 >> number2;
      cout << "The product is: " << multiply(number1, number2) << endl;
      break;
    case 4:
      cout << "Enter two numbers to divide: " << endl;
      cin >> number1 >> number2;
      cout << "The quotient is: " << divide(number1, number2) << endl;
      break;
    case 5:
      cout << "Enter a number to find its square root: " << endl;
      cin >> number1;
      cout << "The square root is: " << squareRoot(number1) << endl;
      break;
    case 6:
      cout << "Enter a number to find its cube root: " << endl;
      cin >> number1;
      cout << "The cube root is: " << cubeRoot(number1) << endl;
      break;
    case 7:
      cout << "Enter a number to find its logarithm: " << endl;
      cin >> number1;
      cout << "The logarithm is: " << logarithm(number1) << endl;
      break;
    case 8:
      cout << "Enter a number to find its exponential: " << endl;
      cin >> number1;
      cout << "The exponential is: " << exponential(number1) << endl;
  } 
  return 0;
}