#include<iostream>
#include<cstring>
using namespace std;

class String{
    char *ptr;
    public:
    //Default constructor 
    String();
    //Parameterized Constructor
    String(const char *str);
    //Copy constructor
    String(const String& temp);
    //Assignment Operator
    String& operator=(const String& temp);
    // Subscript Operator
    char& operator[](int i);
    //Extraction(to scan the input)
    friend istream& operator>>(istream& ,String& );
    //Insertion (to display the output)
    friend ostream& operator<<(ostream&,const String&);
    //String Length
    friend unsigned int my_strlen(const String& temp);
    //strcpy(s1,s2)
    friend char* my_strcpy(String& dest,const String& src);
    //strncpy(s1,s2,int)
    friend char* my_strncpy(String& dest,const String& src,int len);
    //strcmp(s1,s2)
    friend int my_strcmp(const String& str1,const String& str2);
    //strncmp(s1,s2,int)
    friend int my_strncmp(const String& str1,const String& str2,int len);
    //strcat(s1,s2)
    friend char* my_strcat(String& str1,const String& str2);
    //strncat(s1,s2,int)
    friend char* my_strcat(String& str1,const String& str2,int len);
    //strrev(s1)
    friend void my_strrev(String& str);
    //strupper(s1)
    friend void my_strUpper(String& str);
    //strlower(s1)
    friend void my_strLower(String& str);
    //strch(s1,char)
    friend char* my_strchr(const String& str,const char ch);
    //strrchr(s1,char)
    friend char* my_strychr(const String& str,const char ch);
    //strstr(s1,s2)
    friend char* my_strstr(const String* str1,const String& str2);
    //Operator overload >  (eg. bool temp= s1 > s2;
    bool operator>(String& temp);
    //Operator overload <  (eg. bool temp= s1 < s2;
    bool operator<(String& temp);
    //Operator overload >= (eg. bool temp= s1 >= s2;
    bool operator>=(String& temp);
    //Operator overload <= (eg. bool temp= s1 <= s2;
    bool operator<=(String& temp);
    //Operator overload == (eg. bool temp= s1 == s2;
    bool operator==(String& temp);
    //Operator overload != (eg. bool temp= s1 != s2;
    bool operator!=(String& temp);
     //Destructor
    ~String();
};