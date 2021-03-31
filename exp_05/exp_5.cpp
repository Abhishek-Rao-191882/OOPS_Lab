
#include<iostream>
#include<math.h>
#include<string>

using namespace std;

class Account{

private:
    string custName, IFSC;
    int Age, choice;
    long int aadharNo;
    long int mobNo;
    long int accNo;
    float balance;

    void openAccount(){
        accNo = rand();
        cout<<"\n Your Account has been created with account No.:"<< accNo << "\n";
    }

public:

    Account(string name, int age, long int aadhar_no, long int mob_no){
        custName = name;
        Age = age;
        aadharNo = aadhar_no;
        mobNo = mob_no;
        IFSC = "SBIN0RRPUGB";
        balance = 0;
        openAccount();
  }
  void getAccount();

  float setbalance (float b);

  float withdraw (float b);

  void display (void);

  float calc_interest();
};

void Account::getAccount(){
    cout<<"Account Holder Name: " << custName <<"\n";
    cout<<"Age: " << Age << "\n";
    cout<<"Mobile No: " << mobNo << "\n";
    cout<<"Aadhar No: " << aadharNo << "\n";
    cout<<"Account No: " << accNo << "\n";
    cout<<"IFSC No: " << IFSC << "\n";
}

float Account::setbalance(float amount)
{
  balance = balance + amount;
  return balance;
}

float Account::withdraw(float amount)
{
  if (balance <= 0 || balance < amount)
    {
      cout << "Insufficient balance unable to withdraw" << "\n";
    }
  else
    {
      balance = balance - amount;
      cout<< "Your Current balance is: " << balance<< "\n";
    }
  return balance;
}

void Account::display(void)
{
  if (balance <= 0)
    {
      cout << "Insufficient balance " << endl;
    }
  else
    {
      cout << "Your Current balance : " << balance << endl;
    }
}

float Account::calc_interest ()
{
  float r;
  int t;
  cout << "Enter rate of interest and time period(in year) : " << "\n";
  cin >> r >> t;

  float ci = balance * pow ((1 + r / 100), t);
  return ci;
}

int main (){
    string cust_name;
    int age, choice;
    float bal;
    long int aadhar_no, mob_no;

    cout<<"\n Enter Customer's Name: ";
    cin>>cust_name;

    cout<<"\n Enter Customer's Age: ";
    cin>>age;

    cout<<"\n Enter Customer's Aadhar No.: ";
    cin>>aadhar_no;

    cout<<"\n Enter Customer's Mobile No.: ";
    cin>>mob_no;

    Account a(cust_name, age, aadhar_no, mob_no);

      cout << "Welcome " <<cust_name<< " !! \n";
      cout << "Press 1 to Show Details" << "\n";
      cout << "Press 2 to Deposit Money" << "\n";
      cout << "Press 3 to Withdraw Money" << "\n";
      cout << "Press 4 to Current Balance" << "\n";
      cout << "Press 5 to Calculate Interest " << "\n";
      cout << "Press 6 to Exit" << "\n";

      do
        {
            cout << "-------------------------------------------------------------------" << endl;
            cout << "Enter your choice : " << endl;
            cin >> choice;
      switch (choice){

	    case 1:
	        {
	            a.getAccount();
	            break;
	            }

        case 2:
            {
                cout << "Enter the amount you want to Deposit : ";
                cin >> bal;
                a.setbalance(bal);
                break;
                }

        case 3:
            {
                cout << "Enter the amount you want to Withdraw :" << "\n";
                cin >> bal;
                a.withdraw(bal);
                break;
                }

	    case 4:
	        {
	            a.display();
	            break;
	            }

        case 5:
            {
                cout << "Interest = " << a.calc_interest () << "\n";
                break;
                }
	    case 6:
	        {
	            exit (0);
	            break;
	            }
	}
    }
  while (choice != 6);

  return 0;
}

