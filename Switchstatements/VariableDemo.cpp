

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//switch statement
 
	char grade;
	cout << "Please enter the grade" << endl;
	cin >> grade;
	switch (grade)
	{
	case 'A': cout << "Excellent" << endl;
		break;
	case 'B': cout << "Very good" << endl;
		break;
	case 'C': cout << "Passed" << endl;
		break;
	default:
		cout<<"Invalid grade"<<endl;
		break;
	}

	return 0;
}


