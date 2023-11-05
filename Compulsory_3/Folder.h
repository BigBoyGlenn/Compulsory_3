#pragma once

class Folder
{
	int numberOfFiles;
	int numberOfFolders;
	char name[30];
	int size;
	struct tm* ti;
	File files[10];
	Folder* folders;

public:
	Folder();

	void addFile(File file);

	void getfodata();

	void putfodata();
};



inline Folder::Folder()
{
	numberOfFiles = 0;

	size = rand() % 100 + 1;

	time_t tt;

	time(&tt);

	ti = localtime(&tt);

	folders = NULL;

	std::cout << "Folder name: ";
	std::cin >> name;

	std::cout << "Enter number of folders in " << name << ": ";
	int j;
	std::cin >> j;

	if (j > 5)
	{
		std::cout << "\x1b[31m""Error max folders is 5 ""\x1b[0m""(folders set to 5)\n" ;
		j = 5;
	}

	numberOfFolders = j;

	folders = new Folder[j];

	std::cout << "Enter number of files in " << name << ": ";
	int m;
	std::cin >> m;

	if (m > 10)
	{
		std::cout << "\x1b[31m""Error max files is 10""\x1b[0m"" (files set to 10)\n";
		m = 10;
	}

	for (int i = 0; i < m; i++)
		addFile(File());
}

inline void Folder::addFile(File file)
{
	std::cout << "File name for file in " << name << ": ";

	file.getfidata();
	files[numberOfFiles] = file;
	numberOfFiles++;
}


void Folder::getfodata()
{
}

void Folder::putfodata()
{
	std::cout << "Folder Name: " << name << " \n";
	std::cout << "Folder size: " << size << "mb \n";
	std::cout << "Date of creation: " << asctime(ti) << " \n";
	std::cout << "\n";

	

	std::cout << "Here are the folders in " << name << ":\n";

	int j;

	for (j = 0; j < numberOfFolders; j++)
		folders[j].putfodata();

	std::cout << "Here are the files in " << name << ":\n";

	for (j = 0; j < numberOfFiles; j++)
		files[j].putfidata();
}
