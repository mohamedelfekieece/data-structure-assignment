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
//creating structure node with 2 pointers:
//next for indicating the next position of the node
//data for passing the data of the user
struct node{
    struct student * data;
    struct node * next;
    };
struct node * head = NULL;
struct node * tail = NULL;

//function the creates list with a number of students as the user needs
void CreateList (int Num_Students){
    struct node *head = (struct node *) malloc(sizeof(struct node));
    struct node *tail = head;
    head->next=NULL;
    AddAtBeginning();
    for(int i=1;i<Num_Students;i++){
    AddAtEnd();
}}
//function adds node in a specific index the list
void AddAtIndex(){
    struct node * newnode = NULL;
    struct node * current = NULL;
    newnode= (struct node *) malloc(sizeof(struct node));
    printf("Please choose which index you want to add the students in \n");
    int indexnum;
    scanf("%d",&indexnum);
    printf("Please add the student's data in the following order->> \nName \nID \nDate of birth (Day,Month,Year) \nScore \n");
	scanf("%s",(newnode->data->name));
	scanf("%d",&(newnode->data->id));
	scanf("%d",&(newnode->data->score));
	scanf("%d",&(newnode->data->day));
	scanf("%d",&(newnode->data->month));
	scanf("%d",&(newnode->data->year));
	current=head;
	for (int i =1;i<indexnum-1;i++)
{
    current = current->next;
}
    newnode->next = current->next;
    current->next = newnode;
    printf("Operation has been Succeeded, you may return to the last menu \n");
}
//function adds node at the beginning of the list
void AddAtBeginning(){
    struct student * stud = NULL;
    stud = (struct student *) malloc(sizeof(struct student));
    struct node * newnode = (struct node *) malloc(sizeof(struct node));
    Scan(stud);
    newnode->data = stud;
    //check case for head and tail as for the 1st node
    if(head == NULL && tail == NULL)
    {
        head = newnode;
        tail = newnode;
        newnode->next = NULL;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
    printf("Operation has been Succeeded \n");
}
//function adds node at the end of the list
void AddAtEnd(){
    struct student* stud = NULL;
    stud = (struct student *) malloc(sizeof(struct student));
    Scan(stud);
    struct node* newnode = (struct node *) malloc(sizeof(struct node));
    newnode->data = stud;
    newnode->next = NULL;
    //check case for head and tail as for the 1st node
    if(head == NULL && tail == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
    printf("Operation has been Succeeded \n");
    }
//display function in order to export data on the screen for the user
void DispList(){
struct node * current = NULL;
current = head;
int i=1;
while (current != NULL)
{
printf ("Student number: %d\n",i);
printf ("Student's name: %s\n",current->data->name);
printf ("Student's id: %d\n", current->data->id);
printf ("Student's day  of birth: %d\n", current->data->day);
printf ("Student's month of birth: %d\n", current->data->month);
printf ("Student's year of birth:%d\n", current->data->year);
printf ("Student's score: %d\n", current->data->score);
printf ("----------------------------\n");
current = current->next;
i++;
}
}
//scan function in order to import data from the user
void Scan(struct student *scanstud){
printf("Please add the student's data in the following order->> \nName \nID \nDate of birth (Day,Month,Year) \nScore \n");
scanf ("%s",  scanstud->name);
scanf ("%d", &scanstud->id);
scanf ("%d", &scanstud->day);
scanf ("%d", &scanstud->month);
scanf ("%d", &scanstud->year);
scanf ("%d", &scanstud->score);
}
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
    printf("if you want to use Linked lists press 2\n");
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
if (choice==2)
{
int n;
printf("Kindly insert the number of students you need to add \n");
scanf("%d",&n);
CreateList(n);
int flag2=1;
     while(flag2) //while loop to stay in the program
     {
     printf("If you want to print the students info from the data base press 1\n");
     printf("If you want to insert new students press 2\n");
     printf("If you want to exit press 0 \n");
     int generalcases;
     scanf("%d",&generalcases);
     if(generalcases==0)
      {
          goto end2;
      }
     else if(generalcases==1)
     {
            DispList();
     }
     else if(generalcases==2)
     {
       int index2,insertcases;
       again:
       printf("If you want to insert at the beginning of the array press 1\n");
       printf("If you want to insert at the middle of the array press 2\n");
       printf("If you want to insert at the end of the array press 3\n");
       scanf("%d",&insertcases);
       if(insertcases==1)
       {
           AddAtBeginning();
       }
       else if(insertcases==2)
       {
           AddAtIndex();
       }
       else if(insertcases==3)
       {
           AddAtEnd();
       }
       else
       {
           printf("undefined input\n");
           goto again;
       }
       }

        printf("If you want to print the students new info from the data base press 4\n");
        printf("If you want to insert another student press 5\n");
        printf("If you want to exit press 0 \n");
        scanf("%d",&generalcases);

       if(generalcases==4)
       {
         DispList();
       }
       else if(generalcases==5)
       {
         goto again;
       }
       else if (generalcases==0)
       {
         end2:
         flag2=0;
       }
       else
       {
         printf("undefined input\n");
       }
       }
}


    return 0;
}
