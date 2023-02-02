#include <stdio.h>

int main(){

    char name[50];
    int k;

    printf("I have no idea what this will be?"
    "Ima make this as some kind of data base so, yea"
    "Please enter your name");
    gets(name);
    printf("Hello %s, it is nice to meet you"
    "Please enter you account\n"
    "If you are a reoccuring user, Please enter your Security pin", name);
    scanf("%d",k);

    if (k = 4){
       printf("0"); 
    }
    else if (k = 16){
        printf("This was for the bank account");
    }
    else{
        printf("That was an invalid pin");
    }


}