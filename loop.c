#include <stdio.h>

int main(void) {
    
    char name[256];
    printf("What ur name?\n");
    scanf_s("%s", name, sizeof(name));

    int age;
    printf("How old are you?\n");
    scanf_s("%d", &age);

    float weight;
    printf("What is your weight?\n");
    scanf_s("%f", &weight);

    double height;
    printf("How tall are you?\n");
    scanf_s("%lf", &height);

    char what[256];
    printf("What crime did you do?\n");
    scanf_s("%s", what, sizeof(what));

    //조서내용 출력
    printf("Name    : %s\n", name);
    printf("Age     : %d\n", age);
    printf("Weight  : %.2f\n", weight);
    printf("Height  : %.2lf\n", height);
    printf("Crime   : %s\n", what);

    return 0;
}