/* In another of the programs here, it is found that EOF (at least on this machine, or using gcc compiler)
 is -1. However, entering -1 into the console is seems to be read as two characters '-' and '1'.
 These will have ASCII values associated with them. This can be shown explicitly: */

#include <stdio.h>

main ()
{
    int c = 0;
    
    /*******************************************************************************************************
     The code below produces something interesting.
     At the console, if you leave it blank, and just 
     press enter to allow for the next input, the print out
     will be 0 - or the value of c (which evidently is 0 on this machine even though not defined so)
     If you put in 1, then the print out will, on two lines as you have a \n in the print statement, 
    0 and 0 on (or value of c - try this by defining the value of c to be something explicit). It counts the non-EOF blank entry
    as a successfull pass of the condition getchar() != EOF. That makes sense - not putting anything in NOT an EOF.
    
    This is subtle but makes sense if you consider K&R's definition of a text stream:
        
        A text stream is a sequence of characters divided into lines; each line consists
        of ZERO or more characters, followed by a newline character.

    Pressing ENTER in the bash terminal seems to represent this newline character (and indeed a quick search on StackOverflow has an answer
    supporting this observation)

    The standard library getchar function works like so (from K&R):
    
        Each time it is called, getchar reads the NEXT INPUT CHARACTER from
        a TEXT STREAM and returns that as its value.

    So, as this programs shows, in the bash terminal, no input is one input (at least with getchar function).  
     **********************************************************************************************************/ 
    
    /*----------------------
    while(getchar() != EOF)
        printf("%d\n", c);
    ------------------------*/


    /* Here I store the value of getchar */
    
    /*
    while((c = getchar()) != EOF)
        printf("%d\n", c);
    */ 
    
    /**************************************************************************************************************** 
    Whoa!! Well this was enlightening! Put no input in... ASCII code 10 is printed. Okay great, so "no input" is 10 
    naively. But hang on. But in 12 and press enter. Print outs are... ASCII code (1), ASCII code (2) and then 10...
    The enter key is the newline command (or after some searching on StackOverflow, the linefeed, or LF).
    After the enter key is pressed, the while statement is run (i.e condition tested, then body run depending on test result).
    
    The intersting thing here, and what I do not think is immediately obvious from K&R (maybe because I am in the Tutorial Intro, or
    it doesn't follow for me) is that the while loop is executed upon the LF command (here on bash, pressing enter). I am interested
    in what happens at run-time. It makes sense - put your input in, then press enter, and have the opportunity to put in more input.
    By doing this you are writing in lines. When you press enter though, getchar will read this. 

    Pressing the enter key sends a character to the text stream, however it also seems to be the command to say 
    "okay I have entered my fist line - I can now call getchar (via the while statement) on each of the characters of the
    text stream".

    When the program reaches getchar, it hands over control to the terminal for input. Is it getchar itself, or the programs
    interaction with the run-time environment? The operating system? This would be very interesting to try on windows.

    
    *******************************************************************************************************************/
   

 
    /******************************************************************************************************************
    The following code shows some interesting stuff happening on Bash terminal on the GNU/Linux distro ubuntu with putchar.
    
    I might have to look up the english definition (rather than the CS one) of interleaving. K&R mention that call to putchar
    and printf may be interleaved - and that the output will appear in the order in which the calls are made.
   
    .....................*/
    
    /*.... Here is one order....*/ 
    /*
    while((c = getchar()) != EOF)
    {   
        printf("%d\n", c); 
        putchar(c);
    } 
    */
    /*.... And here is another....*/ 

    while((c = getchar()) != EOF)
    {   
        putchar(c);
        printf("%d\n", c); 
    } 
    
    

    /******* other things to look at:

            - remove the \n in the format specifier in printf and observe. It seems like the \n in the format specifier (what about outside of?)
                adds a line before and after c....
        
            - observe what happens with ((c = getchar()) != EOF && (c = getchar()) != 10)) and also replacing && with ||. Some interesting behaviour.
                Note that 10 is ASCII code for LF, signifying a new line.

    *****/








/* while((c = getchar()) != 10)
        printf("%d\n", c); */
 
   /* printf("%d\n", c); */
    
}
