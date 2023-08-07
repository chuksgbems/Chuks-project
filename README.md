# Chuks-project
a collection of projects done by Chukwuma Gbemudu

calculator. cpp is a scientific calculator developed by me
This simple calculator program can perform basic arithmetic operations and find the square root, cube root, logarithm, and exponential of a number.

To use the calculator, simply run the program and follow the instructions on the screen. The program will prompt you to enter two numbers for addition, subtraction, multiplication, or division. For square root, cube root, logarithm, and exponential, you will only need to enter one number.

The program will then display the result of the calculation.

Here is a step-by-step explanation of the code:

1. The first step is to include the necessary header files. In this case, we need the `iostream` header file for input and output, and the `string` header file for strings.

2. Next, we define the functions that will perform the calculations. These functions are `add`, `subtract`, `multiply`, `divide`, `squareRoot`, `cubeRoot`, `logarithm`, and `exponential`. Each function takes two numbers as input and returns a single number as output.

3. The `main` function is the program's entry point. It first prints the menu of the calculator. Then, it gets the user's choice of operation.

4. The `switch` statement performs the selected operation based on the user's choice. For addition, subtraction, multiplication, and division, the program prompts the user to enter two numbers and then prints the result of the calculation. For square root, cube root, logarithm, and exponential, the program prompts the user to enter one number and then prints the result of the calculation.

5. The `return` statement at the end of the `main` function tells the operating system that the program has finished running.

I hope this helps!

randompass.Cpp is a random password generator created by me in C++
This README.md file explains how to use the randompass.cpp program to generate a random password.

## How to use the program

1. Compile the program by running the following command in a terminal window:

```
$ g++ randompass.cpp -o randompass
```

2. Run the program by running the following command in a terminal window:

```
$ ./randompass
```

The program will generate a random password and print it to the console.

## The program code
# Step-by-step explanation of the code

**The program code is divided into the following steps:

1. The random number generator is seeded with the current time.
2. The length of the password is defined.
3. The set of characters to choose from is defined.
4. The password is generated.
5. The password is printed to the console.**

TIC-Tac-Toe Game 
The code is for a tic-tac-toe game.

The game is played on a 3x3 board. The players take turns marking a square on the board with either an X or an O. The first player to get three of their marks in a row (horizontally, vertically, or diagonally) wins.

The code starts by importing the <iostream> and <stdlib.h> libraries. The <iostream> library provides the necessary functions for input and output, and the <stdlib.h> library provides the function rand(), which is used to generate random numbers.

The next step is to declare the variables that will be used in the game. The board is represented by a 3x3 array of characters. The variable choice is used to store the player's choice of square to mark. The variables row and column are used to store the row and column of the square that the player has chosen. The variable turn is used to keep track of which player's turn it is. The variable draw is used to keep track of whether the game is a draw.

The next function is the display_board() function. This function prints the current state of the board to the console.

The player_turn() function gets the player's input and updates the board. The function first checks to see if it is the player's turn. If it is, the function prints a message asking the player to choose a square. The function then gets the player's choice and updates the board accordingly. If the player's choice is invalid, the function prints an error message and asks the player to choose again.

The gameover() function checks to see if the game is over. The function first checks to see if either player has won by getting three of their marks in a row. The function then checks to see if the game is a draw by checking if all of the squares on the board are filled.

The main() function is the program's entry point. The function first prints a welcome message and then starts the game loop. The game loop continues until the game is over. In each iteration of the loop, the function displays the board, gets the player's input, and updates the board. The function then checks to see if the game is over and prints the appropriate message if it is.
