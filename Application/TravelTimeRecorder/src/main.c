#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	/** Calculate the total travel time **/
	
	/* For now its only between Syd and Ade */
	
	/* This is how I think I want the input (on the command line):
	 * programName <departureCity> <leavingTime> <destinationCity> <arrivalTime>
	 *
	 *we have only ade and syd now, so the input will be:
	 *
	 * ade 0930 syd 2230
	 *
	 * ade and syd, i.e argv[1] and argv[3], will need to be compared with respect to their GMT offsets.
	 */
	
	/* This does lead to more fundamental implementation need for calculating time, or time arithmetic, and not only that, but how to take in string (a char*) from the command line, and
	 * convert it to an int.
	 *
	 * The stdlib atoi will do the string to int conversion. The C lib also has some date and time manipulation
	

	
}
	
		
	
	
	


