#include "calc.h"
int getop(char *s)
{
    ungetch(4);
    return *s;

}
/* note not including the return type; this is declared in calc.h...actually, when compiling with clang,
 * I get a warning that the non return type will default to int. Including calc.h makes no difference. Also, with clang, if I leave
 * the argument list empty, but including calc.h, there is no complaint (although when you write the function, I wonder if you would need
 * to wrtie a an argument? Nope you need it with or wihtout include, both compilers. Without the include of calc.h, there is no complaint with gcc*/
