#include<iostream>
#include<stdio.h>
#include<iomanip>

using namespace std;

class student{
    protected:
    string name;
    int rollno;
    int age;
    public:
    virtual void getdata(int)=0;   // pure virtual function now we can't create the objects of student as we are not intrested in making object of just student class rather than
    virtual void putdata(int)=0;    // we are intrested in making objects of Engineering, Medicine, Science students  so we restrict to created the object so student class 
};
 
class engineering:public student{
    public:
    void getdata(int);
    void putdata(int);
};
class medicine:public student{
    public:
    void getdata(int);
    void putdata(int);
};
class science:public student{
    public:
    void getdata(int);
    void putdata(int);
};

void engineering::getdata(int i)
{
    bool isValid;
    char buffer[255];
    fgets(buffer, sizeof(buffer), stdin);

    do{
       cout << endl << "Enter name of student " << i << " : ";
       getline(cin, name);
       isValid = isValidName(name);
       if(!isValid) cout << "Invalid Name...! Try Again." << endl;
      }while(!isValid);
    
    do{  
       cout << "Enter " << name << "'s rollno : ";
       cin >> rollno;
       if(rollno < 1) cout << "Invalid input...! Try Again." << endl << endl;
      }while(rollno < 1);
    
    do{ 
       cout << "Enter " << name << "'s age : ";
       cin >> age;
       if(age < 1) cout << "Invalid input...! Try Again." << endl << endl;
      }while(age < 1); 
}
void engineering::putdata(int i)
{
    cout << endl << endl << setw(2) << setfill('0')  << i << ") Name   : " << name << endl << "    Roll no: " << rollno << endl <<"    Age    : " << age;
}

void medicine::getdata(int i)
{
    bool isValid;
    char buffer[255];
    fgets(buffer, sizeof(buffer), stdin);
    
    do{
       cout << endl << "Enter name of student " << i << " : ";
       getline(cin, name);
       isValid = isValidName(name);
       if(!isValid) cout << "Invalid Name...! Try Again." << endl;
      }while(!isValid);
    
    do{  
       cout << "Enter " << name << "'s rollno : ";
       cin >> rollno;
       if(rollno < 1) cout << "Invalid input...! Try Again." << endl << endl;
      }while(rollno < 1);
    
    do{ 
       cout << "Enter " << name << "'s age : ";
       cin >> age;
       if(age < 1) cout << "Invalid input...! Try Again." << endl << endl;
      }while(age < 1); 
}
void medicine::putdata(int i)
{
    cout << endl << endl << setw(2) << setfill('0')  << i << ") Name   : " << name << endl << "    Roll no: " << rollno << endl <<"    Age    : " << age;
}


void science::getdata(int i)
{
    bool isValid;
    char buffer[255];
    fgets(buffer, sizeof(buffer), stdin);
    
    do{
       cout << endl << "Enter name of student " << i << " : ";
       getline(cin, name);
       isValid = isValidName(name);
       if(!isValid) cout << "Invalid Name...! Try Again." << endl;
      }while(!isValid);
    
    do{  
       cout << "Enter " << name << "'s rollno : ";
       cin >> rollno;
       if(rollno < 1) cout << "Invalid input...! Try Again." << endl << endl;
      }while(rollno < 1);
    
    do{ 
       cout << "Enter " << name << "'s age : ";
       cin >> age;
       if(age < 1) cout << "Invalid input...! Try Again." << endl << endl;
      }while(age < 1); 
}
void science::putdata(int i)
{
    cout << endl << endl << setw(2) << setfill('0')  << i << ") Name   : " << name << endl << "    Roll no: " << rollno << endl <<"    Age    : " << age;
}

int main()
{
    student *s;
    int nE, nM, nS, i;
    
    do{
       cout << "Enter no of Engineering students: ";
       cin >> nE;
       if(nE < 1) cout << "Invalid Input...! Try Again." << endl << endl;
      }while(nE < 1);

    do{
       cout << "Enter no of Medicine students   : ";
       cin >> nM;
       if(nM < 1) cout << "Invalid Input...! Try Again." << endl << endl;
      }while(nM < 1);

    do{
       cout << "Enter no of Science students    : ";
       cin >> nS;
       if(nS < 1) cout << "Invalid Input...! Try Again." << endl << endl;
      }while(nS < 1);

    engineering sE[nE];  // engineering student
    medicine sM[nM];     // medicine student
    science sS[nS];      // science student

    cout << endl << "You have to give details of " << nE << " Engineering Students :";
    for(i = 0 ; i < nE ; i++)
    {
      s = &sE[i];
      s->getdata(i + 1);
    }

    cout << endl << endl << "You have to give details of " << nM << " Medicine Students :";
    for(i = 0 ; i < nM ; i++)
    {
      s = &sM[i];
      s->getdata(i + 1);
    }

    cout << endl << endl << "You have to give details of " << nS << " Science Students :";
    for(i = 0 ; i < nS ; i++)
    {
      s = &sS[i];
      s->getdata(i + 1);
    }

    for(i = 0, cout << endl ; i < 32 ; i++, cout << "*");
    cout << endl << "* Engineering Students Details *" << endl;
    for(i = 0 ; i < 32 ; i++, cout << "*");
    for(i = 0 ; i < nE ; i++) s = &sE[i], s->putdata(i + 1);
    
    
    for(i = 0, cout << endl ; i < 32 ; i++, cout << "*");
    cout << endl << "* Medicine Students Details    *";
    for(i = 0, cout << endl ; i < 32 ; i++, cout << "*");
    for(i = 0 ; i < nM ; i++)
      s = &sM[i], s->putdata(i + 1);
    
    for(i = 0, cout << endl ; i < 32 ; i++, cout << "*");
    cout << endl << "* Science Students Details     *";
    for(i = 0, cout << endl ; i < 32 ; i++, cout << "*");
    for(i = 0 ; i < nS ; i++)
     s = &sS[i], s->putdata(i + 1);

    return 0;
}
