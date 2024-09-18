#define LIMIT 1000
int main(void)
{
    register int i; /* local variable of type register*/
    for (i = 0; i < LIMIT; i++)
    {
        printf("%8d", i);
    }
    return 0;
}
