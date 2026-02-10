#include "header.h"

int main() {
    String s1,s2,s3;
    int n;
    char ch;
    char *ptr;

    // strcpy
    cout<<GREEN<<"String Copy Checking...."<<RESET<<endl;
    cout<<"Enter the string to copy : ";
    cin>>s1;
    my_strcpy(s3,s1);
    cout<<"strcpy o/p : "<<s3<<endl;
    s3[0]='\0';

    // strncpy
    cout<<"Enter the string to copy : ";
    cin>>s1;
    cout<<"Enter number of chars : ";
    cin>>n;
    my_strncpy(s3,s1,n);
    cout<<"strncpy o/p : "<<s3<<endl;
    s3[0]='\0';

    // strcmp
    cout<<GREEN<<"String Compare Checking..."<<RESET<<endl;
    cout<<"Enter string 1 : ";
    cin>>s1;
    cout<<"Enter string 2 : ";
    cin>>s2;
    int op = my_strcmp(s1,s2);
    cout<<"strcmp o/p : "<<op<<endl;

    // strncmp
    cout<<"Enter number of chars : ";
    cin>>n;
    op=my_strncmp(s1,s2,n);
    cout<<"strncmp o/p : "<<op<<endl;

    // strcat
    cout<<GREEN<<"String Concatenate Checking..."<<RESET<<endl;
    cout<<"Enter str1 : ";
    cin>>s3;
    cout<<"Enter str2 : ";
    cin>>s2;
    my_strcat(s3,s2);
    cout<<"strcat o/p : "<<s3<<endl;

    // strncat
    cout<<"Enter number of chars : ";
    cin>>n;
    my_strncat(s3,s2,n);
    cout<<"strncat o/p : "<<s3<< endl;

    // strrev, upper, lower
    cout<<GREEN<<"String Reverse , Upper , Lower Checking..."<<RESET<<endl;
    cout<<"Enter string : ";
    cin>>s1;
    my_strrev(s1);
    cout<<"strrev o/p : "<<s1<<endl;
    //upper
    my_strUpper(s1);
    cout<<"strUpper o/p : "<<s1<<endl;
    //lower
    my_strLower(s1);
    cout<<"strLower o/p : "<<s1<<endl;

    // strchr & strrchr
    cout<<GREEN<<"Character Search in String Checking..."<<RESET<<endl;
    cout<<"Enter string : ";
    cin>>s1;
    cout<<"Enter char to search : ";
    cin>>ch;
    ptr=my_strchr(s1,ch);
    if (ptr){
        cout<<"strchr o/p : "<<ptr<<endl;
    }
    else{
        cout<<"strchr o/p : Not Found"<<endl;
    }
    ptr=my_strrchr(s1,ch);
    if(ptr){
        cout<<"strrchr o/p : "<<ptr<<endl;
    }
    else{
        cout<<"strrchr o/p : Not Found"<<endl;
    }
    // strstr
    cout<<GREEN<<"Sub String Search in Main String Checking..."<<RESET<<endl;
    cin.ignore();
    cout<<"Enter main string : ";
    cin>>s1;
    cout<<"Enter sub string : ";
    cin>>s2;
    ptr=my_strstr(s1,s2);
    if(ptr){
        cout<<"strstr o/p : "<<ptr<<endl;
    }
    else{
        cout<<"strstr o/p : Not Found"<<endl;
    }
    // strlen
    cout<<GREEN<<"String  Length Checking..."<<RESET<<endl;
    cout<<"Enter string : ";
    cin>>s1;
    int len=my_strlen(s1);
    cout<<"strlen o/p : "<<len<<endl;

    //member funtion checking
    cout<<GREEN<<"Member Funtions Checking..."<<RESET<<endl;
    String ob1("abcde"); //Parameterized Constructor
    cout<<"Parameterized Constructor : "<<ob1<<endl;;
    String ob2(ob1),ob3; //Copy constructor
    cout<<"Copy constructor : "<<ob2<<endl;
    //Operator overload
    ob3=ob1;//Assignment Operator
    cout<<"Assignment Operator : "<<ob3<<endl;
    cout<<"Enter the index : ";
    cin>>n;
    cout<<"Enter the char to modify : ";
    cin>>ch;
    ob3[n]=ch; //Subscript Operator
    cout<<"Subscript Operator : "<<ob3<<endl;

    //compare strings
    String str1,str2;
    cout<<GREEN<<"Compare Strings Checking..."<<RESET<<endl;
    cout<<"Enter string 1 : ";
    cin>>str1;
    cout<<"Enter string 2 : ";
    cin>>str2;
    cout<<"Str1 : "<<str1<<" "<<"Str2 :"<<str2<<endl;
    //Operator overload >  (eg. bool temp= s1 > s2)
    cout<<" S1 > S2 : "<<boolalpha<<(str1>str2)<<endl;
    //Operator overload <  (eg. bool temp= s1 < s2)
    cout<<" S1 < S2 : "<<(str1<str2)<<endl;
    //Operator overload >= (eg. bool temp= s1 >= s2)
    cout<<" S1 >= S2 : "<<(str1>=str2)<<endl;
    //Operator overload <= (eg. bool temp= s1 <= s2)
    cout<<" S1 <= S2 : "<<(str1<=str2)<<endl;
    //Operator overload == (eg. bool temp = s1 == s2)
    cout<<" S1 == S2 : "<<boolalpha<<(str1==str2)<<endl;
    //Operator overload != (eg. bool temp= s1 != s2)
    cout<<" S1 != S2 : "<<boolalpha<<(str1!=str2)<<endl;
    return 0;
}
