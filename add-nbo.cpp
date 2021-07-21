#include <stdio.h>   //printf
#include <stdint.h>  //uint32_t
#include <stddef.h>   //sizeof, size_t
#include <netinet/in.h>   //ntohl(net->host)

int main(int argc, char *argv[])
{
    uint32_t a, b;

    FILE *f1 = fopen(argv[1], "r");
    fread(&a, sizeof(a), 1, f1);

    FILE *f2 = fopen(argv[2], "r");
    fread(&b, sizeof(b), 1, f2);

    uint32_t m = ntohl(a);
    uint32_t n = ntohl(b);

    uint32_t r = m + n;

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", m, m, n, n, r, r);

    return 0;
}
