#include<stdio.h>
 enum ProductCategory{
                Elecctronics,
                Apparel,
                Groceries
};
int main()
{
        for (int i=Elecctronics; i<=Groceries; i++)
        {
                if (i == Elecctronics)
                {
                printf("%d\n",i);
                }
        }
 }


