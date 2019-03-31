/*
 * @Author: HuangYuhui 
 * @Date: 2019-02-01 15:03:48 
 * @Last Modified by: HuangYuhui
 * @Last Modified time: 2019-02-01 15:46:23
 */

/*
 *  (っ•̀ω•́)っ✎⁾⁾
 * 
 * 程序填空题
 * 此程序中,函数'fun'的功能是计算该式 : S = 1/2² + 3/4² + 5/6² + ··· +(2xn-1)/(2xn)² 直到 ∣(2xn+1)/(2xn)²∣<='十的负三次方' 
 */
#include <stdio.h>
#include <math.h>
/**
 * !error : exponent has no digits.
 * ?http://www.itkeyword.com/doc/8470400809990960x562/why-is-this-c-or-c-macro-not-expanded-by-the-preprocessor
 */
#define E(X) 1e-##X

/*
 * Declare the method.
 */
static double fun(double e);

/*
 * Test the program
 */
int main(int argc, char const *argv[])
{
    double e = E(3);
    printf("The result is : %f\n", fun(e));

    getchar();
    return 0;
}

/*
 * Defined the method.
 */
static double fun(double e)
{
    int i = 0; //! Blank
    double sum = 0, result = 1.0;
    while (result > e)
    {
        i++;                                              //! Blank
        result = (2.0 * i - 1) / ((2.0 * i) * (2.0 * i)); //! Blank
        sum = sum + result;
    }
    return result;
}