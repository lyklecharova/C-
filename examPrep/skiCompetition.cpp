#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

struct Competitor
{
	string name, country;
	int number;
	double score;
};

void inputCompetitors(Competitor competitors[], int &count)
{
	cout << "\nEnter the number of competitors (up to 20): ";
	cin >> count;
	while (count < 1 || count > 20)
	{
		cout << "Invalid number! Please enter again (1-20): ";
		cin >> count;
	}

	for (int i = 0; i < count; ++i)
	{
		cout << "\nCompetitor " << i + 1 << ":\n";
		cout << "Name: ";
		cin >> competitors[i].name;
		cout << "Number: ";
		cin >> competitors[i].number;
		do
		{
			cout << "Score (0-100): ";
			cin >> competitors[i].score;
		} while (competitors[i].score < 0 || competitors[i].score > 100);
		cout << "Country: ";
		cin >> competitors[i].country;
	}
}

void printCompetitors(Competitor competitors[], int count)
{
	cout << "\nList of all competitors:\n";
	cout << left << setw(15) << "Name"
		 << setw(10) << "Number"
		 << setw(10) << "Score"
		 << "Country" << endl;
	for (int i = 0; i < count; ++i)
	{
		cout << left << setw(15)
			 << competitors[i].name
			 << setw(10) << competitors[i].number
			 << setw(10) << competitors[i].score
			 << competitors[i].country << endl;
	}
}

void sortByScoreDesc(Competitor competitors[], int count)
{
	for (int i = 0; i < count - 1; ++i)
	{
		for (int j = i + 1; j < count; ++j)
		{
			if (competitors[i].score < competitors[j].score)
			{
				Competitor temp = competitors[i];
				competitors[i] = competitors[j];
				competitors[j] = temp;
			}
		}
	}
}

double calculateAverageScore(Competitor competitors[], int count)
{
	double totalScore = 0;
	for (int i = 0; i < count; ++i)
	{
		totalScore += competitors[i].score;
	}
	return totalScore / count;
}

void printBelowAverageByCountry(Competitor competitors[], int count, double average)
{
	string targetCountry;
	cout << "\nEnter the country for which you want to see the competitors: ";
	cin >> targetCountry;

	cout << "\nCompetitors from "
		 << targetCountry << " with a score below the average (" << average << "):\n";
	bool isFound = false;
	for (int i = 0; i < count; ++i)
	{
		if (competitors[i].country == targetCountry && competitors[i].score < average)
		{
			cout << left << setw(15)
				 << competitors[i].name << setw(10)
				 << competitors[i].number << setw(10)
				 << competitors[i].score
				 << competitors[i].country << endl;
			isFound = true;
		}
	}
	if (!isFound)
	{
		cout << "No such competitors.\n";
	}
}

int main()
{
	Competitor competitors[20];
	int count;

	inputCompetitors(competitors, count);

	printCompetitors(competitors, count);

	sortByScoreDesc(competitors, count);
	cout << "\nCompetitors sorted by descending score:\n";
	printCompetitors(competitors, count);

	double averageScore = calculateAverageScore(competitors, count);
	cout << "\nAverage score of competitors: " << fixed << setprecision(2) << averageScore << endl;

	printBelowAverageByCountry(competitors, count, averageScore);

	return 0;
}
