#include <stdio.h>
struct node
{
	int data;
	struct node* next;
};
main()
{
	struct node n1, n2, n3, n4, n5,*p;
	n1.data = 22;
	n2.data = 33;
	n3.data = 55;
	n5.data = 11;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	n5.next = NULL;
	p = &n1;
	while (p->next != NULL)
		printf("%d\t", p->data);
	p = p->next;
}
