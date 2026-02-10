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
void my_strcpy(String& dest,const String& src){
    int i=0;
    for(i=0;src.ptr[i]!='\0';i++){
        dest.ptr[i]=src.ptr[i];
    }
    dest.ptr[i]='\0';
}

//strncpy(s1,s2,int)
void my_strncpy(String& dest,const String& src,int len){
    if (len <= 0) {
        delete[] dest.ptr;
        dest.ptr = new char[1];
        dest.ptr[0] = '\0';
        return;
    }
    int srcLen = strlen(src.ptr);
    int copyLen = (len < srcLen) ? len : srcLen;
    delete[] dest.ptr;
    dest.ptr = new char[copyLen + 1];
    for (int i = 0; i < copyLen; i++) {
        dest.ptr[i] = src.ptr[i];
    }
    dest.ptr[copyLen] = '\0';
}

//strcmp(s1,s2)
int my_strcmp(const String& str1,const String& str2){
    int i=0;
    while(str1.ptr[i]!='\0' && str2.ptr[i]!='\0'){
        if(str1.ptr[i]>str2.ptr[i]){
            return 1;
        }
        if(str1.ptr[i]<str2.ptr[i]){
            return -1;
        }
        i++;
    }
    if(str1.ptr[i]=='\0' && str2.ptr[i]=='\0'){
        return 0;
    }
    return (str1.ptr[i]=='\0'?-1:1); 
}

//strncmp(s1,s2,int)
int my_strncmp(const String& str1,const String& str2,int len){
    for(int i=0;i<len;i++){
        unsigned char c1=str1.ptr[i];
        unsigned char c2=str2.ptr[i];
        if(c1!=c2){
            return (c1>c2)?1:-1;
        }
        if(c1=='\0'){
            return 0;
        }
    }
    return 0;
}

//strcat(s1,s2)
void my_strcat(String& str1,const String& str2){
    int len1=strlen(str1.ptr);
    int len2=strlen(str2.ptr);
    char *newPtr=new char [len1+len2+1];
    strcpy(newPtr,str1.ptr); //copy original string(s1.ptr)
    strcpy(newPtr+len1,str2.ptr); //adding string(s2.ptr)
    delete [] str1.ptr; 
    str1.ptr=newPtr;
}

//strncat(s1,s2,int)
void my_strncat(String& str1, const String& str2, int len) {
    if (len <= 0) {
        return;
    }
    int len1 = strlen(str1.ptr);
    int len2 = strlen(str2.ptr);
    int copyLen = (len < len2) ? len : len2;
    char* newPtr = new char[len1 + copyLen + 1];
    strcpy(newPtr, str1.ptr);
    for (int i = 0; i < copyLen; i++) {
        newPtr[len1 + i] = str2.ptr[i];
    }
    newPtr[len1 + copyLen] = '\0';
    delete[] str1.ptr;
    str1.ptr = newPtr;
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
    return nullptr;
}

//strrchr(s1,char)
char* my_strrchr(const String& str,const char ch){
    for(int i=strlen(str.ptr)-1;i>=0;i--){
        if(str.ptr[i]==ch){
            return &str.ptr[i];
        }
    }
    return nullptr;
}

//strstr(s1,s2)
char* my_strstr(const String& str1,const String& str2){
    for(int i=0;str1.ptr[i]!='\0';i++){
        if(str1.ptr[i]==str2.ptr[0]){
            char flag=0;
            for(int k=0;str2.ptr[k]!='\0';k++){
                if(str1.ptr[i+k]!=str2.ptr[k]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                return &str1.ptr[i];
            }
        }
    }
    return nullptr;
}
