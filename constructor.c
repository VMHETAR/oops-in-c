#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int x;
    int y;
} Point;

Point* Point_new(int x , int y){
    Point *p = malloc(sizeof(Point));
    p->x = x;
    p->y = y;

    return p;   
} 
void Point_print(Point *p){
    printf("Point(%d, %d)\n", p->x, p->y);
}

int main(){
    Point *p  = Point_new(10,20);
    Point_print(p);
    free(p);
    return 0;
}