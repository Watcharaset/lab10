#include <stdio.h>
typedef struct {
    char name[64]; //student name
    char ans[10];  //answer sheet
} Student;

int checkscore(Student *s);

int main() {
    int i;
    Student std[6]= {{"AAA",{'A','B','A','C','C','D','E','E','A','D'}},//7
        		{"BBB",{'D','B','A','B','C','A','E','E','A','D'}},//6
        		{"CCC",{'E','D','D','A','C','B','E','E','A','D'}},//5
        		{"DDD",{'C','B','A','E','D','C','E','E','A','D'}},//4
        		{"EEE",{'A','B','D','C','C','D','E','E','A','D'}},//8
        		{"FFF",{'B','B','E','C','C','D','E','E','A','D'}}//7
        		
    };
    for (i=0;i<6;i++) {  
        printf("%s => %d\n",std[i].name,checkscore(&std[i]));
    }
    return 0;
}

int checkscore(Student *s) {
	char key[10] = {'D','B','D','C','C','D','A','E','A','D'};
    int score = 0;
    int i;
    for (i = 0; i < 10; i++) {
        if (s->ans[i] == key[i]) {
            score++;
        }
    }
    return score;
}
