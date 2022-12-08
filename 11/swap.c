
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap2(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char *argv[]) // <----
{
    int i = 42;
    int j = 23;
    printf("i=%d\tj=%d\n", i, j);
    swap2(i, j);
    printf("i=%d\tj=%d\n", i, j);
    swap(&i, &j);
    printf("i=%d\tj=%d\n", i, j);
}
