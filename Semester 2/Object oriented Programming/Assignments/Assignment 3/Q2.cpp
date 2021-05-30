#include<iostream>
#include<stdio.h>

using namespace std;

class student{
    char stud_name, course_name;
    int stud_rollno,dob;
    public:
    void getrec(int);
    void modifyrec();
    char printrec(){ return stud_name; }
};

class exam:public student{
    int  paper_code,marks_obtained,total_marks;
    char exam_name, paper_name,grades;
    public:
    void getmarks();
    void modifymarks();
    void printresult();
};

void student::getrec(int i)
{
  char buffer[255];
  bool isvalid;
  fgets(buffer, sizeof(buffer), stdin); // clearing standard input stream
    do{
       cout << endl << "Enter name of student no " << i << " : ";
       getline(cin, name);
       isvalid = isValidName(name);
       if(!isvalid) cout << "Invalid Name...! Try Again." << endl;
     }while(!isvalid);

    do{
       cout << "Enter " << stud_name << "'s rollno : ";
       cin >> rollno;
       if(rollno < 1) cout << "Invalid input...! Try again" << endl;
    }while(rollno < 1);
    
      fgets(buffer, sizeof(buffer), stdin); // clearing standard input stream
    do{ 
       cout << "Enter " << stud_name << "'s course : ";
       getline(cin, course);
       isvalid = isValidName(course);
       if(!isvalid) cout << "Invalid Name...! Try Again." << endl;
     }while(!isvalid);

}

void student::printrec()
{
  cout << endl << "Name = " << stud_name
       << endl << "Roll no = " << rollno
       << endl << "Course = " << course;
}

void exam::getmarks()
{
  do{
     cout << "Enter " << getname() << "'s marks in History ( 0 <= M <= 100 ): ";
     cin >> marks1;
     if(marks1 < 0 || marks1 > 100) cout << "Invalid input...! Try again" << endl;
    }while(marks1 < 0 || marks1 > 100);

  do{
     cout << "Enter " << getname() << "'s marks in Political Science ( 0 <= M <= 100 ): ";
     cin >> marks2;
     if(marks2 < 0 || marks2 > 100) cout << "Invalid input...! Try again" << endl;
    }while(marks2 < 0 || marks2 > 100);

  do{
     cout << "Enter " << getname() << "'s marks in Urdu  ( 0 <= M <= 100 ): ";
     cin >> marks3;
     if(marks3 < 0 || marks3 > 100) cout << "Invalid input...! Try again" << endl;
    }while(marks3 < 0 || marks3 > 100);
}

void exam::printresult()
{
    cout << endl << "OPPS Marks : " << marks1
         << endl << "DBMS Marks : " << marks2
         << endl << "Advance data structure marks : " << marks3;
}

int main()
{
    int n;

    do{
       cout << endl << "Enter no. of students : ";
       cin >> n;
       if( n < 1) cout << "Invalid input...! Try again." << endl;
    }while(n < 1);

    exam s[n];
    for( int i = 0 ; i < n ; i++ )
    {
        s[i].input_student(i + 1 );
        s[i].input_marks();
        cout << endl;
    }
    cout << endl << "Student Details :";

    for( int i = 0 ; i < n ; i++ )
    {
        s[i].display_student();
        s[i].display_marks();
        cout << endl;
    }
    return 0;
}
