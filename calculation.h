void screen();
double division(double number[2]);
double multiplication(double number[2]);
double subtraction(double number[2]);
double addition(double number[2]);

void screen(){
    printf("|--------------------|\n");
    printf("||    Calculator    ||\n");
    printf("|--------------------|\n");
    printf("|--------------------|\n");
    printf("|| 7 || 8 || 9 || / ||\n");
    printf("|| 4 || 5 || 6 || * ||\n");
    printf("|| 1 || 2 || 3 || - ||\n");
    printf("|| 0 || = || . || + ||\n");
    printf("|--------------------|\n\n");

}

double division(double number[2]){
    double result = (number[0] / number[1]);
    return result;
}

double multiplication(double number[2]){
    double result = (number[0] * number[1]);
    return result;
}

double subtraction(double number[2]){
    double result = (number[0] - number[1]);
    return result;
}

double addition(double number[2]){
    double result = (number[0] + number[1]);
    return result;
}