#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

/**
 * @file box.h
 * @author A H Aruna name (a.aruna@ltts.com.com)
 * @brief
 * @version 0.1
 * @date 2021-02-20
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int unique_id;
    int length;
    int breadth;
    int height;
    char colour[20];
    double weight;
}box;

struct Node
{
    box data;
   struct Node *next;
};

void read_box(box *);

void display_box(box );

struct Node *getNode();

void freenode(struct Node *);

struct Node *createlist();

struct Node *insert_last(struct Node *);

struct Node*deleteAnyPos(struct Node*);

void display_list(struct Node *);


#endif // BOX_H_INCLUDED
