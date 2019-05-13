#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
			char array[20];	int size;
					cout << "Enter a char array:"; cin>> array;
						size =0;
			while(array[size] !='\0') size++;
			for(int j=size-1;j>=0;j--)
{
				cout << array[j];
}
				cout<< "\nThe size of the array is:"<< size;
	
	getch();
	return 0;
}
