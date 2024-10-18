#include <stdio.h>

int main() 
{
    int length = 8;
    int width = 2;
    int height = 5;
    int surface_area_of_cuboid;
    
    surface_area_of_cuboid = 2 * (length * width + width * height + height * length);
    
    printf("Value of length is : %d\nValue of width is : %d\nValue of height is : %d\n\n", length,width,height);
    printf("Surface area of the cuboid : %d\n", surface_area_of_cuboid);
    
    return 0;
}
