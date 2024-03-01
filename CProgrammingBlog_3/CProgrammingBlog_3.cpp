//#include <stdio.h>
//
//int main()
//{
//	int n = 10;
//	double d = 3.14;
//	void* p;
//
//	p = &n;
//	printf("%p %d\n", p, *(int*)p);
//}

//#include <stdio.h>
//
//int main()
//{
//	const char* s = "ABC";
//	printf("%c %c\n", *(s + 2),s[2]);
//	printf("%s %s\n", s + 1, &s[1]);
//}

//#include <stdio.h>
//
//int main()
//{
//	char s1[3] = { 'A', 'B', 'C' }; // 오류
//	char s2[4] = { 'A', 'B', 'C'};
//	char s3[] = { 'A', 'B', 'C' }; // 오류
//	char s4[4] = { 'A', 'B', 'C', '\0'}; 
//	char s5[] = { 'A', 'B', 'C', '\0' }; 
//	char s6[4] = "ABC";
//	char s7[] = "ABC";
//
//	printf("1. %s\n", s1);
//	printf("2. %s\n", s2);
//	printf("3. %s\n", s3);
//	printf("4. %s\n", s4);
//	printf("5. %s\n", s5);
//	printf("6. %s\n", s6);
//	printf("7. %s\n", s7);
//
//	char s[] = "ABC";
//	printf("%c %c\n", s[2], *(s + 2));
//	printf("%s %s\n", &s[1], s + 1);
//}

#include <stdio.h>

int main()
{
	const char* s1[3] = { "abc", "ABC", "hello" };
	const char* s2[] = { "abc", "ABC", "hello" };

	printf("%c\n", s1[1][1]);
	printf("%s\n", s1[2]);
}