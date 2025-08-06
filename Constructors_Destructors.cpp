//Problem 2: Contructors and Destructors
//Create a BankAccount class with :
//1. Private attributes : accountNumber, accountHolderName, balance.
//2. A constructor to initialize these values.
//3. Methods to deposit(), withdraw(), and displayBalance().
//4. A destructor that prints a message when an object is destroyed.




#include<iostream>
#include<string>

using namespace std;

class BankAccount {

private:
	int accountNumber=0;
	string accountHolderName;
	float balance=0;

public:
	BankAccount(int an, string ahn, float b) {
		accountNumber = an;
		accountHolderName = ahn;
		balance = b;
	}

	~BankAccount() {

	};

	void setAccNumber(int an) {
		accountNumber = an;
	}

	int getAccNumber() {
		return accountNumber;
	}

	void setAccHolderName(string ahn) {
		accountHolderName = ahn;
	}

	string getAccHolderName() {
		return accountHolderName;
	}

	void setBalance(float b) {
		balance = b;
	}

	int getBalance() {
		return balance;
	}

	void displayInfo() {
		cout << "Account Holder Name: " << accountHolderName << endl;
		cout << "Account Number: " << accountNumber << endl;
	}

	void displayBalance() {
		cout << "Current accoutn balance is:" << balance << endl;
	}

	void deposit(float amount) {
		balance += amount;
		cout << "Updated balance upon deposit is:" << balance << endl;
	}

	void withdraw(float amount) {
		balance -= amount;
		cout << "Updated balance upon withdrawal is:" << balance << endl;
	}
};

int main() {

	BankAccount b1(123, "Strange", 1000);


	cout << "Welcome to Bank Managemnet System" << endl;
	cout << "1. Press 1 to display account information" << endl;
	cout << "2. Press 2 to check your balance" << endl;
	cout << "3. Press 3 to deposit money" << endl;
	cout << "4. Press 4 to withdrwa money" << endl;
	cout << "5. Press 5 to exit the system" << endl<<endl;

	int choice=0;
	float add, remove;
	


	while (choice != 5) {

		cout << "Select your option" << endl;
		cin >> choice;

		if (choice == 1) {
			b1.displayInfo();
		}

		else if (choice == 2) {
			b1.displayBalance();
		}

		else if (choice == 3) {
			cout << "How much money do you want to deposit?" << endl;
			cin >> add;

			b1.deposit(add);
		}

		else if (choice == 4) {
			cout << "How much money do you want to withdraw?" << endl;
			cin >> remove;

			b1.withdraw(remove);
		}

		else if (choice == 5) {
			cout << "Good Bye!" << endl;
		}

		else {
			cout << "Invalid option selected, Try again!" << endl;
		}
	}

	return 0;
}




//Corrected and Optimized Code

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
	int accountNumber;
	string accountHolderName;
	float balance;

public:
	BankAccount(int an, string ahn, float b)
		: accountNumber(an), accountHolderName(ahn), balance(b) {
	}

	~BankAccount() {
		cout << "Account #" << accountNumber << " destroyed." << endl;
	}

	// Setters and Getters
	void setAccNumber(int an) { accountNumber = an; }
	int getAccNumber() const { return accountNumber; }

	void setAccHolderName(string ahn) { accountHolderName = ahn; }
	string getAccHolderName() const { return accountHolderName; }

	void setBalance(float b) { balance = b; }
	float getBalance() const { return balance; }

	// Display Methods
	void displayInfo() const {
		cout << "Account Holder: " << accountHolderName << endl;
		cout << "Account Number: " << accountNumber << endl;
	}

	void displayBalance() const {
		cout << "Current account balance: " << balance << endl;
	}

	// Transaction Methods
	void deposit(float amount) {
		if (amount <= 0) {
			cout << "Invalid amount!" << endl;
		}
		else {
			balance += amount;
			cout << "Updated balance: " << balance << endl;
		}
	}

	void withdraw(float amount) {
		if (amount <= 0) {
			cout << "Invalid amount!" << endl;
		}
		else if (amount > balance) {
			cout << "Insufficient balance!" << endl;
		}
		else {
			balance -= amount;
			cout << "Updated balance: " << balance << endl;
		}
	}
};

int main() {
	BankAccount b1(123, "Strange", 1000);

	cout << "Welcome to Bank Management System" << endl;
	cout << "1. Display account information" << endl;
	cout << "2. Check balance" << endl;
	cout << "3. Deposit money" << endl;
	cout << "4. Withdraw money" << endl;
	cout << "5. Exit" << endl << endl;

	int choice = 0;
	float amount;

	while (choice != 5) {
		cout << "Select an option: ";
		cin >> choice;

		switch (choice) {
		case 1:
			b1.displayInfo();
			break;
		case 2:
			b1.displayBalance();
			break;
		case 3:
			cout << "Enter deposit amount: ";
			cin >> amount;
			b1.deposit(amount);
			break;
		case 4:
			cout << "Enter withdrawal amount: ";
			cin >> amount;
			b1.withdraw(amount);
			break;
		case 5:
			cout << "Goodbye!" << endl;
			break;
		default:
			cout << "Invalid option!" << endl;
		}
	}
	return 0;
}