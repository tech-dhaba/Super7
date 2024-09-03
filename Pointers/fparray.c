/*#include<stdio.h>
typedef int (*fp)(int*,int);
int square(int *arr,int n)
{
	int len=sizeof(arr)/sizeof(int);
	int i;
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i]*arr[i];
//		return arr[i];
	}
//	printf(" square of array is:\n%d\n",arr[i]);
	return arr[i];
}
int Double(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		arr[i]=2*arr[i];
		return arr[i];
	}
//	printf("double of array is:\n%d\n",arr[i]);
	return arr[i];
}
int mul(int *arr,int n)
{
	int i;
	int m;
	printf("Enter multiplier:\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		arr[i]=m*arr[i];
//		return arr[i];
	}
	return arr[i];
//	printf("product with %d of array is:\n%d\n",m,arr[i]);
}
int modify(int *arr,int n,fp callback)
{
	return callback(arr,n);
}
int main()
{
	int n,i;
	int a[10];
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf(" square of array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",modify(a,n,square));
	}
	printf("double of array is:\n");
	for(i=0;i<n;i++)
        {
                printf("%d",modify(a,n,Double));
        }
	printf("product with m of array is:\n");
	for(i=0;i<n;i++)
        {
                printf("%d",modify(a,n,mul));
        }

	return 0;
}*/
#include <stdio.h>

// Function prototypes
void processArray(int arr[], int size, void (*callback)(int *));
void square(int *num);
void factorial(int *num);

// Main function
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Process array with square function
    printf("Array after squaring:\n");
    processArray(arr, size, square);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reset array for factorial processing
    int arr2[] = {1, 2, 3, 4, 5};
    size = sizeof(arr2) / sizeof(arr2[0]);

    // Process array with factorial function
    printf("Array after factorial:\n");
    processArray(arr2, size, factorial);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}

// Function to process each element of the array with a callback
void processArray(int arr[], int size, void (*callback)(int *)) {
    for (int i = 0; i < size; i++) {
        callback(&arr[i]);
    }
}

// Function to square a number
void square(int *num) {
    *num = (*num) * (*num);
}

// Function to compute factorial of a number
void factorial(int *num) {
    int result = 1;
    for (int i = 1; i <= *num; i++) {
        result *= i;
    }
    *num = result;
}

