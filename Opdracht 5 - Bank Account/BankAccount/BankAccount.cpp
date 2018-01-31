#include "stdafx.h"
#include "BankAccount.h"
#include <iomanip>

BankAccount::BankAccount(double balance)
{
	this->balance = balance;
}

BankAccount::~BankAccount()
{
}

// Add transaction to vector transactionHistory and add the amount to the current balance
void BankAccount::operator+(const Transaction & transaction)
{
	transactionHistory.push_back(transaction);
	addToBalance(transaction.getAmount());
}

// Add transaction to vector transactionHistory and add the amount to the current balance
void BankAccount::operator-(const Transaction & transaction)
{
	transactionHistory.push_back(transaction);
	addToBalance(transaction.getAmount());
}

// Print out balance and transaction history
ostream & operator<<(ostream & lhs, const BankAccount& account)
{
	account.getBalance();
	account.getTransactionHistory();
	return lhs;
}

// Print out the balance
void BankAccount::getBalance() const
{
	cout << "Balance: " << "$" << balance << endl;
}

// Add amount to balance
const void BankAccount::addToBalance(const long double amount)
{
	balance += amount;
}

// Print out transactions in transactionHistory
void BankAccount::getTransactionHistory() const
{
	vector<Transaction>::const_iterator i;
	for (i = transactionHistory.begin(); i != transactionHistory.end(); ++i)
	{
		string text;
		if (i->getAmount() > 0)
		{
			text = "deposited";
		}
		else
		{
			text = "withdrawn";
		}

		cout << setprecision(2) << fixed;
		cout << i->getDate() << " " << i->getTime() << " " << text << " €" << i->getAmount() << endl;
	}
}

