#include <stdio.h>
#include <string.h>

typedef struct barbaron_t{
    char type;
    char size;
    int price;
}barbaron;

typedef struct barbaron_shop_t{
    struct barbaron_t barbaron[10];
    int barbaron_count;
}barbaron_shop;

void add_barbaron(struct barbaron_shop_t barbaron_shop[10], struct barbaron_t barbaronche);
struct barbaron_t buy_barbaron(struct barbaron_shop_t *shop, char type, char size, int *money);

int main()
{
   struct barbaron_shop_t barbaron_shop = {{0,0,0},0};
   struct barbaron_t barbaron = {'B','S',15};
   struct barbaron_t barbaron2 = {'C','M',10};
   struct barbaron_t barbaron3 = {'B','S',10};
   struct barbaron_t barbaron4 = {'B','S',5};
   add_barbaron(&barbaron_shop, barbaron);
   add_barbaron(&barbaron_shop, barbaron2);
   add_barbaron(&barbaron_shop, barbaron3);
   add_barbaron(&barbaron_shop, barbaron4);
   int money = 15;
   buy_barbaron(&barbaron_shop,'B','S', &money);
    return 0;
}
void add_barbaron(struct barbaron_shop_t *shop, struct barbaron_t barbaronche)
{   
    int i;
    for(i=0;i<10;i++)
    {   
        if(shop->barbaron[i].type == 0)
        {
        shop->barbaron[i] = barbaronche;
        shop->barbaron_count += 1;
        break;
        }
    }
}
struct barbaron_t buy_barbaron(struct barbaron_shop_t *shop, char type, char size, int *money)
{
    for(int i=0;i<10;i++)
    {
        if(shop->barbaron[i].type == type && shop->barbaron[i].size == size 
        && shop->barbaron[i].price < money[0])
        {
            money -= shop->barbaron[i].price;
            printf("%c\n",shop->barbaron[i].type);
            printf("%c\n",shop->barbaron[i].size);
            printf("%d\n",shop->barbaron[i].price);
            break;
        }
    }
}

