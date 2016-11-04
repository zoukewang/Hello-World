int main(int argc, char *argv[])
{
    printf("helloWord!\n");
    while(argc-- > 0)
    {
        printf("%s\n", *argv++);
    }
}
