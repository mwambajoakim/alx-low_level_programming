***Creating Static Libraries in C***

*First of all add functions created into one header file*

*Then after, create object files from each file with .c by running gcc with the -c flag to create .o files*

*Create a library using the format ```ar rc [name].a```*

**Add all the object files into the library created by running ```ar -t [name].a *.o**

