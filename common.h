#ifndef COMMON_H
#define COMMON_H

#define EMPLOYEE_FILE "employees.txt"
#define PROJECT_FILE "projects.txt"
#define ANNOUNCEMENT_FILE "announcements.txt"
#define LEAVE_REQUEST_FILE "leave_requests.txt"
#define HANDBOOK_FILE "handbook.txt"

#define MAX_STR_LEN 100

typedef struct {
    int id;
    char name[MAX_STR_LEN];
    char gender[MAX_STR_LEN];
    int age;
    float salary;
    int experience;
    char department[MAX_STR_LEN];
    char password[MAX_STR_LEN];
} Employee;

#endif
