#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Student{
	public:
		Student()
		{
			int GPA = 0;
		}
		void display();
		void details();
		void registerStudent();
		void keyInMarks();
		void menu();
		void markAnalysis();
	private:
		int number, academicYear, semester;
		string name, department, course;
		string regNumber, unitCode;
		int units, cat, attendance, exam, project, GPA;
		string grade, comment, level;
};
void Student::menu()
{
	std::cout << "Sunshine College Student Database Management.\n" << std::endl;
	std::cout << "Select the approprate number."<< std::endl;
	std::cout << "1.......Enter student details" << std::endl;
	std::cout << "2.......Register student." << std::endl;
	std::cout << "3.......Key in course works." << std::endl;
	std::cout << "4.......Transcript display." << std::endl;
	std::cin >> number;
	while(number >= 1 && number <= 3 && number != -1)
	{
		switch(number)
		{
			case 1:
				Student::details();
			break;
			case 2:
				Student::registerStudent();
			break;
			case 3:
				Student::keyInMarks();
			break;
			case 4:
				Student::display();
			break;
			default:
				std::cout << "Invalid Input. Try Again" << std::endl;
				Student::menu();
		}
	}
}
void Student::details()
{
	string department;
	std::cout << "DO NOT USE WHITESPACES." << std::endl;
	std::cout << "Student Details" << std::endl;
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << " \n" << std::endl;
	std::cout << "Registration Number: ";
	std::cin >> regNumber;
	std::cout << " \n" << std::endl;
	std::cout <<"Academic Year: ";
	std::cin >> academicYear;
	std::cout << " \n" << std::endl;
	std::cout << "Semester: ";
	std::cin >> semester;
	std::cout << " \n" << std::endl;
	std::cout << "Program: ";
	std::cin >> course;
	std::cout << " \n" << std::endl;
	std::cout << "Department: ";
	std::cin >> department;
	std::cout << " \n" << std::endl;
	Student::keyInMarks();
}
void Student::registerStudent()
{
	std::cout << "Registering New Student." << endl;
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << " \n";
	std::cout << "Year: ";
	std::cin >> academicYear;
	std::cout << " \n";
	std::cout << "Registration Number: ";
	std::cin >> regNumber;
	std::cout << " \n";
	std::cout << "Semester: ";
	std::cin >> semester;
	std::cout << " \n";
	std::cout << "Program: ";
	std::cin >> course;
	std::cout << " \n";
	std::cout << "Department: ";
	std::cin>> department;
	std::cout << " \n" << std::endl;
	std::cout << "Student Registered.\n" << std::endl;
	Student::keyInMarks();
}
void Student::keyInMarks()
{
	int cat, project, exam, attendance;
	string unitCode;
	string unitName;
	std::cout << "Enter Student's course work. \n" << std::endl;
	
	//
	std::cout << "Registering New Student." << endl;
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << " \n";
	std::cout << "Year: ";
	std::cin >> academicYear;
	std::cout << " \n";
	std::cout << "Registration Number: ";
	std::cin >> regNumber;
	std::cout << " \n";
	std::cout << "Semester: ";
	std::cin >> semester;
	std::cout << " \n";
	std::cout << "Program: ";
	std::cin >> course;
	std::cout << " \n";
	std::cout << "Department: ";
	std::cin>> department;
	std::cout << " \v" << std::endl;
	//
	
	std::cout << "Unit Code: ";
	std::cin >> unitCode;
	std::cout << "Number of Units done.\n";
	std::cin >> units;
	std::cout << std::endl;
	if( units <= 7 && units >= 3 )
	{
			std::cout << "CAT marks: ";
			std::cin >> cat;
			std::cout << " \n" << std::endl;
			if( cat >= 0 && cat <= 15)
			{
				std::cout << "Project marks: ";
				std::cin >> project;
				std::cout << " \n" << std::endl;
				if( project >=0 && project <= 20)
				{
					std::cout << "Attendance Marks: ";
					std::cin >> attendance;
					std::cout << " \n" << std::endl;
					if( attendance >= 0 && attendance <= 5)
					{
						std::cout << "Exam Marks: ";
						std::cin >> exam;
						std::cout << " \n" << std::endl;
						if( exam >= 0 && exam <= 60)
						{
							int GPA, n;
							GPA = cat + project + attendance + exam;
							std::cout << "Average points are: " << GPA << std::endl;
							std::cout << "Enter 4 to proceed to display.";
							std::cin >> n;
							if( n == 4)
							{
							Student::display();	
							}
							else 
							{
								std::cout << " Invalid Input try again with a different input." << std::endl;
								std::cin >> n;
								
							}
 						}
						else 
						{
							std::cout << "Invalid Input." << std::endl;
							std::cout << " Invalid Input try again with a different input." << std::endl;
							std::cin >> exam;
						}
					}
					else 
					{
						std::cout << "Invalid Input." << std::endl;
						std::cout << " Invalid Input try again with a different input." << std::endl;
						std::cin >> attendance;
					}
				}
				else 
				{
					std::cout << "Invalid Input." << std::endl;
					std::cout << " Invalid Input try again with a different input." << std::endl;
					std::cin >> project;
				}
	
			}
			else
			{
				std::cout << "Invalid Input." << std::endl;
				std::cout << " Invalid Input try again with a different input." << std::endl;
				std::cin >> cat;
			}
		
		}
	if( units > 7){
		std::cout << "Number of Units Exceeded. They should not be more than 7.\nTry Again with a different input.\n" << std::endl;
		std::cin >> units;
	} else if( units < 3)
	{
		std::cout << "Number of units is too low. There should be a minimum of 3\nTry Again with a different input.\n" << std::endl;
		std::cin >> units;
	}
	Student::markAnalysis();
}
void Student::display()
{
	std::cout << "Student Transcript." << std::endl;
	std::cout << "Suncshine International College." << std::endl;
	std::cout << "Registration Number: " << regNumber << std::endl;
	std::cout << "Full names: " << name << std::endl;
	std::cout << "Department:" << department << std::endl;
	std::cout << "Academic Year: " << academicYear << endl;
	std::cout << "Program: " << course << " \t"<< std::endl;
	Student::markAnalysis();
	std::cout << "Unit Code " << "Unit Name " << "CAT (x/ 15) " << " Attendance (x/ 5) " << "Project (x/ 20) " << "Exam (x/ 60) " << std::endl;
	std::cout << unitCode << setw(3) << course << setw(4) << cat << setw(3) << attendance << setw(5) << project << setw(5) << exam << setw(3) << std::endl;
	std::cout << "Average (x/ 100):....." << GPA << setw(4) << std::endl;
	std::cout << "Grade:................" << grade << setw(3) << std::endl;
	std::cout << "Remark:..............." << comment << setw(5) << std::endl;
	std::cout << level << std::endl;
}
void Student::markAnalysis()
{
	if(GPA >= 70 && GPA <= 100)
	{
		comment = "Excellent";
		grade = "A";
		level = "First Class";
	}
	else if( GPA >= 60 && GPA <= 69)
	{
		grade = "B";
		comment = "Good";
		level = "Second Class Upper Division";
	}
	else if( GPA >= 50 && GPA <= 59)
	{
		grade = "C";
		comment = "Fair";
		level = "Second Class Lower Division";
	}
	else if( GPA >= 40 && GPA <= 49)
	{
		grade = "D";
		comment = "Pass";
		level = "Pass";
	}
	else if( GPA >= 0 && GPA <= 39)
	{
		grade = "F";
		comment = "Fail";
	}
}
int main()
{
	Student Student1;
	Student1.menu();
	return 0;
}
