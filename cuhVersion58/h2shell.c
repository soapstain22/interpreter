// h2shell.c
Your name here as a comment
#include <stdio.h>    // for I/O
#include <stdlib.h>   // for exit()
#include <time.h>     // for time functions

FILE *infile;

// nextbyte() handles any input file size
int nextbyte()
{
   // Declaring the following variables static so they 
   // retain their values between calls.
   static unsigned char buf[100];
   static int numread, bufindex = sizeof(buf);

   if (bufindex == sizeof(buf))
   {
      // Code missing here:
      // Read next 100-byte block and reset bufindex to 0.
      // Assign to numread the number of bytes actually read. 
   }

   if (bufindex < numread)
   {
      // Code missing here:
      // Return byte in buf[bufindex] as an int.
      // Increment bufindex.
   }
   else
       return -1;  // -1 signals end of file
}

int main(int argc, char *argv[])
{
   int i, byte;
   time_t timer;
   if (argc != 2)
   {
        printf("Wrong number of command line arguments\n");
        printf("Usage: h2 <input filename>\n");
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

   i = 0;
   while (1)
   {
      byte = nextbyte();
      if (byte == -1)
         break;
      // Code missing here:
      // Display byte here so that 16 bytes appear on each line,
      // with a space between each pair of bytes as shown in the textbook.
      // Use i to determine when to insert space and newline. Start
      // each line with the hex address of the start of that line followed
      // by a colon.
      i++;
   }
}