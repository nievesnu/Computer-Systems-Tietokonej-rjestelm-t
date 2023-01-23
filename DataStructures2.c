#include <stdio.h>
#include <math.h>

struct point {
  int coordinates[3];
  struct point *next;
};

struct path {
  double distance;
  struct point *points;
};

void calculate_path_distance(struct path *path);

main(){
    struct point a1, a2 ,a3;
    a1.coordinates[0]=1.00;
    a1.coordinates[1]=2.00;
    a1.coordinates[2]=3.00;
    a1.next=&a2;
    a2.coordinates[0]=3.00;
    a2.coordinates[1]=4.00;
    a2.coordinates[2]=6.00;
    a2.next=&a3;
    a3.coordinates[0]=4.00;
    a3.coordinates[1]=4.00;
    a3.coordinates[2]=4.00;
    a3.next=NULL;
    struct path path1= {0.00,&a1};
    calculate_path_distance(&path1);
printf ("%f",path1.distance);
return 0;
}

void calculate_path_distance(struct path *path){

struct point *first=path->points;
double d;
while(first->next!=NULL){
d+=sqrt(pow((first->coordinates[0]-first->next->coordinates[0]),2) +
                 pow((first->coordinates[1]-first->next->coordinates[1]),2) +
                 pow((first->coordinates[2]-first->next->coordinates[2]),2));
                 first=first->next;

}
/*double da2a3=sqrt(pow((path->points->next->coordinates[0]-path->points->next->next->coordinates[0]),2) +
                 + pow((path->points->next->coordinates[1]-path->points->next->next->coordinates[1]),2) +
                 + pow((path->points->next->coordinates[2]-path->points->next->next->coordinates[2]),2)) ;*/
path->distance=d;
}
