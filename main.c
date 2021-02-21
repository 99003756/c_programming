#include "box_src.c"

int main()
{
  struct Node *first;
  box p;
   int ch;
   first=createlist();
   do
   {
       printf("\n 1->insert from last \n 2->delete any position \n 3->Displayall \n 4->exit");
       scanf("%d",&ch);
       switch(ch)
       {
         case 1:first=insert_last(first);
                  break;
         case 2: first=deleteAnyPos(first);
                break;
         case 3:display_list(first);
                 break;
        default:printf("\n Do nothing\n");
                break;
       }

   }while(ch!=4);
    return 0;
}

