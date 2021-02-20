#include <stdio.h>
#include "box.h"
#include<stdlib.h>
int main()
{
    
    printf("\n Enter the size of boxes");
    scanf("%d",&size);
    b1 = (struct box *)malloc(size * sizeof(struct box));
    do
    {
        printf("\n Enter choice 1->Enter details\n 2->Display all\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enter_details(b1,size);
                    break;
            case 2:display(b1,size);
                    break;
            default:printf("\n Do nothing");
                    break;
        }
    }while(ch!=3);

    return 0;
}