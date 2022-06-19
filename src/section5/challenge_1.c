#include <stdio.h>

int main(int argc, char *argv[]) {
    double width;
    double height;
    double perimeter;
    double area;

    sscanf(argv[1], "%lf", &width);
    sscanf(argv[2], "%lf", &height);

    perimeter = (width + height) * 2;
    area = width * height;

    printf("height: %lf\n", height);
    printf("width: %lf\n", width);
    printf("perimeter: %lf\n", perimeter);
    printf("area: %lf\n", area);
}
