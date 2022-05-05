#define eps 1e-3
#define PI 3.14159265359

float sin(float x) {
    /* -- составить функцию, которая вычисляет синус, как сумму ряда (с точностью 0.001)
    sin(x) = x - x^3/3! + x^5/5! - x^7/7!+ ... (x в радианах)
    float sinus(float x)

    Input | Output
    ---   | ---
    30    | 0.500
    */
    float an, sum;
    
    sum = an = x *= (PI / 180);

    for (int n = 0; fabs(an) > eps; n++) {
        an *= -x * x / ( 2 * n + 2 ) / ( 2 * n + 3 );
        sum += an;
    }
    return sum;
}

float cos(float x) {
    /* -- Составить функцию, которая вычисляет косинус как сумму ряда
    (с точностью 0.001)
    cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
    float cosinus(float x)

    Input | Output
    ---   | ---
    30    | 0.866

    References:
    - https://geekstocode.com/c-program-for-cosine-series/
    */
    float sum, t; 
    sum = t = 1;

    // Convert given angle to radian value.
    x *= PI / 180;

    for (int i = 1; i <= 4; i++) {
        t *= (-1)*x * x / (2*i * (2*i - 1));
        sum += t;
    }

    return sum;
}
    

int main() {
    float x;
    scanf("%f", &x);
    printf("sin: %.3f\n", sin(x));
    printf("cos: %.3f\n", cos(x));
}
