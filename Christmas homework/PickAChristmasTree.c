#include <stdio.h>
struct tree_t{
    float height;
    int price;
};
    
struct tree_t best_price_for_height(struct tree_t tree[10]);
int main()
{   
    struct tree_t tree[10] = {
        {1.6,10},
        {0.8,2},
        {0.6,3},
        {1.5,5},
        {1,6},
        {1.2,7},
        {0.9,5},
        {0.6,4},
        {0.4,7},
        {1.5,9}

    };
    best_price_for_height(tree);
    return 0;
}
struct tree_t best_price_for_height(struct tree_t tree[10])
{
    int best_tree = 0;
    float best_ratio = ((tree[0].price / tree[0].height)/100);
    for(int i=0;i<10;i++)
    {
    if(((tree[i].price / tree[i].height)/100) < best_ratio)
        {
            best_tree = i;
            best_ratio = ((tree[i].price / tree[i].height)/100);
        }
    }
    printf("Best tree: %d\n",best_tree);
    printf("Best_ratio: %.5f", best_ratio);
}


