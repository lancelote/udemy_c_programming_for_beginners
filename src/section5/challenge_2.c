#include <printf.h>

enum Company {
    GOOGLE,
    FACEBOOK,
    XEROX,
    YAHOO = 10,
    EBAY,
    MICROSOFT
};

int main(int argc, char *argv[]) {
    enum Company company1 = XEROX;
    enum Company company2 = GOOGLE;
    enum Company company3 = EBAY;

    printf("XEROX: %d\n", company1);
    printf("GOOGLE: %d\n", company2);
    printf("EBAY: %d\n", company3);
}
