// Joseph Fedderwitz jo570174 = UCFID
#define PI 3.14159
#include <math.h>
#include <stdio.h>

// AUTO SORT IS SHIFT + ALT + F
double calculateDistance()
{
    // printf("Please enter points for x1:")
    // printf("Please enter points for x2:")
    // printf("Please enter points for y1:")
    // printf("Please enter points for y2:")
    // Changed to one line, although it may cause confusion because people will try to enter y1 after x1 but due to teachers changes we will be doing x's first

    double x1, x2, y1, y2, distance;
    printf("Please enter points for x1, x2, y1, and y2 in this order: ");
    scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);

    //.2lf is not 1f, i thought the l was a 1 this whole time oops
    //
    printf("Point 1 entered: x1 =: %.2lf; y1 = %.2lf ", x1, y1);
    printf("\nPoint 2 entered: x2 =: %.2lf; y2 = %.2lf ", x2, y2);

    // pow ,2 is the square root dun forget
    // return distance in order to
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("\nThe distance between the two points is %2lf \n", distance);
    return distance;
}

double calculatePerimeter()
{
    // copy from calculate distance, you could use another function to store your inputs but whatever i don't want to right now
    // double x1, x2, y1, y2;
    // printf("Please enter points for x1, x2, y1, and y2 in this order: ");
    // scanf("%lf %lf %lf %lf", &x1, &x2, &y1, &y2);
    // since it's in terms of a circle it's just 2pir circumference = perimeter 2pi*distance/2

    // do this in order to just easily assign distance as diamater
    double diameter = calculateDistance();

    // assign new data storers, which would be radius and perimeter

    // quick maths
    double radius = diameter / 2.0;

    //calculate some mas
    //uh getting some weird error about linking perimeter even though i'm only calling it once?????
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %.2lf \n", perimeter);
    //was 3 just because i had a hard time thinking of perimeter as a circle or circumference
    return 3;
}

double calculateArea() {
    double diameter = calculateDistance();
    // also has to use pi
    // pir^2
    double radius = diameter / 2.0;
    double area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request %.2lf \n", area);
    return 2;
}

//it's a circle the diameter is the width:D
double calculateWidth() {
    double diameter = calculateDistance();
    printf("The width of the city encompassed by your request is %.2lf \n", diameter);
    return 1;
}

//it's a circle the diameter is the height:D
double calculateHeight() {
    double diameter = calculateDistance();
    printf("The height of the city encompassed by your request is %.2lf \n", diameter);
    return 1;
}
// optional
// double askForUserInput() sorry not doing this. I think it would solve my repeating problem but I waited too long to complete this:( Unfortunately my 
// distance between 2 points will constantly get repeated but whatever

int main(int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    return 0;
}