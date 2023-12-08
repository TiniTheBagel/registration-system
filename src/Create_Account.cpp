#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class user
{
	string username;
	string password;
	
	public:
		void create()
		{
			string username;
			string password;
	
			cout << "Username: " << endl;
			cin >> username;
			cout << endl;
	
			cout << "Password: " << endl;
			cin >> password;
			cout << endl;
		}
};