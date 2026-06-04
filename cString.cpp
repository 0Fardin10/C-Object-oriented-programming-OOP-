#include <iostream>
#include <cstring>
using namespace std;
int main()
{

char name1[100]="Hello";
char name2[100]="World";
cout <<"In Name 1 : "<<name1<<endl;
cout<<"Name 1 legth :"<<strlen(name1)<<endl;
//copy string 

cout<<"Copy "<<strcpy(name1,name2)<<endl;
//Concatenates two strings.
char *name3 = strcat(name1,name2);
cout<<"Concatenates two strings :"<<name3<<endl;

    return 0;
}
