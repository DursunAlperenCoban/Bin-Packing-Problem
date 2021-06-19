#include <stdio.h>

#include <binpack.h>

int main(void)
{
    unsigned int sizes[] = { 1, 4, 9, 4, 1, 5, 8, 3, 2, 5, 7, 3, 2, 6 };
    const unsigned int numitems = 14;
    unsigned int bins[numitems];
    const unsigned int binsize = 10;
    unsigned int item;
    unsigned int bins_used = fit(binsize, sizes, bins, numitems);
    printf("%d bins were used\n", bins_used);
    for (item = 0; item < numitems; item++) {
        printf("Item #%d (size %d) is in bin %d\n", item, sizes[item], bins[item]);
    }
    return 0;
}
