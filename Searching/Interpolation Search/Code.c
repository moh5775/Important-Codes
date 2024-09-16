#include <stdio.h>

int main() {
    int n, i;
    printf("Array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter Array Elements (sorted): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    int index = -1;
    int first = 0;
    int last = n - 1;
    if (a[first] == key) {
        index = first;
    }

    else if(a[last]==key)
    {
        index = last;
    }
    else
    {
        while (first <= last) {

            int mid = first + ((key - a[first]) * (last - first)) / (a[last] - a[first]);

            if (a[mid] == key) {
                index = mid;
                break;
            }
            else if (a[mid] < key) {
                first = mid + 1;
            } else {
                last = mid - 1;
            }
        }


    }
    if (index == -1) {
        printf("Not found\n");
    }
    else
        printf("Index of the searching element: %d\n", index);

    return 0;
}