// lshell.c
// Your name here as a comment
#include <stdio.h>    // for I/O functions
#include <stdlib.h>   // for exit()
#include <string.h>   // for string functions
#include <time.h>     // for time functions

int i, j;

unsigned short temp, inst, addr;
char buf[300];

FILE *infile;
FILE *outfile;
char c, *p, letter;

unsigned short mca[65536];
int mcaindex;

unsigned short start;
int gotstart;

unsigned short Gadd[1000];
char *Gptr[1000];
int Gindex;

unsigned short Eadd[1000];
char *Eptr[1000];
int Eindex;

unsigned short eadd[1000];
char * eptr[1000];
int eindex;

unsigned short Aadd[1000];
int Amodadd[1000];
int Aindex;

unsigned short Vadd[1000];
char *Vptr[1000];
int Vindex;

time_t timer;

int main(int argc,char *argv[])
{
   if (argc < 2)
   {
        printf("Wrong number of command line arguments\n");
        printf("Usage: l <obj module name1> <obj module name2> ... \n");
        exit(1);
   }

   // display your name, command line args, time
   time(&timer);      // get time
   printf("YOUR NAME HERE   %s %s   %s", 
           argv[0], argv[1], asctime(localtime(&timer)));

   //================================================================
   // Step 1:
   // For each module, store header entries into tables with adjusted
   // addresses and store machine code in mca (the machine code array).

   for (i = 1; i < argc; i++)
   {
      infile = fopen(argv[i], "rb");
      if (!infile)
      {
         printf("Cannot open %s\n", argv[i]);
         exit(1);
      }
      printf("Linking %s\n", argv[i]);
      letter = fgetc(infile);
      if (letter != 'o')
      {
         printf("Not a linkable file\n");
         exit(1);
      }
      while (1)
      {
         letter = fgetc(infile);
         if (letter == 'C')
            break;
         else
         if (letter == 'S')
         {
            if (fread(&addr, 2, 1, infile) != 1) // addr unsigned short
            {
               printf("Invalid S entry\n");
               exit(1);
            }
            if (gotstart)
            {
               printf("More than one entry point\n");
               exit(1);
            }
            gotstart = 1;                   // indicate S entry processed
            start = addr + mcaindex;        // save adjusted address
         }
         else
         if (letter == 'G')
         {
            if (fread(&addr, 2, 1, infile) != 1)
            {
               printf("Invalid G entry\n");
               exit(1);
            }
            Gadd[Gindex] = addr + mcaindex; // save adjusted address
            j = 0;
            do                              // get string in G entry
            {
               letter = fgetc(infile);
               buf[j++] = letter;
            } while (letter != '\0');
            j = 0;
            while (j < Gindex)     // check for multiple definitions
            {
               if (!strcmp(buf, Gptr[j]))
               {
                  printf("Multiple defs of global var %s\n", buf);
                  exit(1);
               }
               else
                  j++;
            }
            Gptr[Gindex++] = strdup(buf);   // save string
         }
         else
         if (letter == 'E')
         {
            // code missing here
         }
         else
         if (letter == 'e')
         {
            // code missing here
         }
         else
         if (letter == 'V')
         {
            // code missing here
         }
         else
         if (letter == 'A')
         {
            // code missing here
         }
         else
         {
            printf("Invalid header entry %c in %s\n", letter, argv[i]);
            exit(1);
         }
      }

      // add machine code to machine code array
      while(fread(&inst, 2, 1, infile))
      {
         mca[mcaindex++] = inst;
      }
      fclose(infile);
   }

   //================================================================
   // Step 2: Adjust external references

   // handle E references
   for (i = 0; i < Eindex; i++)
   {
      for (j = 0; j < Gindex; j++)
         if(!strcmp(Eptr[i], Gptr[j]))
            break;
      if (j >= Gindex)
      {
         printf("%s is an undefined external reference", Eptr[i]);
         exit(1);
      }
      mca[Eadd[i]] = (mca[Eadd[i]] & 0xf800) |
                     ((mca[Eadd[i]] + Gadd[j] - Eadd[i] - 1) & 0x7ff);
   }
   // handle e entries
   for (i = 0; i < eindex; i++)
   {
      // code missing here
   }

   // handle V entries
   for (i = 0; i < Vindex; i++)
   {
      // code missing here
   }

   //================================================================
   // Step 3: Handle A entries

   for (i = 0; i < Aindex; i++)
      // Code missing here. Only 1 statement needed to handle each A entry

   //================================================================
   // Step 4: Write out executable file

   outfile = fopen("link.e", "wb");
   if (!outfile)
   {
      printf("Cannot open output file link.e\n");
      exit(1);
   }

   // Write out file signature
   fwrite("o", 1, 1, outfile);
   
   printf("Creating executable file link.e\n");
   // Write out start entry if there is one
   if (gotstart)
   {
      fwrite("S", 1, 1, outfile);
      fwrite(&start, 2, 1, outfile);
   }
   // Write out G entries
   for (i = 0; i < Gindex; i++)
   {
      fwrite("G", 1, 1, outfile);
      fwrite(Gadd + i, 2, 1, outfile);
      fprintf(outfile, "%s", Gptr[i]);
      fwrite("", 1, 1, outfile);
   }
   // Write out V entries as A entries
   for (i = 0; i < Vindex; i++)
   {
      //  Code missing here:
      //  Write out V entries as A entries.
   }
   // Write out A entries
   for (i = 0; i < Aindex; i++)
   {                        
      // Code missing here:
      // Write out A entries.
   }
   // Terminate header
   fwrite("C", 1, 1, outfile);

   // Write out code
   for (i = 0; i < mcaindex; i++)
   {
      fwrite(mca + i, 2, 1, outfile);
   }
   fclose(outfile);
}
