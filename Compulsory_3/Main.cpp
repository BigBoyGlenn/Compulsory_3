//The user can make new folders(max 5) and files(max 10)
//The files must have name(changeble), size, date of creation
//An option to print the info of a given file and folder (including files inside a folder)
//
//A serch function


//class folder and a class file
//they need name, size and date of creation
//private string name, int size, int date, file[10], folder[5]
// 
//public folder(string, name,)
// public folder(string, name, int date,)
// public folder(string, name, int date, int size)(size is random)
//get name, get size, get date
// 
// main file, folder
// lookForLagrest("folder")
//


#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include "File.h"
#include "Folder.h"



int main()
{
	srand(time(NULL));

	Folder folder;

	folder.putfodata();
	
}