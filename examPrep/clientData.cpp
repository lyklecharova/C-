#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Client
{
	string name, email, phone;
	double turnover;
};

int main()
{
	const int MAX_CLIENTS = 50;
	Client clients[MAX_CLIENTS];
	int numClients = 0;
	Client tempClient;

	cout << "Enter client data (up to 50 clients): " << endl;

	// Input client data
	while (numClients < MAX_CLIENTS)
	{
		cout << "Client " << numClients + 1 << ":" << endl;

		cout << "Name: ";
		cin >> tempClient.name;

		cout << "Email: ";
		cin >> tempClient.email;

		cout << "Phone: ";
		cin >> tempClient.phone;

		cout << "Turnover (greater than 1000): ";
		cin >> tempClient.turnover;

		if (tempClient.turnover > 1000)
		{
			clients[numClients] = tempClient;
			numClients++;
		}
		else
		{
			cout << "Turnover must be greater than 1000. Please try again." << endl;
		}

		char more;
		cout << "Do you want to enter another client (y/n)? ";
		cin >> more;
		if (more != 'y' && more != 'Y')
		{
			break;
		}
	}

	// Display list of all clients
	cout << "\nList of all clients:" << endl;
	for (int i = 0; i < numClients; i++)
	{
		cout << "Name: " << clients[i].name << endl;
		cout << "Email: " << clients[i].email << endl;
		cout << "Phone: " << clients[i].phone << endl;
		cout << "Turnover: " << clients[i].turnover << endl;
		cout << "------------------------------" << endl;
	}

	// Calculate and display total turnover
	double totalTurnover = 0;
	for (int i = 0; i < numClients; i++)
	{
		totalTurnover += clients[i].turnover;
	}
	cout << "\nTotal turnover from all clients: " << totalTurnover << endl;

	//  Display the client with the highest turnover
	if (numClients > 0)
	{
		int maxIndex = 0;
		for (int i = 1; i < numClients; i++)
		{
			if (clients[i].turnover > clients[maxIndex].turnover)
			{
				maxIndex++;
			}
		}
		cout << "\nClient with the highest turnover:" << endl;
		cout << "Name: " << clients[maxIndex].name << endl;
		cout << "Email: " << clients[maxIndex].email << endl;
		cout << "Phone: " << clients[maxIndex].phone << endl;
		cout << "Turnover: " << clients[maxIndex].turnover << endl;
	}

	//  Display all clients sorted alphabetically by name
	for (int i = 0; i < numClients - 1; i++)
	{
		for (int j = i + 1; j < numClients; j++)
		{
			if (clients[i].name > clients[j].name)
			{
				// Swap clients
				Client temp = clients[i];
				clients[i] = clients[j];
				clients[j] = temp;
			}
		}
	}

	cout << "\nList of all clients sorted alphabetically:" << endl;
	for (int i = 0; i < numClients; i++)
	{
		cout << "Name: " << clients[i].name << endl;
		cout << "Email: " << clients[i].email << endl;
		cout << "Phone: " << clients[i].phone << endl;
		cout << "Turnover: " << clients[i].turnover << endl;
		cout << "------------------------------" << endl;
	}

	return 0;
}
