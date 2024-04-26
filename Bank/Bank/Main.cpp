#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#include "Bank.h"

/*

This program is a compound interest calculator that displays balance
and interest values for each year based on user input

Author: Kenneth Wilkerson
Date: December 4, 2022

*/


int main() {
	double startingInvestment; //initial investment variable for bank object
	double annualInterest; // interest variable for bank object
	double monthlyDeposit; // monthly deposit variable for bank object
	int numYears; // years variable for bank object
	Bank firstAccount; // bank object to call functions

	// header for user input
	cout << "**********************************" << endl;
	cout << "*********** Data Input ***********" << endl;
	
	// prompt user for initial investment amount
	cout << "Initial Investment Amount: $";
	cin >> startingInvestment;
	cout << endl;
	
	// prompt user for monthly deposit amount
	cout << "Monthly Deposit: $";
	cin >> monthlyDeposit;
	cout << endl;
	
	// prompt user for annual interest percentage
	cout << "Annual Interest: %";
	cin >> annualInterest;
	cout << endl;
	
	// prompt user for number of years to evaluate
	cout << "Number of years: ";
	cin >> numYears;
	cout << endl;

	system("pause");

	// print table of yearly outcome of balance and interest without monthly deposit
	firstAccount.printHeaderA();
	firstAccount.calculateBalanceWithoutMonthlyDeposit(startingInvestment, annualInterest, numYears);
	cout << endl;

	// print table of yearly outcome of balance and interest with monthly deposit
	firstAccount.printHeaderB();
	firstAccount.calculateBalanceWithMonthlyDeposit(startingInvestment, monthlyDeposit, annualInterest, numYears);
	cout << endl;




	return 0;
}
