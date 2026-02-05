#include "header.h"

//String Length (strlen)
unsigned int my_strlen(const String& temp){
    unsigned int len=0;
    for(int i=0;temp.ptr[i]!='\0';i++){
        len++;
    }
    return len;
}

//strcpy(s1,s2)
char* my_strcpy(String& dest,const String& src){

}
//strncpy(s1,s2,int)
char* my_strncpy(String& dest,const String& src,int len){

}
//strcmp(s1,s2)
int my_strcmp(const String& str1,const String& str2){

}
//strncmp(s1,s2,int)
int my_strncmp(const String& str1,const String& str2,int len){

}
//strcat(s1,s2)
char* my_strcat(String& str1,const String& str2){

}
//strncat(s1,s2,int)
char* my_strcat(String& str1,const String& str2,int len){

}
//strrev(s1)
void my_strrev(String& str){
    int start=0;
    int end=strlen(str.ptr)-1;
    while(start<end){
        char temp=str.ptr[start];
        str.ptr[start]=str.ptr[end];
        str.ptr[end]=temp;
        start++,end--;
    }
}
//strupper(s1)
void my_strUpper(String& str){
    for(int i=0;str.ptr[i]!='\0';i++){
        if(str.ptr[i]>='a' && str.ptr[i]<='z'){
            str.ptr[i]=str.ptr[i]-32;
        }
    }
}
//strlower(s1)
void my_strLower(String& str){
    for(int i=0;str.ptr[i]!='\0';i++){
        if(str.ptr[i]>='A'&&str.ptr[i]<='Z'){
            str.ptr[i]=str.ptr[i]+32;
        }
    }
}
//strchr(s1,char)
char* my_strchr(const String& str,const char ch){
    for(int i=0;str.ptr[i]!='\0';i++){
        if(str.ptr[i]==ch){
            return &str.ptr[i];
        }
    }
    return NULL;
}
//strrchr(s1,char)
char* my_strychr(const String& str,const char ch){
    for(int i=strlen(str.ptr)-1;i>=0;i--){
        if(str.ptr[i]==ch){
            return &str.ptr[i];
        }
    }
}
//strstr(s1,s2)
char* my_strstr(const String* str1,const String& str2){
    
}