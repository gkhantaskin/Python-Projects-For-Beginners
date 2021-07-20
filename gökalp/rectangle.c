int main(int argc, char const *argv[])
{
    int rowsize, columnsize;
    printf("Please type your rowsize :");
    scanf("%i", &rowsize);
    printf("Please type your columnsize :");
    scanf("%i", &columnsize);
    for (int i = 0; i < rowsize; i++)
    {
        for (int z = 0; z < columnsize; z++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
