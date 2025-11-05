#include <stdio.h>
#include <string.h>

// Structure to store user credentials
typedef struct {
    char username[100];
    char password[100];
} User;

// Function to register a new user
void registerUser(User *users, int *n) {
    printf("Enter username: ");
    scanf("%s", users[*n].username);
    printf("Enter password: ");
    scanf("%s", users[*n].password);
    (*n)++;
}

// Function to login an existing user
int loginUser(User *users, int n) {
    char username[100];
    char password[100];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    for (int i = 0; i < n; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("Login successful!\n");
            return 1;
        }
    }
    printf("Invalid username or password\n");
    return 0;
}

int main() {
    User users[100];
    int n = 0;
    int choice;

    while (1) {
        printf("1. Register\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser(users, &n);
                break;
            case 2:
                loginUser(users, n);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
