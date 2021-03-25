

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//if the age is greater than 20 0r less than 30
	//if(age>20 && age<30)	
	//if the age is equals to 20
	//if(age==20)	
	//if the age is greater than or equals to
	//if(age>=20)
	//if the age is less than or equals to
	//if(age<=20)	
	//if the age is greater than and is equals to
	//if(age>=20 || age==20)
	
	int age;
	cout << "Please enter your age : "<<endl;
	cin >> age;
	if (age>=20) 
	{
		cout << "You have entered the correct age"<<endl;
	}
	else 
	{
		cout << "You have entered the wrong age"<<endl;
	}
	return 0;
}


