#include <stdio.h>
#include <string.h>

struct point_t
{
    float x;
    float y;
};
struct rect_t
{
    struct point_t point;
    float width;
    float height;
};

int contains(struct rect_t, struct point_t);
int main()
{
    struct point_t p1 = {2.0,3.0};
    struct rect_t rect = {{0,5.0},4.0,5.0};
    printf("%d\n",contains(rect,p1));
    return 0;
}
int contains(struct rect_t rect, struct point_t point)
{
    if(point.x > rect.point.x && point.x < (rect.point.x + rect.width) && point.y < rect.point.y && point.y > (rect.point.y - rect.height))
        return 1;
    return 0;
}
