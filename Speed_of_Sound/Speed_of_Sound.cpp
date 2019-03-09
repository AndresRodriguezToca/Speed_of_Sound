#include "pch.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;


//Display Values Function
void display_value() {
	int counter;
	string value;
	ifstream inputFile;
	inputFile.open("info.txt");

	for (counter = 0; counter <= 3; counter++) {
		inputFile >> value;
		cout << value << "\n";
	}
}
//Display Option Fuction
void display_option(string name_user, string lastname1_user, string lastname2_user, string city_user) {
	cout << "\nYour name it's " << name_user << " " << lastname1_user << " " << lastname2_user << " your birth city is " << city_user;
}
//Write Values Function
void write_data() {
	string name, last_name1, last_name2, city;
	cout << "\nThe file name it's ---info.txt---";
	cout << "\nEnter Name:";
	cin >> name;
	cout << "\nEnter Last Name:";
	cin >> last_name1 >> last_name2;
	cout << "\nEnter Birth City:";
	cin >> city;

	ofstream outputFile;
	outputFile.open("info.txt");

	outputFile << name << endl;
	outputFile << last_name1 << endl;
	outputFile << last_name2 << endl;
	outputFile << city << endl;

	outputFile.close();

	display_option(name, last_name1, last_name2, city);
}
//Choice Option Function
void choice_option() {

	string name, last_name1, last_name2, city;

	cout << "\nEnter your Name:";
	cin >> name;
	cout << "\nEnter your Last Name:";
	cin >> last_name1 >> last_name2;
	cout << "\nEnter your Birth City:";
	cin >> city;

	ofstream outputFile;
	outputFile.open("info.txt");

	outputFile << name << endl;
	outputFile << last_name1 << endl;
	outputFile << last_name2 << endl;
	outputFile << city << endl;

	outputFile.close();

	display_option(name, last_name1, last_name2, city);
}

int main()
{
	string choice;
	short int number_choice;

	cout << "\t\t****************************************\n";
	cout << "\t\tHello and Welcome to my Program PreTest\n";
	cout << "\t\t****************************************";
	cout << "\n\nLet's continue should we? (Y/N)\n";
	cin >> choice;
	if (choice == "Y" || choice == "y") {
		cout << fixed << showpoint;
		cout << "\n\n\t\t*****MAIN MENU*****\n\n";
		cout << "\t1. Input Data\n";
		cout << "\t2. Display Data\n";
		cout << "\t3. Write to a File\n";
		cin >> number_choice;

		while (number_choice < 1 && number_choice > 2) {
			cout << "\n\nSorry that number it's invalid. Try again. (1-3)\n\n";
			cout << "\n\n\t\t*****MAIN MENU*****\n\n";
			cout << "\t1. Input Data\n";
			cout << "\t2. Display Data\n";
			cout << "\t3. Write to a File\n";
			cin >> number_choice;
		}
		if (number_choice == 1) {
			choice_option();
		}
		else if (number_choice == 2) {
			display_value();
		}
		else if (number_choice == 3) {
			write_data();
		}
		else {
			cout << "\nSomething goes wrong.";
			return 0;
		}

	}
	else {
		cout << "Ok then...";
	}
	return 0;
}
