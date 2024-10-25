//Create a lecture management System 
#include<iostream>
#include<stdio.h>
using namespace std;
class lecture{
	private:
		string name;
		string sub;
		string course;
		int num;
	public:
		lecture()//inisitialise the value 
		{
			this->name=name;
			this->sub=sub;
			this->course=course;
			this->num=num;
			
		};
		void detail()//to take input from user
		{
			cout<<"Enter the Lectrurer Name :";
			cin>>name;
			cout<<"Enter Subject Name :";
			cin>>sub;
			cout<<"Enter the Course Name :";
			cin>>course;
			cout<<"Enter the Number of lectrur :";
			cin>>num;
		}
		void display()//to display the details
		{
			cout<<"\n-------------Lecture Management System--------------";
			cout<<"\nName is :-"<<name;
			cout<<"\nSubject is :-"<<sub;
			cout<<"\nCourse is :-"<<course;
			cout<<"\nNumber of lecturer is :-"<<num;
			cout<<"\n";	
		}
		
		
};

int main()
{
	lecture lec[10];//array to store 5 details
	int i;
	for(i=1;i<6;i++)//for loop to enter the detail in array
	{
		cout<<"\nEnter the detail of "<<i<<"\n";
		lec[i].detail();//call of function detial to take input
	}
	for(i=0;i<6;i++)
	{
		lec[i].display();//call of function display to see output
	}
}
