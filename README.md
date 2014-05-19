DisassemblyPatterns
===================

Examples from [MindTribe's Disassembly Patterns blog post](http://www.mindtribe.com/2014/05/spotting-patterns-in-c-disassembly/)

These examples are intended to be compiled with the ARM gcc compiler available here: https://launchpad.net/gcc-arm-embedded

The table_fetch example can also be compiled with the Microchip XC8 compiler available here: http://www.microchip.com/pagehandler/en_us/devtools/mplabxc

Use "make" at the top level or in any subfolder to compile with the ARM compiler.

Use "make -f Makefile-PIC16" in the "table_fetch" folder to compile with the XC8 compiler.

The makefiles are confgured with compiler flags that will produce verbose listing files in the resultant build folders. For fastest iteration when playing with the examples, we recommend referring to the listings. However, you can also open the resultant binary files in a disassembler if you'd like to check out that workflow.

Note that these examples are NOT intended to actually run on embedded hardware. They most likely won't. If you modify them to compile with your host compiler instead of ARM or XC8, they should run.

Also note that these are contrived examples intended to force assembly listings for illustrative purposes. Please don't look to them for examples of good code or project organization.
