#include "header.h"

//Default constructor 
String::String(){  
    ptr=NULL;
}

//Parameterized Constructor
String::String(const char *str){
    ptr=new char [strlen(str)+1];
    strcpy(ptr,str);
}

//Copy constructor
String::String(const String& temp){
    if(temp.ptr!=NULL){
        ptr=new char [strlen(temp.ptr)+1];
        strcpy(ptr,temp.ptr);
    }
    else{
        ptr=NULL;
    }
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
