#include <stdio.h>
#include <stdlib.h>

int menu();//Prototype
int main()
{
    int action;

    return 0;
}


int menu()//header
{
    //body
    int action;
    action=menu();
 do
    {
    printf("\tSCHOOL LIBRARY\n");
    printf("Welcome Mr titus\n");
    printf("What would you like to do in the Library?\n");
    printf("1.  View users\n");
    printf("2.  Add new user\n");
    printf("3.  edit user\n");
    printf("4.  Delete usre\n");
    printf("5.  Borrow a book\n");
    printf("6.  change password\n");
    printf("7.  Log out\n ");
    printf ("8.  Exit system\n");
    printf("Please select action(1-7:\n");

    scanf("%d",&action);
    if(action<1||action>7);

        printf("Invalid Input. Try again\n");
    }

    while(action<1||action>7);
    return action;
}
