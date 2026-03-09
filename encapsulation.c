/*
Group data and functions together
*/
# include <stdio.h>
# include <conio.h>

typedef struct{
    int value;
}Counter;
Counter c1;

void increment(Counter *c){
    c->value++;
}

void print(Counter *c){
    printf("Counter value: %d\n", c->value);
}

int main(){
    Counter c = {0};  //Initializing the counter to 0 
    increment(&c);
    increment(&c);

    print(&c);
    return 0;
}