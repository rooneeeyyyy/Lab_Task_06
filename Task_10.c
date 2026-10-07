/*TASK 10: PASSWORD STRENGTH CHECKER:
A signup form takes a username (up to 20 characters) as input. Count how many vowels and
consonants it contains (a basic strength heuristic), then convert the username to all uppercase to store
it in the system's case-insensitive username database.*/
#include<stdio.h>
int main(){
    char username[21];
    int i,vowels=0,consonants=0;
    printf("Enter username: ");
    scanf("%20s",username);

    for(i=0;username[i]!='\0';i++){
        if(username[i]=='a'||username[i]=='e'||username[i]=='i'||username[i]=='o'||username[i]=='u'){
            vowels++;
        }
        else if(username[i]>='a'&&username[i]<='z'){
            consonants++;
        }
        if(username[i]>='a'&&username[i]<='z'){
            username[i]=username[i]-32;
        }
    }
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",consonants);
    printf("Username in uppercase: %s\n",username);
    return 0;
}