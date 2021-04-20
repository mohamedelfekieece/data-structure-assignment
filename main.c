#include <stdio.h>
#include <stdlib.h>
struct student
{
char name[30];
int id;
int day;
int month;
int year;
int score;
};
int m;
void getArray(int N,struct student *p)
{

   for (int i=0;i<=N-1;i++)
    {
          printf("Enter student name \n");
         scanf("%s",&(p+i)->name);
         printf("Enter Student's ID \n");
         scanf("%d",&(p+i)->id);
         printf("Enter Student's date day: \n");
         scanf("%d",&(p+i)->day);
         printf("Enter Student's date month: \n");
         scanf("%d",&(p+i)->month);
         printf("Enter Student's date year: \n");
         scanf("%d",&(p+i)->year);
         printf("Enter Student's score: \n");
         scanf("%d",&(p+i)->score);
    }
}
void insertStdlast(int n,int z,struct student *p)
{

    for (int i=n;i<=z-1;i++)
    {
          printf("Enter student name \n");
         scanf("%s",&(p+i)->name);
         printf("Enter Student's ID \n");
         scanf("%d",&(p+i)->id);
         printf("Enter Student's date day: \n");
         scanf("%d",&(p+i)->day);
         printf("Enter Student's date month: \n");
         scanf("%d",&(p+i)->month);
         printf("Enter Student's date year: \n");
         scanf("%d",&(p+i)->year);
         printf("Enter Student's score: \n");
         scanf("%d",&(p+i)->score);
    }
}
void dataPrint(int m,struct student *arr)    //(number of students,pointer of the array)
{
    for (int i=0;i<=m-1;i++)
    {
        printf("------------------------\n");
         printf("%s\n",(arr+i)->name);
         printf("%d\n",(arr+i)->id);
         printf("%d\n",(arr+i)->day);
         printf("%d\n",(arr+i)->month);
         printf("%d\n",(arr+i)->year);
         printf("%d\n",(arr+i)->score);
         printf("------------------------\n");
    }
}

void insertFirst(int n,int z,struct student *p)
{
    for (int i=n-1;i>=0;i--)  // loop to shift every element in the array
    {
        p[i+z]=p[i];

    }
    for (int i=0;i<=z-1;i++)  // loop to add new students
    {
          printf("Enter student name \n");
         scanf("%s",&(p+i)->name);
         printf("Enter Student's ID \n");
         scanf("%d",&(p+i)->id);
         printf("Enter Student's date day: \n");
         scanf("%d",&(p+i)->day);
         printf("Enter Student's date month: \n");
         scanf("%d",&(p+i)->month);
         printf("Enter Student's date year: \n");
         scanf("%d",&(p+i)->year);
         printf("Enter Student's score: \n");
         scanf("%d",&(p+i)->score);
    }
}
void insertMid(int n,int z, int index,struct student *p)
{
    for (int i=n-1;i>=index-1;i--)
    {
        p[i+z]=p[i];

    }
    for (int i=index-1;i<z+index-1;i++)
    {
        printf("Enter student name \n");
         scanf("%s",&(p+i)->name);
         printf("Enter Student's ID \n");
         scanf("%d",&(p+i)->id);
         printf("Enter Student's date day: \n");
         scanf("%d",&(p+i)->day);
         printf("Enter Student's date month: \n");
         scanf("%d",&(p+i)->month);
         printf("Enter Student's date year: \n");
         scanf("%d",&(p+i)->year);
         printf("Enter Student's score: \n");
         scanf("%d",&(p+i)->score);
    }
}
int main()
{
    printf("Welcome to student Database\n");
    printf("============================\n");
    printf("if you want to use dynamically allocated array press 1\n");
    int choice;
    scanf("%d",&choice);
    if (choice==1) // condition to choose the required storing method
    {

    printf("Enter number of students\n");
    int m,z;// m is number of students in the beginning of the program , z is the number of students after adding new ones
    scanf("%d",&m);
    struct student *arr= (struct student *)calloc(m,sizeof(struct student)); // allocating dynamic array and connecting it to a pointer
    getArray(m, arr); //function to enter the data of every student in the array

     int newStd;
     int flag=1;
     while(flag) //while loop to stay in the program
     {
     printf("If you want to print the students info from the data base press 1\n");
     printf("If you want to insert new students press 2\n");
     printf("If you want to exit press 0 \n");
     int Call;


     scanf("%d",&Call);
      if(Call==0)
      {
          goto end;
      }
     if(Call==1)
     {
            dataPrint(m,arr);
     }
     else if(Call==2)
     {



     printf("Enter number of students you want to insert:\n");
       scanf("%d",&newStd); // taking number of new students
       z=newStd+m; //adding the new students to the old ones
       int index,place;
       struct student *arr_new= (struct student *)realloc(arr,sizeof(struct student)*z);
       printf("If you want to insert at the beginning of the array press 1\n");
       printf("If you want to insert at the middle of the array press 2\n");
       printf("If you want to insert at the end of the array press 3\n");
       scanf("%d",&place);
       if(place==1)
       {
           insertFirst(z,newStd,arr_new);
       }
       else if(place==2){
       printf("Enter number of student's location you want to insert in:\n");
       scanf("%d",&index);
       insertMid(z,newStd,index,arr_new);}
       else if(place==3)
       {
           insertStdlast(m,z,arr_new);

       }
       else
       {
           printf("undefined input\n");
       }

       printf("If you want to print the students new info from the data base press 4\n");

        printf("If you want to exit press 0 \n");
        scanf("%d",&Call);
     if (Call==0)
     {
         end:
         free(arr);
         free(arr_new);
         flag=0;
     }
     else if(Call==4)
     {
            dataPrint(z,arr_new);
     }
     }
     else
     {
         printf("undefined input\n");
     }


    }
    }



    return 0;
}
