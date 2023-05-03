#include <iostream >
#include<string>
using namespace std;
int main()
{
	int n; 
	cin >> n;
	for (int  i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		
		if (s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
		{
			cout << "yes\n";
		}
		else
			cout << "no\n";

	}
	return 0;


	//another code 


#include <iostream>
#include <string>
	using namespace std;

	int main() 
	{
		int t;
		cin >> t;

		for (int i = 0; i < t; i++) {
			string ticket;
			cin >> ticket;
			int sum_first_three = 0, sum_last_three = 0;
			for (int j = 0; j < 3; j++) {
				sum_first_three += ticket[j] - '0';
				sum_last_three += ticket[j + 3] - '0';
			}
			if (sum_first_three == sum_last_three)
				cout << "YES\n";
			else
				cout << "NO\n";
		}

		return 0;
	}
}