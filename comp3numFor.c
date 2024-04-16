void comparar(int a, int b, int c)
{
    printf("El orden de los numeros es: ");

    for (int i = 0; i < a+b+c; i++)
    {
        if (i==a)
        {
            printf("%d, ", a);
        } else if (i==b)
        {
            printf("%d, ", b);
        } else if (i==c)
        {
            printf("%d, ", c);
        }
    }
    
    
}

int main()
{
    int a, b, c;
    
    printf("Numero 1: ");
    scanf("%d", &a);
    printf("Numero 2: ");
    scanf("%d", &b);
    printf("Numero 3: ");
    scanf("%d", &c);

    comparar(a,b,c);

    return 0;
