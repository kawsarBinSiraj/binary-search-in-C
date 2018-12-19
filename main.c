
#include <stdio.h>
int main() {
    
    printf("Enter the arrys  elements\n");
    int n ;
    scanf("%d", &n);
    
    int items[n];
    printf("Enter the arrys arguments\n");

    for ( int i = 0; i < n; i++ ){
        scanf("%d", &items[i]);
    }
    
    int first = 0;
    int last = n-1;
    
   
    
    printf("Enter the expected item\n");
    int v;
    scanf("%d", &v);
    
    while ( first <= last ) {
        
        int middle = (first + last) / 2;
         
        if ( items[middle] == v ){
            printf("Value Exits");
            break;
        } else if ( v  < items[middle] ) {
            last = items[middle] - 1;
        } else {
            first = items[middle] + 1;
        }
        
    }
    
    if (first > last) {
      printf("Not Found");
    }
    
    return;
}
