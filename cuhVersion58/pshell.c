// pshell.c
   Your name here as a comment
#include <stdio.h>    // for I/O functions
#include <stdlib.h>   // for exit()
#include <time.h>     // for time functions

int main(int argc,char *argv[])
{
   FILE *infile;
   unsigned short addr, codeword;
   char c;
   int i;
   time_t timer;

   if (argc != 2)
   {
         printf("Wrong number of command line arguments\n");
         printf("Usage: p <input filename>\n");
         exit(1);
   }

   // display your name, command line args, time
   time(&timer);      // get time
   printf("YOUR NAME HERE   %s %s   %s", 
           argv[0], argv[1], asctime(localtime(&timer)));

   infile = fopen(argv[1], "r");
   if (!infile)
   {
      printf("Cannot open input file %s\n", argv[1]);
      exit(1);
   }

   // process header entries
   printf("\nHeader:\n");
   c = fgetc(infile);
   if (c == 'o')      // check for lcc file signature
      printf("    o\n");
   else
   {
      printf("%s not a lcc file\n", argv[1]);
      exit(1);
   }
   while (1)
   {
      c = fgetc(infile);
      if (c == 'C')
      {
         printf("    C\n");
         break;
      }
      if (c == 'S')
      {
         if (fread(&addr, 2, 1, infile) != 1)
         {
            printf("Invalid S entry\n");
            exit(1);
         }
         printf("    S  %04hx\n", addr); // %hx conversion code for short
      }
      else
      if (c == 'G')
      {
         if (fread(&addr, 2, 1, infile) != 1)
         {
            printf("Invalid G entry\n");
            exit(1);
         }
         printf("    G  %04hx ", addr);
         while (1)  // read and display string in G entry char by char
         {
            c = fgetc(infile);
            if (c == '\0')
               break;
            printf("%c", c);  // displays characters as read in
         }
         printf("\n");
      }
      else
      if (c == 'E')
      {
         // code missing here
      }
      else
      if (c == 'e')
      {
         // code missing here
      }
      else
      if (c == 'V')
      {
         // code missing here
      }
      else
      if (c == 'A')
      {
         // code missing here
      }
      else
      {
         printf("Invalid header entry in %s\n", argv[1]);
         exit(1);
      }
   }

   // process machine code
   i = 0;
   printf("\nCode:\n");

   while (fread(&codeword, 2, 1, infile))
   {
      // Code missing here:
      // Display word in codeword, 8 words per line, 1 space separating
      // each code word, with each line starting with the hex address of
      // the first word on that line as shown in the textbook. 
      //  Use i to determine when to output hex address and newline.
      i++;
   }
}
