#pragma once
#include <iostream>
#include <vector>
#include "Transaction.h"

using namespace std;

class BankAccount
{
public:
	BankAccount(double balance);
	~BankAccount();

	void operator+(const Transaction& transaction);
	void operator-(const Transaction& transaction);

	friend ostream& operator<<(ostream& lhs, const BankAccount& account);

	void getBalance() const;
	const void addToBalance(const long double amount);
	void getTransactionHistory() const;

private:
	long double balance;
	vector<Transaction> transactionHistory;

};

