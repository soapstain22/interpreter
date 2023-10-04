// a1shell.c
   Your name here as a comment
#include <stdio.h>    // for I/O functions
#include <stdlib.h>   // for exit()
#include <string.h>   // for string functions
#include <ctype.h>    // for isspace(), tolower()
#include <time.h>     // for time functions

FILE *infile, *outfile;
short pcoffset9, pcoffset11, imm5, imm9, offset6;
unsigned short symadd[500], macword, dr, sr, sr1, sr2, baser, trapvec, eopcode;
char outfilename[100], linesave[100], buf[100], *symbol[500], *p1, *p2, *cp,
     *mnemonic, *o1, *o2, *o3, *label;
int stsize, linenum, rc, loc_ctr, num;
time_t timer;

// Case insensitive string compare
// Returns 0 if two strings are equal.
short int mystrcmpi(const char *p, const char *q) 
{
   char a, b;
   while (1) 
   {
      a = tolower(*p); b = tolower(*q);
      if (a != b) return a-b;
      if (a == '\0') return 0;
      p++; q++;
   }
}

// Case insensitive string compare
// Compares up to a maximum of n characters from each string.
// Returns 0 if characters compared are equal.
short int mystrncmpi(const char *p, const char *q, int n) 
{
   char a, b;
   int i;
   for (i = 1; i <= n; i++) 
   {
      a = tolower(*p); b = tolower(*q);
      if (a != b) return a-b;
      if (a == '\0') return 0;
      p++; q++;
   }
}

void error(char *p)
{
   // Code missing here:
   // Displays error message p points to, line number in linenum, and line in
   // linesave.
}
int isreg(char *p)
{
   // Code missing here:
   // Returns 1 if p points to a register name.
   // Otherwise, returns 0.   
}
unsigned short getreg(char *p)              
{
   // Code missing here:
   // Returns register number of the register whose name p points to.
   // Calls error() if not passed a register name.
}
unsigned short getadd(char *p)
{
   // Code missing here:
   // Returns address of symbol p points to accessed from the symbol table.
   // Calls error() if symbol not in symbol table.
}
int main(int argc,char *argv[])
{
   if (argc != 2)
   {
      printf("Wrong number of command line arguments\n");
      printf("Usage: a1 <input filename>\n");
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

   // construct output file name
   strcpy(outfilename, argv[1]);        // copy input file name
   p1 = strrchr(outfilename, '.');      // search for period in extension
   if (p1)                              // name has period
   {
#ifdef _WIN32                           // defined only on Windows systems
      p2 = strrchr(outfilename, '\\' ); // compiled if _WIN32 is defined
#else
      p2 = strrchr(outfilename, '/');   // compiled if _WIN32 not defined
#endif
      // can p2 < p1 in following if statement be eliminated by 
      // using strchr(p1, ...) instead of strrchr(outfilename, ...) 
      // in the preceding assignments to p2?
      if (!p2 || p2 < p1)               // input file name has extension?
         *p1 = '\0';                    // null out extension
   }
   strcat(outfilename, ".e");           // append ".e" extension

   outfile = fopen(outfilename, "wb");
   if (!outfile)
   {
      printf("Cannot open output file %s\n", outfilename);
      exit(1);
   }

   loc_ctr = linenum = 0;       // initialize, not required because global
   fwrite("oC", 2, 1, outfile); // output empty header

   // Pass 1
   printf("Starting Pass 1\n");
   while (fgets(buf, sizeof(buf), infile))
   {
      linenum++;  // update line number
      cp = buf;
      while (isspace(*cp))
         cp++;
      if (*cp == '\0' || *cp ==';')  // if line all blank, go to next line
         continue;
      strcpy(linesave, buf);        // save line for error messages
      if (!isspace(buf[0]))         // line starts with label
      {
         label = strdup(strtok(buf, " \r\n\t:"));
         // Add code here that checks for a duplicate label, use strcmp().
         symbol[stsize] = label;
         symadd[stsize++] = loc_ctr;
         mnemonic = strtok(NULL," \r\n\t:"); // get ptr to mnemonic/directive
         o1 = strtok(NULL, " \r\n\t,");      // get ptr to first operand
      }
      else   // tokenize line with no label
      {
         mnemonic = strtok(buf, " \r\n\t");  // get ptr to mnemonic
         o1 = strtok(NULL, " \r\n\t,");      // get ptr to first operand
      }
      if (mnemonic == NULL)    // check for mnemonic or directive
         continue;
      if (!mystrcmpi(mnemonic, ".zero"))    // case insensitive compare
      {
         if (o1)
            rc = sscanf(o1, "%d", &num);    // get size of block from o1
         else
            error("Missing operand");
         if (rc != 1 || num > (65536 - loc_ctr) || num < 1)
            error("Invalid operand");
         loc_ctr = loc_ctr + num;
      }
      else
         loc_ctr++;
      if (loc_ctr > 65536)
         error("Program too big");
   }

   rewind(infile);

   // Pass 2
   printf("Starting Pass 2\n");
   loc_ctr = linenum = 0;      // reinitialize
   while (fgets(buf, sizeof(buf), infile))
   {
      linenum++;
      // Code missing here:
      // Discard blank/comment lines, and save buf in linesave as in pass 1
      // Tokenize entire current line.
      // Do not make any new entries into the symbol table

      if (mnemonic == NULL)
         continue;
      if (!mystrncmpi(mnemonic, "br", 2))    // case sensitive compares
      {
         if (!mystrcmpi(mnemonic, "br" ))
            macword = 0x0e00;
         else
         if (!mystrcmpi(mnemonic, "brz" ))
            macword = 0x0000;
         else
         if (!mystrcmpi(mnemonic, "brnz" ))
            macword = 0x0200;
         else
         if (!mystrcmpi(mnemonic, "brn" ))
            macword = 0x0400;
         else
         if (!mystrcmpi(mnemonic, "brp" ))
            macword = 0x0600;
         else
         if (!mystrcmpi(mnemonic, "brlt" ))
            macword = 0x0800;
         else
         if (!mystrcmpi(mnemonic, "brgt" ))
            macword = 0x0a00;
         else
         if (!mystrcmpi(mnemonic, "brc" ))
            macword = 0x0c00;
         else
            error("Invalid branch mnemonic");

         pcoffset9 = (getadd(o1) - loc_ctr - 1);    // compute pcoffset9
         if (pcoffset9 > 255 || pcoffset9 < -256)
            error("pcoffset9 out of range");
         macword = macword | (pcoffset9 & 0x01ff);  // assemble inst
         fwrite(&macword, 2, 1, outfile);           // write out instruction
         loc_ctr++;
      }
      else
      if (!mystrcmpi(mnemonic, "add" ))
      {
         if (!o3)
            error("Missing operand");
         dr = getreg(o1) << 9;   // get and position dest reg number
         sr1 = getreg(o2) << 6;  // get and position srce reg number
         if (isreg(o3)) // is 3rd operand a reg?
         {
            sr2 = getreg(o3);      // get third reg number
            macword = 0x1000 | dr | sr1 | sr2; // assemble inst
         }
         else
         {
            if (sscanf(o3,"%d", &num) != 1)    // convert imm5 field
               error("Bad imm5");
            if (num > 15 || num < -16)
               error("imm5 out of range");
            macword = 0x1000 | dr | sr1 | 0x0020 | (num & 0x1f);
         }
         fwrite(&macword, 2, 1, outfile);      // write out instruction
         loc_ctr++;
      }
      else
      if (!mystrcmpi(mnemonic, "ld" ))
      {
         dr = getreg(o1) << 9;// get and position destination reg number
         pcoffset9 = (getadd(o2) - loc_ctr - 1);
         if (pcoffset9 > 255 || pcoffset9 < -256)
            error("pcoffset9 out of range");
         macword = 0x2000 | dr | (pcoffset9 & 0x1ff);   // assemble inst
         fwrite(&macword, 2, 1, outfile); // write out instruction
         loc_ctr++;
      }

      // code missing here for st, bl, blr, and, ldr, str, not

      else
      if (!mystrcmpi(mnemonic, "jmp" ))     // also ret instruction
      {
         baser = getreg(o1) << 6;        // get reg number and position it
         if (o2)                         // offset6 specified?
         {
            if (sscanf(o2,"%d", &num) != 1)    // convert offset6 field
               error("Bad offset6");
            if (num > 31 || num < -32)
               error("offset6 out of range");
         }
         else
            num = 0;                           // offset6 defaults to 0
         // combine opcode, reg number, and offset6
         macword = 0xc000 | baser | num;       
         fwrite(&macword, 2, 1, outfile);  // write out instruction
         loc_ctr++;
      }
      else
      if (!mystrcmpi(mnemonic, "ret" ))     // also ret instruction
      {
         // code here is similar to code for jmp except baser
         // is always 7 and optional offset6 is pointed to by
         // o1, not by o2 as in jmp
      }

      // code missing here for lea, trap (halt, nl, dout), .word

      else
      if (!mystrcmpi(mnemonic, ".zero"))
      {
         sscanf(o1, "%d", &num);             // get size of block
         loc_ctr = loc_ctr + num;            // adjust loc_ctr
         macword = 0;
         while (num--)                       // write out a block of zeros
            fwrite(&macword, 2, 1, outfile);
      }
      else
         error("Invalid mnemonic or directive");
   }
   // Close files.
}
