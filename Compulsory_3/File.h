#pragma once
#pragma warning (disable : 4996)
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


class File
{
private:
	char name[30];
	int size;
	struct tm* ti;


public:

	File();

	void getfidata();

	void putfidata();
};

File::File()
{

}

void File::getfidata()
{
	std::cin >> name;

	size = rand() % 100 + 1;

	time_t tt;

	time(&tt);

	ti = localtime(&tt);



}

void File::putfidata()
{
	std::cout << name << " ";
	std::cout << size << "mb ";
	std::cout << asctime(ti) << " ";
	std::cout << "\n";
}


