#include <stdio.h>
int main() {
    int i = 299;
    if (i <= 30) {
        printf("免費");
    }
    else if (i >= 240) {
        printf("240元");
    }
    else{ 
        if (i%30) {
            int price = ((i/30)+1) *30;
            printf("%d 元", price);
        }
        else {
            printf("%d 元", i);
        }
    }
  return 0;
} 
