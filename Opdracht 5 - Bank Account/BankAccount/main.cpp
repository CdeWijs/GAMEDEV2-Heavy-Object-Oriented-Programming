// Bankrekening.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "BankAccount.h"

using namespace std;

int main()
{
	BankAccount myAccount(0);

	// First transaction (deposit)
	Transaction* myTransaction = new Transaction(500.00);
	myAccount + *myTransaction;

	// Second transacton (withdrawal)
	Transaction *mySecondTransaction = new Transaction(-200.50);
	myAccount + *mySecondTransaction;

	delete(myTransaction);
	delete(mySecondTransaction);

	// Print balance and transactions of myAccount
	cout << myAccount << endl;

	char c;
	cin >> c;
	return 0;
}

