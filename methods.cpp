#include "header.h"

//Default constructor 
String::String(){  
    ptr = new char[1];
    ptr[0] = '\0';
}

//Parameterized Constructor
String::String(const char *str){
    ptr=new char [strlen(str)+1];
    strcpy(ptr,str);
}

//Copy constructor
String::String(const String& temp){
    ptr=new char [strlen(temp.ptr)+1];
    strcpy(ptr,temp.ptr);
}

//Destructor
String::~String(){ 
    delete [] ptr;
}

//Assignment Operator
String& String::operator=(const String& temp){
    if(this !=& temp){  //self assignment check
        delete [] ptr; // to avoid memory leak
        if(temp.ptr!=NULL){
            ptr=new char [strlen(temp.ptr)+1];
            strcpy(ptr,temp.ptr);
        }
        else{
            ptr=NULL;
        }
    }
    return *this;
}

// Subscript Operator
char& String::operator[](int i){
    try{
        if(i<strlen(ptr)){
            return ptr[i];
        }
        else{
            throw "Error : index out of bound";
        }
    }
    catch(const char *eMsg){
        cout<<RED<<eMsg<<RESET<<endl;
    }
}

//Operator overload >  (eg. bool temp= s1 > s2)
bool String::operator>(String& temp){
    int i=0;
    while(ptr[i]!='0' && temp.ptr[i]!='\0'){
        //eg : ("Abc">"abc")
        if(ptr[i]<temp.ptr[i]){
            return false;
        }
        //eg : ("abc">"aBc")
        if(ptr[i]>temp.ptr[i]){
            return true;
        }
        i++;
    }
    return (ptr[i]='\0' && temp.ptr[i]==0);
}

//Operator overload <  (eg. bool temp= s1 < s2)
bool String::operator<(String& temp){
    int i=0;
    while(ptr[i]!='\0' && temp.ptr[i]!='\0'){
        //eg : ("abc"<"Abc")
        if(ptr[i]>temp.ptr[i]){
            return false;
        }
        //eg : ("aBc"<"abc")
        if(ptr[i]<temp.ptr[i]){
            return true;
        }
        i++;
    }
    return (ptr[i]=='\0' && temp.ptr[i]=='\0'); 
}

//Operator overload >= (eg. bool temp= s1 >= s2)
bool String::operator>=(String& temp){
    int i=0;
    while(ptr[i]!='\0' && temp.ptr[i]!='\0'){
        //eg : ("abc">="Abc")
        if(ptr[i]<temp.ptr[i]){
            return false;
        }
        //eg : ("aBc">="abC")
        if(ptr[i]>=temp.ptr[i]){
            return true;
        }
        i++;
    }
    return (ptr[i]=='\0' && temp.ptr[i]=='\0');
}

//Operator overload <= (eg. bool temp= s1 <= s2)
bool String::operator<=(String& temp){
    int i=0;
    while(ptr[i]!='\0' && temp.ptr[i]!='0'){
        //eg : ("aBC"<="ABC")
        if(ptr[i]>temp.ptr[i]){
            return false;
        }
        //eg : ("ABc"<="aBC")
        if(ptr[i]<=temp.ptr[i]){
            return true;
        }
        i++;
    }
    return (ptr[i]=='\0' && temp.ptr[i]=='\0');
}

//Operator overload == (eg. bool temp = s1 == s2)
bool String::operator==(String& temp){
    int i=0;
    while(ptr[i]!='\0' && temp.ptr[i]!='0'){
        //eg : ("abc"=="aBc")
        if(ptr[i]!=temp.ptr[i]){
            return false;
        }
        i++;
    }
    return (ptr[i]=='\0' && temp.ptr[i]=='\0');
}

//Operator overload != (eg. bool temp= s1 != s2)
bool String::operator!=(String& temp){
    int i=0;
    while(ptr[i]!='\0' && temp.ptr[i]!='\0'){
        //eg : ("abc"!="AbC")
        if(ptr[i]!=temp.ptr[i]){
            return true;
        }
        i++;
    }
    return (ptr[i]=='\0' && temp.ptr[i]=='\0');
}