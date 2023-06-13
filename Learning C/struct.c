#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Movie{
    int rating;
    int year;
    char name[50];
    char animated[50];
   
};

 
int main()
{
    struct Movie movie1;
    movie1.rating = 9;
    movie1.year = 2009;
    strcpy(movie1.name, "tenet");
    strcpy(movie1.animated, "no");


    struct Movie movie2;
    movie2.rating = 4;
    movie2.year = 2109;
    strcpy(movie2.name, "aakame");
    strcpy(movie2.animated, "yes");

    printf("%s\n",movie2.name);
    printf("%s\n",movie1.name);
    printf("%d\n",movie1.year);
    printf("%s\n",movie2.animated);
    return 0;
}