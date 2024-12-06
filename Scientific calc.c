#include<stdio.h>
#include<math.h>
#include <float.h>

int factorial(int x) {
    int fact = 1, i;
    for(i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;    
}

int combination(int n, int r) {
    int ncr;
    ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int permutation(int n, int r) {
    int npr;
    npr = factorial(n) / factorial(n - r);
    return npr;
}

int main() {
    double a, b, x, d;
    int choice;

    // Fixed input format to match the correct data types
    printf("Enter the operands: ");
    scanf("%lf %lf %lf", &a, &b, &x);
    scanf("%lf", &d);

    // Print the menu of operations
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("5. power\n");
    printf("6. square root\n");
    printf("7. cube root\n");
    printf("8. cubic\n");
    printf("9. log base 10\n");
    printf("10. factorial\n");
    printf("11. epsilon\n");
    printf("12. differentiation\n");
    printf("13. exponential\n");
    printf("14. abs\n");
    printf("15. sin\n");
    printf("16. sin inverse\n");
    printf("17. cos\n");
    printf("18. cos inverse\n");
    printf("19. tan\n");
    printf("20. tan inverse\n");
    printf("21. percentage\n");
    printf("22. nPr\n");
    printf("23. nCr\n");
    printf("24. ln\n");
    printf("25. x square\n");
    printf("26. integration\n");
    printf("27. remainder\n");
    printf("28. round\n");
    printf("29. modf\n");
    printf("30. ceil\n");
    printf("31. cosec\n");
    printf("32. cosec inverse\n");
    printf("33. sec\n");
    printf("34. sec inverse\n");
    printf("35. cot\n");
    printf("36. cot inverse\n");

    // Get user choice
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("%lf\n", a + b);
            break;

        case 2:
            printf("%lf\n", a - b);
            break;

        case 3:
            printf("%lf\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("%lf\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;

        case 5:
            printf("%lf\n", pow(a, b));
            break;

        case 6:
            printf("%lf\n", sqrt(a));
            break;

        case 7:
            printf("%lf\n", cbrt(a));
            break;

        case 8:
            printf("%lf\n", pow(a, 3));
            break;

        case 9:
            printf("%lf\n", log10(a));
            break;

        case 10:
            printf("%d\n", factorial((int)a));
            break;

        case 11:
            printf("Epsilon: %lf\n", DBL_EPSILON);
            break;

        case 12:
            // Placeholder for differentiation logic (requires more info to implement)
            printf("Differentiation not implemented.\n");
            break;

        case 13:
            printf("%lf\n", exp(a));
            break;

        case 14:
            printf("%lf\n", fabs(a));
            break;

        case 15:
            printf("%lf\n", sin(a));
            break;

        case 16:
            printf("%lf\n", asin(a));
            break;

        case 17:
            printf("%lf\n", cos(a));
            break;

        case 18:
            printf("%lf\n", acos(a));
            break;

        case 19:
            printf("%lf\n", tan(a));
            break;

        case 20:
            printf("%lf\n", atan(a));
            break;

        case 21:
            printf("Percentage: %lf%%\n", (a / b) * 100);
            break;

        case 22:
            printf("%d\n", permutation((int)a, (int)b));
            break;

        case 23:
            printf("%d\n", combination((int)a, (int)b));
            break;

        case 24:
            printf("%lf\n", log(a));
            break;

        case 25:
            printf("%lf\n", pow(x, b));
            break;

        case 28:
            printf("%lf\n", round(d));
            break;

        case 29:
            printf("%lf\n", modf(a, &d));
            break;

        case 30:
            printf("%lf\n", ceil(a));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
