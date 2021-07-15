
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("sandeep.txt");
   
    char str[100];
    int count=0;
    int count1=0;
   
    while(!fin.eof())
    {
        fin.getline(str,100);
        if(str[0]!='A')
        {
            count++;
        }
        else if(str[0]=='A'&&str[1]==' ')
        {
            count1++;
        }
    }
   
    cout<<"The number of lines not starting with 'A' are:"<<count<<"\n";
    cout<<"The number of lines starting with 'A' are:"<<count1<<"\n";
   
    fin.close();
    return 0;
}
