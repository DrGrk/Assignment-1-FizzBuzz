//
//  main.c
//  FizzBuzz
//
//  Created by David Guichon on 2017-02-06.
//  Copyright © 2017 David Guichon. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
                /* Create an Array with 99 integer values of 1-100
                    // Make the Array output each value
                    For every multiple of 3, make the array ouput "Fizz" instead of index value
                    For every multiple of 5, make the array output "Buzz" instead of index value
                    For every multiple of 3 and 5, make the array output "FizzBuzz" instead of index value
                 */
    
    int array [99];
    int a = 0;
    int b = 1;

    
    for (a = 0; a<100; a++)
    {
        array[a] = b;
        
        
        
        if (b%3==0 && b%5==0)
        {
        printf("FizzBuzz\n");
        }
        
        else if (b%3==0)
        {
        printf("Fizz\n");
        }
        
        else if (b%5==0)
        {
        printf("Buzz\n");
        }
        
        
        else if (b%3!=0 && b%5!=0)
        {
        printf("%d\n", array[a]);
        }
        
        b = b+1;
        
    }

    
    return 0;
}
