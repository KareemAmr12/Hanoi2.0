#include <iostream>
using namespace std;



void Hanoi(int n, string source, string auxiliary, string destination)
{
	if (n == 1)
	{
		
		cout << "Moved disk #" << n << " from " << source << " to " << destination << endl;
	}
	else
	{
		Hanoi(n - 1, source, destination, auxiliary);
		
		cout << "Moved disk #" << n << " from " << source <<" to " << destination << endl;
		Hanoi(n - 1, auxiliary, source, destination);
		
	}

}

int main()
{
	int n;
	string source = "A";
	string auxiliary = "B";
	string destination = "C";

	cout << "Please, enter the number of disks: ";
	cin >> n;
	cout << endl;
	
	Hanoi(n,  source,  auxiliary,  destination);


	system("pause");
	return 0;
}