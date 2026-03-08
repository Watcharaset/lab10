#include <stdio.h>
#include <string.h>

typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[20];
	char nameSurname[25];
	account stdACC;
} hoststd;
			
int main() {
	hoststd cs[5] = {
		{"66-040626-2686-9", "MR.A",{"user1", "passwd1"}},
		{"66-040626-2686-8", "MR.B", {"user2", "passwd2"}},
	    {"66-040626-2686-7", "MR.C", {"user3", "passwd3"}},
	    {"66-040626-2686-6", "MR.D", {"user4", "passwd4"}},
	    {"66-040626-2686-5", "MR.E", {"user5", "passwd5"}}
	};
	char inputUser[64];
    char inputPass[64];
    int i, found = 0;
	printf("Enter Name: ");
    scanf("%s", inputUser);
    printf("Enter Password: ");
    scanf("%s", inputPass);

    for (i = 0; i < 5; i++) {
        if (strcmp(inputUser, cs[i].stdACC.loginname) == 0 && strcmp(inputPass, cs[i].stdACC.password) == 0) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
    return 0;
}


