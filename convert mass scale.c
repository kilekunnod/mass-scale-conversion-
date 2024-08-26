#include <stdio.h>

double convertMassScale(int type, double value) {
    switch (type) {
        case 1:  // kilogram to pound
            return value / 0.45359237;
        case 2:  // pound to kilogram
            return value * 0.45359237;
        case 3:  // ounce to kilogram
            return value / 35.274;
        case 4:  // kilogram to ounce
            return value * 35.274;
        case 5:  // pound to ounce
            return value * 16;
        case 6:  // ounce to pound
            return value / 16;
        default:
            return 0.0;
    }
}

int main() {
    int type;
    double value, result;

    printf("Enter the type of conversion (case 1-6): ");
    scanf("%d", &type);

    printf("Enter the value to be converted: ");
    scanf("%lf", &value);

    result = convertMassScale(type, value);

    if (result == 0.0) {
        printf("Invalid conversion type\n");
    } else {
        printf("The converted value is: %.4f\n", result);
    }

    return 0;
}