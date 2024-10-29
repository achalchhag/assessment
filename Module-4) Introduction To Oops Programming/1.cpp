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
		lecture() 
		{
			this->name=name;
			this->sub=sub;
			this->course=course;
			this->num=num;
			
		};
		void set()
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
		void get()
		{
			cout<<"\nLecture Management System";
			cout<<"\nName is :-"<<name;
			cout<<"\nSubject is :-"<<sub;
			cout<<"\nCourse is :-"<<course;
			cout<<"\nNumber of lecturer is :-"<<num;	
		}
	};
int main()
{
	lecture lec[10];
	int i;
	for(i=1;i<6;i++)
	{
		cout<<"\nEnter the detail of "<<i<<"\n";
		lec[i].set();
	}
	for(i=0;i<6;i++)
	{
		lec[i].get();
	}
}
