// h1shell.c
   Your name here as a comment
#include <stdio.h>    // for I/O
#include <stdlib.h>   // for exit()
#include <time.h>     // for time functions
int main(int argc, char *argv[])
{
   FILE *infile;
   int i, numread;
   unsigned char buf[32768];
   time_t timer;

   if (argc != 2)
   {
       printf("Wrong number of command line arguments\n");
       printf("Usage: h1 <input filename>\n");
       exit(1);
   }

   // display your name, command line args, time
   time(&timer);      // get time
   printf("YOUR NAME HERE   %s %s   %s", 
           argv[0], argv[1], asctime(localtime(&timer)));

   infile = fopen(argv[1], "rb");
   if (!infile)
   {
      printf("Cannot open input file %s\n", argv[1]);
      exit(1);
   }
   numread = fread(buf, 1, sizeof(buf), infile);

   for (i = 0; i < numread; i++)
   {
      // Code missing here:
      // Display buf[i] here so that 16 bytes appear on each line,
      // with a space between each pair of bytes as shown in the textbook.
      // Use i to determine when to insert space and newline. Start each
      // line with the hex address of the start of that line followed by 
      // a colon.
   }
}