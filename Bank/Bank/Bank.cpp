#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#include "Bank.h"

// this function creates a header for the table without monthly deposits
void Bank::printHeaderA() {
	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "==============================================================" << endl;
	cout << "Year" << "\t" << "\t" << "Year End Balance" << "\t" << "Year End Earned Interest" << endl;
	cout << "--------------------------------------------------------------" << endl;
}

// this function creates a header for the table with monthly deposits
void Bank::printHeaderB() {
	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "==============================================================" << endl;
	cout << "Year" << "\t" << "\t" << "Year End Balance" << "\t" << "Year End Earned Interest" << endl;
	cout << "--------------------------------------------------------------" << endl;
}

// this function prints yearly outcome with balance and interest earned
void Bank::printDetails(int year, double yearEndBalance, double interestEarned) {
	cout << fixed << setprecision(2);
	cout << year << "\t" << "\t" << '$' << yearEndBalance << "\t" << "\t" << "\t" << '$' << interestEarned << endl;
}

// this function calculates the balance of an account with a monthly deposit
double Bank::calculateBalanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears) {
	int numMonths = 0;
	int yearTracker = 0;
	double interestDecimal = (interestRate / 100) / 12; // monthly interest amount as decimal
	double openingAmount = initialInvestment; // initialize opening amount with initial investment
	double closingAmount = 0; //variable for combining total that includes monthly deposit and interest
	double interestEarned = 0; // variable for compounding interest
	double yearEndInterest = 0; // variable for tracking interest earned in a year

	numMonths = numberOfYears * 12; //convert years into months for compound interest calculation
	while (numMonths > 0) {
		interestEarned = (openingAmount + monthlyDeposit) * interestDecimal; // compound interest formula
		closingAmount = openingAmount + monthlyDeposit + interestEarned; // add all values for closing amount
		openingAmount = closingAmount; // move closing amount to opening amount to restart loop
		yearEndInterest = yearEndInterest + interestEarned; // update interest earned in a year
		numMonths = numMonths - 1; // update numMonths to count down for loop
		// once full year is reached print account details 
		if ((numMonths % 12) == 0) {
			yearTracker = yearTracker + 1;
			printDetails(yearTracker, openingAmount, yearEndInterest);
			yearEndInterest = 0; // reset interest earned in a year once printed
		}
	}

	return openingAmount;
}

// this function calculates the balance of an account without a monthly deposit
double Bank::calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears) {
	int numMonths = 0;
	int yearTracker = 0;
	double interestDecimal = (interestRate / 100) / 12; // monthly interest as variable
	double openingAmount = initialInvestment; // initialize variable with initial investment
	double closingAmount = 0; // variable for combining opening amount and interest
	double interestEarned = 0; // variable for compound interest
	double yearEndInterest = 0; // variable for tracking interest earned in a year

	numMonths = numberOfYears * 12; // convert years into months for compound interest calculation
	while (numMonths > 0) {
		interestEarned = openingAmount * interestDecimal; // compound interest formula
		closingAmount = openingAmount + interestEarned; // 
		openingAmount = closingAmount; // move closing amount to opening amount for the start of the next loop
		yearEndInterest = yearEndInterest + interestEarned; // update interest earned within a year
		numMonths = numMonths - 1; // update numMonths to countdown for loop
		//once full year is reached print account details
		if ((numMonths % 12) == 0) {
			yearTracker = yearTracker + 1;
			printDetails(yearTracker, openingAmount, yearEndInterest);
			yearEndInterest = 0; // reset interest earned in a year for the next year
		}
	}

	return openingAmount;
}
