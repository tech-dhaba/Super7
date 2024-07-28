#include <stdio.h>
enum {
        Electronics,
        Apparel,
        Groceries
};
int main()
{
        int basecost = 0;
        for (int i=Electronics; i<=Groceries; i++)
        {
	  switch (i) {
                case Electronics:
                basecost = 1000;
                printf("Electronics: %d\n",basecost);
                break;
                case Apparel:
                basecost = 500;
                printf("Apparel: %d\n",basecost);
                break;
                case Groceries:
                basecost = 200;
                printf("Groceries: %d\n",basecost);
                break;
                default:
                printf("Default\n");
                break;
		                   }
        }
  return 0;
}

