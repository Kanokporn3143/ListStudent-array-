#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void Liststudent  (string name[] , int score[] , int student);
char Calgrade (int score[] , int student);
int main()
{
	int student , score[10];
	string name[10];
	
	cout << " Input Number of student : ";
	cin >> student;
	for(int i = 0; i < student; i++){
		cout << " Input Name : ";
		cin >> name[i];
		cout << " Input score " << i+1 << " : ";
		cin >> score[i];
		cout << endl;
	}
	Liststudent  (name , score , student);
	return(0);
}
void Liststudent  (string name[] , int score[] , int student)
{
	for(int i = 0; i < student; i++)
	{
		cout << " Student Name : " << name[i] << " Score " << i+1 << " = " << score[i] << " Your grade is " << Calgrade(score,i) << endl;
	}
	cout << "-----------------------------------------------------------------------------------\n";
}
char Calgrade (int score[] , int i)
{
	char grade;
	if (score[i] > 79)
	{
		grade = 'A';
	}
	else if (score[i] > 69)
	{
		grade = 'B';
	}
	else if (score[i] > 59)
	{
		grade = 'C';
	}
	else if (score[i] > 49)
	{
		grade = 'D';
	}
	else if (score[i] < 49)
	{
		grade = 'D';
	}
	return(grade);
}


