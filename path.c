#include <stdio.h>
#include <stdint.h>
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

void calculate_path_distance(struct path *path){

struct point *first=path->points;
	double d;
	while(first->next!=NULL){
		d+=sqrt(pow((first->coordinates[0]-first->next->coordinates[0]),2) + pow((first->coordinates[1]-first->next->coordinates[1]),2) + pow((first->coordinates[2]-first->next->coordinates[2]),2));
		first=first->next;

	}
	path->distance=d;
}