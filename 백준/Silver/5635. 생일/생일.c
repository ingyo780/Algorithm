/*
1. Date 구조체와 이를 포함하는 Person 구조체를 정의할 것
2. 두 사람의 나이를 비교하여 1 또는 0을 반환하는 compare(Person a, Person b) 함수를 만들 것
(강의자료 2장 17페이지 참고)
3. 메인 함수에서 Person 구조체의 배열 크기를 동적으로 할당할 것
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dd;
    int mm;
    int yyyy;
} Date;

typedef struct {
    char* name;
    Date date;
} Person;

int compare(Person a, Person b) {
    if (a.date.yyyy != b.date.yyyy)
        return (a.date.yyyy < b.date.yyyy) ? 1 : 0;
    if (a.date.mm != b.date.mm)
        return (a.date.mm < b.date.mm) ? 1 : 0;
    return (a.date.dd < b.date.dd) ? 1 : 0;
}

int main() {
    int n;
    scanf("%d", &n);

    Person* person = malloc(n*sizeof(Person));

    for (int i=0; i<n; i++) {
        person[i].name = malloc(15*sizeof(char));
        scanf("%s %d %d %d", person[i].name, &person[i].date.dd, &person[i].date.mm, &person[i].date.yyyy);
    }

    int o_i = 0;
    int y_i = 0;
    for (int i=0; i<n; i++) {
        if (compare(person[i], person[o_i])) o_i = i;
        if (compare(person[y_i], person[i])) y_i = i;
    }

    printf("%s\n", person[y_i].name);
    printf("%s\n", person[o_i].name);

    for (int i=0; i<n; i++) {
        free(person[i].name);
    }
    free(person);
}