DISCLAIMER 
----------

The files in this software package are provided to you on an "as 
is" basis for instructional purposes only, without any 
warranties, expressed or implied. The author and copyright holder 
of these files shall not be liable in any event for incidental, 
consequential, special, or punitive damages in connection with, 
or arising out of the distribution, performance, or use of these 
files. 


Possible Installation Problems
------------------------------
On a non-Windows system, you may get the message "permission denied" 
when you invoke one of the programs in the package. If this occurs, enter

     chmod 755 *

If Mac OS X does not allow you to run the programs because of an 
unverified developer,
 
Use Finder to  locate the program.
Control-click the icon, then choose Open from the shortcut menu.
Click Open.

You should then be able to invoke the program from Terminal.
Do this only if you are sure the program does not contain  malware.

If Windows prevents you from running a program, enter

     More info
	 run anyway
	 
Do this only if you are sure the program does not contain
malware.



New Way to Invoke Programs
--------------------------

Each program in this package can now be invoked by double clicking 
on its icon. The program will then prompt for arguments.



Software for C and C++ under the Hood
-------------------------------------

Let me know if you find bugs in the software. 
My email: 
          dosreist@newpaltz.edu (may be discontinued)
                  or 
          aiwibird@gmail.com 

This package supports Windoows, Linux, Raspberry, Mac, and the 
new m1, m2 Macs.

Programs:

Files with the exe extension or the suffix win are for Windows.
Window files with the same prefix are identical. For example,
lcc.exe and lccwin.exe are identical.

Files with no extension or the suffix mac are for Mac.
Mac files with the same prefix are identical. For example,
lcc and lccmac are identical.

Files with m12 suffix are for the new m1, m2 Macs.
Files with lnx suffix are for Linux (should work on 32 and 64-bit systems).
Files with lnx64 suffix are for 64-bit Linux.
Files with rasp suffix are for Raspberry OS.

If you are using Linux, m1/m2 Mac, or Raspberry OS, and you 
want the program names to match the names used in the
textbook, copy the file names for your system to the same names but 
without the identifying suffix. For example, for Linux:

     cp lcclnx lcc

NOT necessary to do this for the Windows and old Mac files because 
programs without the identifying suffix are already in the cuhsoftware 
folder. 

Each program has a ".txt" documentation file. For example, the
documentation file for the lcc program is lcc.txt.