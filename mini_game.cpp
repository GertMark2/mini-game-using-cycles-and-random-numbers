﻿#include <iostream>

using namespace std;
int main(){
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int rand_num = 1 + rand() % 15;
	bool stop = false;
	int user_input;
	do {
		cout << "Enter number: ";
		cin >> user_input;
		if (user_input != rand_num)
			cout << "Вы не угадали";
		else
			stop = true;

	} while (!stop);
	cout << "Вы  угадали!";
	return 0;