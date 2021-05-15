#include<bits/stdc++.h>

using namespace std;

class STRING{
     char *str;
     int lenght;

    public:

    STRING(){}
    STRING( char *s )
    {
        lenght = strlen(s);
        str = new char[ lenght + 1 ]; // + 1 for storing NULL Character
        strcpy(str, s);
    }
    void show();
    char* operator + ( STRING s);
    int operator ==(STRING s);
    int operator < (STRING s);
    int operator > (STRING s);
};

void STRING::show()
{
    cout << str;
}

char* STRING::operator + ( STRING s)
{
    int len1, len2;
    char *new_str;

    len1 = strlen( str );
    len2 = strlen( s.str);
    
    new_str = new char[ len1 + len2 + 1];

    strcpy(new_str, str);
    strcat(new_str, s.str);
    
    return new_str;
}

int STRING::operator ==( STRING s)
{
    return strcmp( str, s.str );
}

int STRING::operator <( STRING s)
{
    return strcmp( str, s.str );
}
int STRING::operator >( STRING s)
{
    return strcmp( str, s.str );
}


int main()
{
    STRING s1, s2, s3;
    char str[100];

    cout << endl << "Enter String1 : ";
    cin.getline(str, sizeof(str));
    s1 = STRING(str);

    cout << endl << "Enter String2 : ";
    cin.getline(str, sizeof(str));
    s2 = STRING(str);

    s3 = s1 + s2;
    
    cout << endl << "String1 = ";
    s1.show();
    cout << endl << "String2 = ";
    s2.show();
    cout << endl << "String3 = ";
    s3.show();
    
    if( !(s1 == s2) )
      cout << endl << "Str1 == Str2 : TRUE";
    else
      cout << endl << "Str1 == Str2 : FALSE";
      
      if( s1 < s2 )
      cout << endl << "Str1 < Str2 : TRUE";
    else
      cout << endl << "Str1 < Str2 : FALSE";
      
      
      if( s1 > s2 )
      cout << endl << "Str1 > Str2 : False";
    else
      cout << endl << "Str1 > Str2 : True";
    
    return 0;
}
