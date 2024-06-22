#include<stdio.h>
#include<string.h>

struct Employee{
    char name[100];
    char ID[100];
    struct DATE{
        int day, year;
        char month[10];
    } join_date;
};

int main(){
    struct Employee employee;

    strcpy(employee.name, "Prabhudev");
    strcpy(employee.ID, "A10023049");
    employee.join_date.day = 21;
    employee.join_date.year = 2023;
    strcpy(employee.join_date.month, "November");


    printf("%-20s%-20s%-20s\n", "Name", "ID", "Join Date");
    printf("%-20s%-20s%d %s %d", employee.name, employee.ID, employee.join_date.day, employee.join_date.month, employee.join_date.year);


    return 0;    
}