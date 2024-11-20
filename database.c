//RUSTAM SINGH TOMER RA2111003011677
//SHIKHAR SHARMA RA2111003011691
#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct details {
    char name[20];
    int price;
    int code;
    int qty;
    struct date mfg;
};

int main() {
    struct details item[50];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nItem %d details:\n", i + 1);

        printf("Item name: ");
        scanf(" %[^\n]", item[i].name);  // Space before %[^\n] ensures any trailing newline is skipped

        printf("Item code: ");
        scanf("%d", &item[i].code);

        printf("Quantity: ");
        scanf("%d", &item[i].qty);

        printf("Price: ");
        scanf("%d", &item[i].price);

        printf("Manufacturing date (dd-mm-yyyy): ");
        scanf("%d-%d-%d", &item[i].mfg.day, &item[i].mfg.month, &item[i].mfg.year);
    }

    // Display inventory
    printf("\n ***** INVENTORY *****\n");
    printf("------------------------------------------------------------------\n");
    printf("S.N. | NAME           | CODE  | QUANTITY | PRICE  | MFG.DATE\n");
    printf("------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-4d | %-15s | %-5d | %-8d | %-6d | %02d/%02d/%04d\n",
               i + 1,
               item[i].name,
               item[i].code,
               item[i].qty,
               item[i].price,
               item[i].mfg.day,
               item[i].mfg.month,
               item[i].mfg.year);
    }

    printf("------------------------------------------------------------------\n");
    return 0;
}

