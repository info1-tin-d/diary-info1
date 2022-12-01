int main() {
    int v = 42;
    int *q = &v;

    int *p = (int*)0x12345;
    int u = *p; // Segmentation fault

    int *ptr;
}
