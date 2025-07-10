#include <stdio.h>
#include <stdlib.h>

typedef struct person {
	int age;
	int order;
	char name[101];
}person;

int compare(const void* num1, const void* num2) {
	person* a = (person*)num1;
	person* b = (person*)num2;

	if (a->age > b->age) return 1;
	else if (a->age < b->age) return -1;
	else {
		if (a->order < b->order) return -1;
		else return 1;
	}
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);

	person* p_person = (person*)malloc(sizeof(person) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d%*c%s", &p_person[i].age, &p_person[i].name);
		p_person[i].order = i;
	}

	qsort(p_person, n, sizeof(person), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %s\n", p_person[i].age, p_person[i].name);
	}

	free(p_person);
	return 0;
}


