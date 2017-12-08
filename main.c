#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#include "variant2.h"




int main(int argc, char **argv)
{
    struct LinkedList* a = malloc (sizeof (struct LinkedList));
    LinkedList_new(a);

    char as[20];
    char bs[20];
    char ss[20];
    
    strcpy(as, "test1");
    strcpy(bs, "test2");
    strcpy(ss, "test3");
   
    addNode(a, as);
    addNode(a, bs);
    addNode(a, ss);

    
    printf ("\n\n\n This is a test \n\n\n");
    data_print(a);
    reverse(a);
    printf ("\n\n\n......after reverse() implementing...... \n\n\n");
    data_print(a);
    printf("\n\n\n");

    
	return 0;
}
