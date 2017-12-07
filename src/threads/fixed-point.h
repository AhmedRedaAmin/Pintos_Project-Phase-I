#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

struct fixed_point
{
    int64_t value;
};
/* Macro Definitions for fixed point arithmetic , a more clean and
   readable way of carrying out this type of operations. */


// fixed point region , fixed point variable f
#define F_P 16384
// convert integer to fixed point simulation - return @fixed
#define TO_FIX(n) (n*F_P)
// Round down fixed point - return @integer
#define ROUND_D(x) (x/F_P)
// Round nearest fixed point(+ve) - return @integer
#define ROUND_N_POS(x) ((x+(F_P/2))/F_P)
// Round nearest fixed point(-ve) - return @integer
#define ROUND_N_NEG(x) ((x-(F_P/2))/F_P)
// Adds 2 fixed point numbers  - return @fixed
#define ADD_FIX(x,y) (x+y)
// Subs 2 fixed point numbers - return @fixed
#define SUB_FIX(x,y) (x-y)
// Adds a fixed point and an integer - return @fixed
#define ADD_FIX_INT(x,n) (x+ n*F_P)
// Subtract a fixed point and an integer - return @fixed
#define SUB_FIX_INT(x,n) (x- n*F_P)
// Multiply 2 fixed point numbers - return @fixed
#define MUL_FIX(x,y) (((int64_t)x)*y/F_P)
// Multiply a fixed point number and an integer - return @fixed
#define MUL_FIX_INT(x,n) (x*n)
// Divide 2 fixed point numbers - return @fixed
#define DIV_FIX(x,y) (((int64_t) x) * F_P / y)
// Divide a fixed point number by an integer - return @fixed
#define DIV_FIX_INT(x,n) (x/n)

#endif /* threads/fixed-point.h */
