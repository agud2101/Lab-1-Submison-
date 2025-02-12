#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME 50
#define MAX_METRIC 10

char database_name[100];


static int database_changes = 0;

void print_all_records() {
    printf("You have entered the Print all records function\n");
}

void add_record() {
    int part_number;
    char part_name[MAX_NAME];
    float part_size;
    char part_size_metric[MAX_METRIC];
    float part_cost;
    
    printf("Enter Part Number: ");
    scanf("%d", &part_number);
    
   printf("Enter Part Name: ");
   scanf(" %49[^\n]", part_name);

    
    printf("Enter Part Size: ");
    scanf("%f", &part_size);
    
    printf("Enter Part Size Metric: ");
    scanf(" %s", part_size_metric);
    
    printf("Enter Part Cost: ");
    scanf("%f", &part_cost);
    
    printf("You entered:\n");
    printf("\tPart Number = %d\n", part_number);
    printf("\tPart Name = \"%s\"\n", part_name);
    printf("\tPart Size = %.2f\n", part_size);
    printf("\tPart Size Metric = \"%s\"\n", part_size_metric);
    printf("\tPart Cost = $%.2f\n", part_cost);
    
    database_changes++;
}

void delete_record() {
    printf("You have entered the delete last record function\n");
    database_changes++;
}

void print_num_records() {
    printf("You have entered the Print number of records function\n");
}

void print_database_size() {
    printf("You have entered the Print database size function\n");
}

void print_num_changes(bool print) {
    if (print) {
        printf("You have modified the database %d times\n", database_changes);
    } else {
        database_changes++;
        printf("%d modifications so far\n", database_changes);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: You must provide a database name as a command-line argument.\n");
        return 1;
    }
    
    strncpy(database_name, argv[1], sizeof(database_name) - 1);
    database_name[sizeof(database_name) - 1] = '\0';
    
    int choice;
    do {
        printf("\n%s Database Menu:\n", database_name);
        printf("1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n");
        printf("Please enter your selection > ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); 
            continue;
        }
        
        switch (choice) {
            case 1:
                print_all_records();
                break;
            case 2:
                add_record();
                break;
            case 3:
                delete_record();
                break;
            case 4:
                print_num_records();
                break;
            case 5:
                print_database_size();
                break;
            case 6:
                print_num_changes(true);
                break;
            case 7:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid selection, please try again.\n");
        }
    } while (choice != 7);
    
    return 0;
}
