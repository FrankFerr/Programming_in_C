#ifndef INVENTORY_H
#define INVENTORY_H

#define MAX_PROD 100
#define NAME_LEN 20
#define FORMAT_STR "|%6d%4s|%20s|%6d%5s|\n"

typedef struct{
    int id;
    char name[NAME_LEN + 1];
    int qta;
}  Prod;

void insert(void);
void search(void);
void update(void);
void print(void);

#endif