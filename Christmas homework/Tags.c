#include <stdio.h>

typedef struct tag_t
{
    char name[15];
    int selfclosing;
    struct tag_t* child;
}html;

void print_markup(struct tag_t tag);

int main()
{
    
    struct tag_t body = {"body",1,NULL}; //body aint selfclosing
    struct tag_t html = {"html",0,&body};
    
    print_markup(body);
    print_markup(html);
    
    return 0;
}
void print_markup(struct tag_t tag)
{
    if(tag.selfclosing == 1)
        {
            printf("<%s/>\n",tag.name);
        }
    else
        {
            printf("<%s><%s/></%s>\n",tag.name,tag.child->name,tag.name);

        }
}