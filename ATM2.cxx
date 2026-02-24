#include "ATM.hxx"
#include "BaseDisplay.hxx"

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
    if ( !(myCurrentAccount = myBank->getAccount(accountNumber, password)) )
          {
              myDisplay->showInfoToUser("Invalid account");
              //
          }
}
