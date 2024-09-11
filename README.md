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

# playstation power on automation script

This project allows you to remotely turn on your PlayStation console using a Python script by sending a Wake-on-LAN (WoL) magic packet. The script is fully automated and logs all actions, making it easy to track its operations and troubleshoot issues.

Features

Automates turning on your PlayStation console via Wake-on-LAN.
Validates the MAC address format before sending the magic packet.
Provides detailed logging for tracking events and errors.
Uses exception handling for better error management.
Requirements

Before you can use this script, ensure that your environment meets the following requirements:

Python 3.6+
wakeonlan library: You can install this via pip.
PlayStation in Rest Mode with network access enabled.
Setup Instructions

Follow these steps to set up and use the automation script:

1. Clone the Repository
First, clone this repository to your local machine:

bash
git clone https://github.com/yourusername/ps-automation.git
cd ps-automation
2. Install Required Python Libraries
The script requires the wakeonlan library to send the magic packet. You can install it using pip:

bash

pip install wakeonlan
3. Configure PlayStation Settings
Make sure your PlayStation is set to allow network wakeup. Follow these steps on your PlayStation:

Go to Settings > Power Saving Settings > Set Features Available in Rest Mode.
Enable Stay Connected to the Internet.
Enable Turning On PS4/PS5 from Network.
4. Find Your PlayStation's MAC Address
You will need your PlayStation’s MAC address to send the magic packet. Follow these steps:

Go to Settings > Network > View Connection Status.
Note down the MAC address (e.g., XX:XX:XX:XX:XX:XX).
5. Update the Script with Your PlayStation’s MAC Address
Open the Python script (ps_automation.py) and update the MAC address in the code:

python

PS_MAC_ADDRESS = 'XX:XX:XX:XX:XX:XX'  # Replace with your PlayStation's MAC address
6. Running the Script
To turn on your PlayStation, run the following command in your terminal:

bash

python ps_automation.py
If everything is configured correctly, the script will send a magic packet to wake up your PlayStation.

7. Logging
The script generates a log file (ps_automation.log) in the same directory, which tracks the script's execution. This log file will record the following:

The time the script was run.
Whether the MAC address is valid.
If the magic packet was successfully sent.
Any errors encountered during execution.
8. Schedule the Script (Optional)
You can automate the script to run at specific times or trigger it through other systems (e.g., Home Automation):

On Linux/macOS: Use a cron job to schedule it.
On Windows: Use Task Scheduler to automate the script's execution.
Example cron job to run the script at 8:00 AM daily:
bash

0 8 * * * /usr/bin/python3 /path_to_script/ps_automation.py
Example Log Output

Here’s an example of what you’ll find in the ps_automation.log file:

ruby

2024-09-11 14:35:10 - INFO - PlayStation automation script started.
2024-09-11 14:35:10 - INFO - MAC address XX:XX:XX:XX:XX:XX is valid.
2024-09-11 14:35:10 - INFO - Attempting to send a magic packet to turn on the PlayStation.
2024-09-11 14:35:10 - INFO - Magic packet successfully sent to MAC address: XX:XX:XX:XX:XX:XX
2024-09-11 14:35:10 - INFO - PlayStation automation script finished.
Troubleshooting

Invalid MAC Address Error: Ensure that you have entered your PlayStation’s MAC address correctly in the format XX:XX:XX:XX:XX:XX.
PlayStation Not Turning On: Verify that your PlayStation is in Rest Mode and that the network settings are configured properly.
No Log Output: Check if the script has permission to write files in the directory.
Future Improvements

Add support for additional devices beyond PlayStation.
Integrate with home automation systems like Alexa or Google Assistant for voice control.
Allow for remote execution via a secure connection (VPN or other methods).


