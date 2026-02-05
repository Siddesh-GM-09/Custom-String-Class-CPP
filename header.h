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