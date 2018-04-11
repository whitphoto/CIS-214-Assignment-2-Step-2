//Nathan Whitchurch
//Programming Assignment #2


#include <iostream>
#include <stdlib.h>
#include "BankAccount.h"
using namespace std;




/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int accountIn;
	double balanceIn;
	double transfer;

	//creates two new instances of BankAccount 
	BankAccount account1;
	BankAccount account2;



	//prompts user to input bank account number and stores it in account1
	cout << "\nEnter your first bank account number ";
	cin >> accountIn;
	account1.accountNumber = accountIn;
	
	//creates check digit and stores it in account1
	account1.checkDigit = accountIn % 5;


	//Prompts user to enter an account balance and stores in in account1
	cout << "\nEnter the balance for your first account ";
	cin >> balanceIn;
	account1.accountBalance = balanceIn;
	cout << account1.accountBalance;
	
	
	//prompts user to input bank account number and stores it in account2
	cout << "\nEnter your second bank account number ";
	cin >> accountIn;
	account2.accountNumber = accountIn;
	
	//creates check digit and stores it in account1
	account2.checkDigit = accountIn % 5;	

	//Prompts user to enter an account balance and stores in in account2
	cout << "\nEnter the balance for your second account ";
	cin >> balanceIn;
	account2.accountBalance = balanceIn;
	cout << account2.accountBalance;
	
	//prompts user to enter a transfer ammount and stores it in the transer variable
	cout << "\nEnter an ammount you wish to transfer from account 1 to account 2\n";
	cin >> transfer;
	
	
	//transfers money between the two accounts
	account1.accountBalance = account1.accountBalance - transfer;
	account2.accountBalance = account2.accountBalance + transfer;
	
	
	//displays the account number plus check digit and the new account balance	
	
	cout << "\nAccount number " << account1.accountNumber << account1.checkDigit << " now has a balance of: " << account1.accountBalance;
	
	cout << "\nAccount number " << account2.accountNumber << account2.checkDigit << " now has a balance of: " << account2.accountBalance;
	
	
	

	
		return 0;
	
}
