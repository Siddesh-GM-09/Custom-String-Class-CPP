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
    int sLen=strlen(src.ptr)-1;
    try{
        if(len>sLen){
            throw "\033[31mError : lenght out of range\033[0m";
        }
        int i=0;
        for(i=0;src.ptr[i]!='\0';i++){
            if(i<=len){
                dest.ptr[i]=src.ptr[i];
            }
            else{
                break;
            }
        }
        dest.ptr[i]='\0';
    }
    catch(const char *eMsg){
        cout<<eMsg<<endl;
    }
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
    int i=strlen(str1.ptr);
    for(int j=0;str2.ptr[j]!='\0';j++,i++){
        str1.ptr[i]=str2.ptr[j];
    }
    str1.ptr[i]='\0';
}

//strncat(s1,s2,int)
char* my_strcat(String& str1,const String& str2,int len){
    int j=strlen(str1.ptr);
    for(int i=0;i<len;i++,j++){
        str1.ptr[j]=str2.ptr[i];
    }
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
            if(flag){
                return &str1.ptr[i];
            }
        }
    }
    return nullptr;
}
