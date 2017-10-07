#include <stdio.h>

/* Exercise 1_10 */
main ()
{
    int c;

    while((c = getchar()) != EOF)
    {
        if (c == '\t')
            printf("\\t"); /* I am not sure if this is implied in the book. However perhaps if I had done ex1-2 (as I now have), experimentation could of revealed the result.
                            Using \ as the escape character, I am escaping \, hence writing it (then followed by t). Hmmm actually they did mention it, with the mention of
                            the escape sequence for a double quotation mark is \", so this implies for backslash(forward, whatever), it is \\.

                            Note I could of written printf("%s", "\\t"), as %s is mentioned for sting constants. Note you need to write "" for the string constant, as that is what
                            a string constant. Note that "\t" is a string constant of 1 character - ""\\t" is one of two. This is because of the escape character \.    
                            "\t" in printf will print a tab - that is four blank spaces. */
        
        if (c == '\b')      /* In bash shell on ubuntu linux, will need to enter CTRL + H to get \b to be printed out. CTRL + H sends ascii code 8 which is backspace */
            printf("\\b");
        if (c == '\\')
            printf("\\\\");  /* Note that \\\ won't compile. \\ is an escape sequence for backslash. In \\\, the third \ is waiting for a character to create an escape sequence - this is 
                            the same as just applying printf to "\" - compile error will ensue */
        
        
        /* Remember I am not using anything I have not come up to in the book yet. The below is equivalent to if(c != '\t' && c != '\b' && c !='\\') putchar(c)*/

        if (c != '\t')
            if (c != '\b')
                if (c != '\\')
                    putchar(c);


    }
}
