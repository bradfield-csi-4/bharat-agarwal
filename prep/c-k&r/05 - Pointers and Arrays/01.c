int main(void)
{
    int x = 1, y = 2, z[10];
    int *ip;

    ip = &x; // address of x
    y = *ip; // y is 1
    *ip = 0; // x is 0
    ip = &z[0];
}   