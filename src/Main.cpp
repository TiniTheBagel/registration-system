#include <iostream>
#include <vector>
#include "Create_Account.cpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Initialize the accounts vector
std::vector<user> accounts;

//Initialize the create method
void create();

void createNewAccount()
{
	//Initialize the user class a
	//Create an account for user a
	//Add the account into the accounts vector 
	user a;
	a.create();
	accounts.push_back(a);
}

int main()
{
	
}