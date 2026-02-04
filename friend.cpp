#include "header.h"
//Extraction(to scan the input)
istream& operator>>(istream& in,String& temp){
    // //temporary buffer to store input,because can't store in the temp.ptr(which has NULL)
    char inBuff[1000]; 
    in>>inBuff;
    delete [] temp.ptr; //free old memory
    temp.ptr=new char [strlen(inBuff)+1]; //Allocating memory 
    strcpy(temp.ptr,inBuff); 
    return in; 
}

//Insertion (to display the output)
ostream& operator<<(ostream& out,const String& temp){
    cout<<temp.ptr;
    return cout;
}
