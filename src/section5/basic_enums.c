#include <stdbool.h>

int main() {
    enum Animal { cat, dog };
    enum Animal myCat;
    myCat = cat;
    enum Animal myDog = dog;

    bool isMale = (cat == dog);
}
