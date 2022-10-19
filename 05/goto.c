int main() {
    int i = 10;
    goto begin;
    tata: printf("%d", i);
    goto aftertata;
    begin:
    goto tata;
    aftertata:
    i = i - 1;
    if (i == 0) goto begin;

}