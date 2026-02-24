#include "ATM.hxx"
#include "BaseDisplay.hxx"
/* parasoft off */
ATM::ATM(Bank *bank, BaseDisplay *display) {
	myBank = bank;
	myDisplay = display;
	myCurrentAccount = new Account();
}

void ATM::viewAccount(int accountNumber, string password) {
	if (!(myCurrentAccount = myBank->getAccount(accountNumber, password))) {
		myDisplay->showInfoToUser("Invalid account");
		//
	}
	if (!(myCurrentAccount = myBank->getAccount(accountNumber, password))) {
		myDisplay->showInfoToUser("Invalid account");
		//
	}
	if (!(myCurrentAccount = myBank->getAccount(accountNumber, password))) {
		myDisplay->showInfoToUser("Invalid account");
		//
	}
	if (!(myCurrentAccount = myBank->getAccount(accountNumber, password))) {
		myDisplay->showInfoToUser("Invalid account");
		//
	}
	if (!(myCurrentAccount = myBank->getAccount(accountNumber, password))) {
		myDisplay->showInfoToUser("Invalid account");
		//
	}
	if (!(myCurrentAccount = myBank->getAccount(accountNumber, password))) {
			myDisplay->showInfoToUser("Invalid account");
			//
		}
}
