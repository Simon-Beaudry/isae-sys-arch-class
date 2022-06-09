#include <stdio.h>
 

typedef struct point  point;

struct point {
 
    double x;
 
    double y;
};


void print_point(point p) {
    printf("(%f, %f)\n", p.x, p.y);
}

void translate_point(point *p_p,
                     point vec) {
    p_p->x += vec.x;
    p_p->y += vec.y;
}

int point_cmp(point p1, point p2)  {

    if  (  (p1.x <   p2.x)  || (  (p1.x ==  p2.x)  &&  (p1.y  <   p2.y ) ))
       return -1; 
   
    if  ( (p1.x >   p2.x)|| ((p1.x ==   p2.x)&&(p1.y  >   p2.y )))
       return 1; 
   
    return  0; 

   
}




int main() {
    struct point p1, p2;

    p1.x = 2.0;
    p1.y = 2.0;
    p2.x = 1.0;
    p2.y = 1.0;
    print_point(p1);

    point vec = { .x = -5.0, .y = 2.0 };

    //translate_point(&p1, vec);

    print_point(p1);
    printf("%d   \n", point_cmp(p1,p2)  );
    return 0;
}
