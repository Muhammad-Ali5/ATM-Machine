ATM Program
Overview
This ATM program simulates basic banking operations such as checking balance, withdrawing cash, and depositing cash. It uses a PIN code for security and interacts with the user via a command-line interface.

Features
Check account balance
Withdraw cash
Deposit cash
PIN code authentication
Continuous operation with an option to exit
Prerequisites
C++ compiler (e.g., g++, clang++)
Command-line interface
Usage
Compilation
To compile the program, use the following command:

bash
g++ -o atm atm.cpp
Execution
Run the compiled program with:
Instructions
Upon running the program, you will be prompted to enter your PIN code. The default PIN code is 4321.
After entering the correct PIN code, you will be presented with a menu:
Press 1 to view the current balance.
Press 2 to withdraw cash.
Press 3 to deposit cash.
Press 4 to exit the program.
Follow the on-screen prompts to perform your desired operations.
After each operation, you will be asked if you want to perform another operation. Enter y or Y to continue, or n or N to exit.
Code Explanation
ATM Class
The ATM class manages the account balance and provides methods to view the balance, withdraw cash, and deposit cash.

Constructor: Initializes the balance.
showBalance(): Displays the current balance.
withdraw(int amount): Withdraws the specified amount from the balance, if sufficient funds are available.
deposit(int amount): Deposits the specified amount into the balance.
Main Function
The main function handles user interaction and menu navigation.

Prompts the user to enter the PIN code.
Displays a menu with options to view balance, withdraw cash, deposit cash, or exit the program.
Performs the selected operation and prompts the user if they want to perform another operation.
Example
Here's a snippet of the main loop in the main function:
while (1) {
    start:
    system("cls"); // Use "clear" for Linux and "cls" for Windows

    cout << "\t=>WELCOME TO KHYBER BANK :)" << endl;
    cout << "\t\t======================================" << endl;
    cout << "\t\tPress 1. For View Balance       -o-o-o-" << endl;
    cout << "\t\tPress 2. For Cash Withdraw      -o-o-o-" << endl;
    cout << "\t\tPress 3. For Cash Deposit       -o-o-o-" << endl;
    cout << "\t\tPress 4. For Exit Program       -o-o-o-" << endl;
    cout << "\t\t---------------------------" << endl;
    cout << "\n\t\t Enter your choice: ";
    cin >> choice;
    cout << "\t\t---------------------------" << endl;

    switch (choice) {
        case 1:
            atm.showBalance();
            break;

        case 2:
            cout << "\n\t\t Enter the cash to withdraw: ";
            cin >> amount;
            atm.withdraw(amount);
            break;

        case 3:
            cout << "\n\t\t Enter the cash to deposit: ";
            cin >> d_amount;
            atm.deposit(d_amount);
            break;

        case 4:
            cout << "\n\t\tSuccessfully Terminated" << endl;
            exit(0);
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    cout << "----------------------" << endl;
    cout << "\tDo you want to try again?" << endl;
    cout << "\t==YES || NO== " << endl;
    cout << "\tPress y or Y for YES " << endl;
    cout << "\tPress n or N for NO  " << endl;
    cout << "\n\t\t Enter your choice: ";
    cout << "----------------------" << endl;
    cin >> option;
    if (option == 'y' || option == 'Y') {
        goto start;
    } else if (option == 'n' || option == 'N') {
        cout << "Program successfully terminated..." << endl;
        exit(0);
    }
}
Author
    Muhammad Ali 
License
This project is licensed under the MIT License - see the LICENSE file for details.
