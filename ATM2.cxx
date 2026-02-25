#include "ATM.hxx"
#include "BaseDisplay.hxx"

<<<<<<< HEAD
ATM::ATM(Bank* bank, BaseDisplay* display)
{
    myBank = bank;
    myDisplay = display;
}

void ATM::viewAccount(int accountNumber, string password)
{
    if ( !(myCurrentAccount = myBank->getAccount(accountNumber, password)) )
    {
        myDisplay->showInfoToUser("Invalid account");
        //
    }
    if ( !(myCurrentAccount = myBank->getAccount(accountNumber, password)) )
    {
        myDisplay->showInfoToUser("Invalid account");
        //
    }
=======
ATM::ATM(Bank *bank, BaseDisplay *display) {
	myBank = bank;
	myDisplay = display;
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
>>>>>>> 92761805e8589b1a2e439a5e02dadaf1d053c7f1
}
