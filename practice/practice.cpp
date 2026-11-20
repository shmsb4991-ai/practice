#include <iostream>
using namespace std;
int main()
{
	int subjects;
	cout << "Please Enter The number of Subjects \n:";
		if (!(cin >> subjects)) 
		{
			cout << "Error! Enter a number between 1 and 10!\n";
			return 1;
		}
	if (subjects < 1)
	{
		cout << "Enter a non-negative numbers!\n";
		return 1;
	} 
	if (subjects > 10) 
	{
		cout << "Error! the max number is 10!\n";
		return 1;
	}
	int total = 0;
	for (int i = 1; i <= subjects; i++)
	{
		int score;
		cout << "Please Enter The score of each subject " << i << ":" << endl;
		if (!(cin >> score))
		{
			cout << "Please Enter Valid number!\n";
			return 1;
		}

		if (score < 0 && score > 100)
		{
			cout << "The max number is 100!\n";
			return 1;
		}
		 total = total + score;
	}
	
	cout << "Your Total score is " << total << endl;
	if (total >= 200)
	{
		cout << "Congratulations! You passed!\n";
	}
	else 
	{
		cout << "You Failed! Try Harder Next Time!\n";
	}
	return 0;
}
