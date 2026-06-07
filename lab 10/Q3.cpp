//#include <iostream>
//using namespace std;
//class Account {
//protected:
//	int accountNumber;
//	float balance;
//public:
//	Account(int accNo, float bal) : accountNumber(accNo),
//		balance(bal) {
//	}
//	virtual void debit(float amount) = 0;
//	virtual void credit(float amount) = 0;
//	virtual void print() const = 0;
//};
//class CurrentAccount : public Account {
//protected:
//	float minimumBalance;
//	float serviceCharge;
//public:
//	CurrentAccount(int accNo, float bal, float minBal, float
//		charge)
//		: Account(accNo, bal), minimumBalance(minBal),
//		serviceCharge(charge) {
//	}
//	void debit(float amount) override {
//		if (balance - amount < minimumBalance) {
//			cout << "Insufficient funds" << endl;
//		}
//		else {
//			balance -= amount;
//			cout << "Debited: " << amount << endl;
//		}
//		if (balance < minimumBalance) {
//			balance -= serviceCharge;
//			cout << "Service charge applied: " << serviceCharge
//				<< endl;
//		}
//	}
//	void credit(float amount) override {
//		balance += amount;
//		cout << "Credited: " << amount << endl;
//	}
//	void print() const override {
//		cout << "Account Number: " << accountNumber << endl;
//		cout << "Balance: " << balance << endl;
//		cout << "Minimum Balance: " << minimumBalance << endl;
//		cout << "Service Charge: " << serviceCharge << endl;
//	}
//	// TODO: Override debit, credit, and print
//};
//class SavingAccount : public Account {
//protected:
//	float interestRate;
//public:
//	SavingAccount(int accNo, float bal, float rate)
//		: Account(accNo, bal), interestRate(rate) {
//	}
//	void credit(float amount) override {
//		balance += interestRate * balance / 100;
//		balance += amount;
//		cout << "Credited: " << amount << endl;
//
//	}
//	void debit(float amount) override {
//		if (balance - amount < 0) {
//			cout << "Insufficient funds" << endl;
//		}
//		else {
//			balance -= amount;
//			cout << "Debited: " << amount << endl;
//		}
//	}
//	void print() const override {
//		cout << "Account Number: " << accountNumber << endl;
//		cout << "Balance: " << balance << endl;
//		cout << "Interest Rate: " << interestRate << "%" << endl;
//	}
//	// TODO: Override debit, credit, and print
//};
//int main() {  
//   // Create a CurrentAccount object  
//   CurrentAccount currentAcc(1001, 5000.0f, 1000.0f, 50.0f);  
//   cout << "Current Account Details:" << endl;  
//   currentAcc.print();  
//   cout << endl;  
//
//   // Perform debit and credit operations on CurrentAccount  
//   currentAcc.debit(4500.0f);  
//   currentAcc.credit(2000.0f);  
//   cout << "Updated Current Account Details:" << endl;  
//   currentAcc.print();  
//   cout << endl;  
//
//   // Create a SavingAccount object  
//   SavingAccount savingAcc(2001, 3000.0f, 5.0f);  
//   cout << "Saving Account Details:" << endl;  
//   savingAcc.print();  
//   cout << endl;  
//
//   // Perform credit operation on SavingAccount  
//   savingAcc.credit(1000.0f);  
//   cout << "Updated Saving Account Details:" << endl;  
//   savingAcc.print();  
//
//   return 0;  
//}