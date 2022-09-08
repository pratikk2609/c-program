#include<stdio.h>

int main()
{
    printf("enter f for french & i for indian: ");
    char ch;
    scanf("%c", &ch);

    if(ch =='i'){
        namaste();
    } else{
        bonjour();
    }

    return 0;
}

void namaste(){
    printf("Namaste \n ");
}
void bonjour(){
     printf("Bonjour \n " );
}