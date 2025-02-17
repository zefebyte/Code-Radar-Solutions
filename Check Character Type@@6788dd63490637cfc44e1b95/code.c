// Your code here...char
#include <ctype.h>
char ch;

scanf("%c",&ch);
if(isalpha(ch)){
if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'){
    printf("Vowel");}
    else{printf("consonant");}
    }
else if(isdigit(ch)){
    printf("digit");
}
else{
    printf("Special Character");
}