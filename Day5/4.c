#include <stdio.h>
#define SIZE 10
//prototypes
void bubble(int work[], size_t size, int(*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);
int main(void)
{
        int order; // 1 for ascending order or 2 for descending order
        size_t counter; //counter
        // initialize unordered array a
        int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
        printf("%s","Enter 1 to sort in ascending order,\n"
                "Enter 2 to sort in descending order: ");
        scanf("%d",&order);
        puts ("\n");
        // output original array
        for (counter=0; counter<SIZE; ++counter) {
                printf("%5d",a[counter]);
        } // end for
          //sort array in ascending order; pass function ascending as an arguement to specify ascending sorting order
          if(order==1) {
                  bubble(a,SIZE,ascending);
                  puts("\nData items in ascending order");
          }// ends if
          else { // pass function descending
                 bubble(a,SIZE,descending);
                 puts("\nData items descending order");
          } // ends else
          // output sorted array
          for (counter = 0; counter<SIZE; ++counter) {
                  printf("%5d",a[counter]);
          }// ends for
          puts("\n");
} // end main
// multipurpose bubble sort; parameter compare is a pointer to the comparision function that determines sorting order
void bubble(int work[], size_t size, int(*compare)(int a, int b)) {
  unsigned int pass; //pass counter
        size_t count; //comparision counter
        void swap(int *element1ptr, int *element2ptr);//prototype
        // loop to control passes
        for (pass =1; pass<size; ++pass) {
                // loop to control number of comparisions per pass
                for (count=0;count<size-1;++count) {
                        // if adjacent elements are out of order, swap them
                        if((*compare)(work[count],work[count+1])) {
                                swap(&work[count],&work[count +1]);
                        }// ends if
                }
        }
        //swap values at memory locations to which element1ptr and element2ptr point
        void swap(int *element1ptr, int *element2ptr)
        {
                int hold; // temporary holding variables
                hold  = *element1ptr;
                *element1ptr = *element2ptr;
                *element2ptr = hold;
        }
        int ascending (int a, int b) {
                return b<a;
        }
        int descending(int a, int b) {
                return b>a;
        }
}

