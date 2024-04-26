#ifndef BANK_H
#define BANK_H

using namespace std;

class Bank {
	public:
		double calculateBalanceWithMonthlyDeposit(double initialInvestment, double monthlyDeposit, double interestRate, int numberOfYears);
		double calculateBalanceWithoutMonthlyDeposit(double initialInvestment, double interestRate, int numberOfYears);
		void printDetails(int year, double yearEndBalance, double interestEarned);
		void printHeaderA();
		void printHeaderB();
	
};
#endif