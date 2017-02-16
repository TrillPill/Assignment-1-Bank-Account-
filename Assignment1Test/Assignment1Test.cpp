/*
Michael Shearer
Assignment 1 "Bank Account"
Professor Kelo
February 14, 2017
*/



#include "stdafx.h"
#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
	double withdrawl, deposit, check, balance, begBalance, endingBalance;
	double totalWithdrawls = 0;
	double totalDeposits = 0;
	double totalChecks = 0;
	double endingBalance = 0;
	int numW = 0;
	int numD = 0;
	int numC = 0;
	char type;
	double withdrawls[25];
	double deposits[25];
	double checks[25];

	cout << "Please enter a beginning balance: " << endl;
	cin >> begBalance;
	balance = begBalance;
	cout << "Please enter a transaction type. You may\n (W)Withdrawl\n (D)Deposit\n (C)Check\n (Q)Quit" << endl;
	cin >> type;
	while (type != 'Q' && type != 'q'){
		switch (type) {
		case 'W':
		case 'w':
			int i;
			cout << "Please enter an amount to withdrawl: " << endl;
			cin >> withdrawl;
			balance -= withdrawl;
			totalWithdrawls += withdrawl;
			numW++;
			for (i = 0; i < numW; i++) {
				withdrawls[i] = withdrawl;
			}
			break;
		case 'D':
		case 'd':
			int j;
			cout << "Please enter an amount to deposit: " << endl;
			cin >> deposit;
			balance += deposit;
			totalDeposits += deposit;
			numD++;
			for (j = 0; j < numD; j++) {
				deposits[j] = deposit;
			}
			break;
		case 'C':
		case 'c':
			int k;
			cout << "Please enter a check amount: " << endl;
			cin >> check;
			balance -= check;
			totalChecks += check;
			numC++;
			for (k = 0; k < numC; k++) {
				checks[k] = check;
			}
			break;
		default:
			cout << "Sorry, but the choice you have entered is invalid." << endl;
		}
		cout << "Please enter a transaction type. You may\n (W)Withdrawl\n (D)Deposit\n (C)Check\n (Q)Quit" << endl;
		cin >> type;
	}
	endingBalance = begBalance + totalDeposits - totalWithdrawls - totalChecks;
	cout << "Transaction Summary" << endl;
	cout << "_____________" << endl;
	cout << begBalance << endl;

	int i, j, k;

	for (i = 0; i < numD; i++) {
		cout << deposits[i] << endl;
	}
	cout << "_____________";
	cout << totalDeposits << endl;

	for (j = 0; j < numW; j++) {
		cout << withdrawls[j] << endl;
	}
	cout << "_____________";
	cout << totalWithdrawls << endl;

	for (k = 0; k < numC; k++) {
		cout << checks[k] << endl;
	}
	cout << "_____________";
	cout << totalChecks << endl;
	cout << "_____________";
	cout << endingBalance << endl;
	return 0;
}
