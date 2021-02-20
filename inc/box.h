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

#ifndef  BOX_H__
#define  BOX_H__



/**
 * @brief  structure of box 
 * 
 */
struct box{
    int unique_id;
    int length;
    int breadth;
    int height;
    char colour[20];
    double weight;
};

struct box *b1;
    int ch;
    int size;

/**
 * @brief adding a box at the end of array
 * 
 */

struct box enter_details(struct box *,int );
/**
 * @brief 
 * 
 */

/**
 * @brief 
 * 
 */
struct box display(struct box *,int );

#endif //BOX__H