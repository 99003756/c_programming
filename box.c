#include "box.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


struct box enter_details(struct box *pb,int s)
{
    int i;
    for(i=0;i<s;i++)
    {
        printf("\nEnter the structure parameters: unique ID,length,breadth,height,colour,weight");
        scanf("%d%d%d%d%s%lf",&pb[i].unique_id,&pb[i].length,&pb[i].breadth,&pb[i].height,pb[i].colour,&pb[i].weight);
    }
    return *pb;
    
}

struct box display(struct box *pb,int s)
{
    int i;
    printf("\n Details of the boxes");
    for(i=0;i<s;i++)
        {
            printf("\n Unique ID = %d \t Lenght = %d \t Breadth = %d \t Height = %d \n colour = %s \t Weight = %lf",pb[i].unique_id,pb[i].length,pb[i].breadth,pb[i].height,pb[i].colour,pb[i].weight);
        }
    return *pb;
}