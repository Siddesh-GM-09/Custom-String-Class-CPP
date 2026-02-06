#include<iostream>
#include<cstring>
using namespace std;

class String{
    char *ptr;
    public:
    //Default constructor 
    String();
    //Parameterized Constructor
    String(const char *);
    //Copy constructor
    String(const String& );
    //Assignment Operator
    String& operator=(const String& );
    // Subscript Operator
    char& operator[](int );
    //Extraction(to scan the input)
    friend istream& operator>>(istream& ,String& );
    //Insertion (to display the output)
    friend ostream& operator<<(ostream&,const String&);
    //String Length
    friend unsigned int my_strlen(const String& );
    //strcpy(s1,s2)
    friend void my_strcpy(String& ,const String& );
    //strncpy(s1,s2,int)
    friend void my_strncpy(String& ,const String& ,int );
    //strcmp(s1,s2)
    friend int my_strcmp(const String& ,const String& );
    //strncmp(s1,s2,int)
    friend int my_strncmp(const String& ,const String& ,int );
    //strcat(s1,s2)
    friend void my_strcat(String& ,const String& );
    //strncat(s1,s2,int)
    friend void my_strncat(String& ,const String& ,int );
    //strrev(s1)
    friend void my_strrev(String& );
    //strupper(s1)
    friend void my_strUpper(String& );
    //strlower(s1)
    friend void my_strLower(String& );
    //strch(s1,char)
    friend char* my_strchr(const String& ,const char );
    //strrchr(s1,char)
    friend char* my_strrchr(const String& ,const char );
    //strstr(s1,s2)
    friend char* my_strstr(const String&,const String&);
    //Operator overload >  (eg. bool temp= s1 > s2)
    bool operator>(String& );
    //Operator overload <  (eg. bool temp= s1 < s2)
    bool operator<(String& );
    //Operator overload >= (eg. bool temp= s1 >= s2)
    bool operator>=(String& );
    //Operator overload <= (eg. bool temp= s1 <= s2)
    bool operator<=(String& );
    //Operator overload == (eg. bool temp= s1 == s2)
    bool operator==(String& );
    //Operator overload != (eg. bool temp= s1 != s2)
    bool operator!=(String& );
     //Destructor
    ~String();
};