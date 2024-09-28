The Boot Loader and Boot Manager are one of the most important concepts of operating systems that on their own define how and which operating system(s) is(are) going to be loaded. 
In this article, we are going to briefly have a look at what a Bootloader and  Boot Manager is.
Boot Manager:

A Boot Manager is a software program that is responsible for the management of the booting process of the computer. It is primarily responsible for selecting the Operating System to be loaded from multiple available options. Further, it also loads the Bootloader to perform the actual loading of the Operating System.
Boot Manager is the program that manages the available “bootable” Operating Systems. 
In a multi-boot system, Boot Manager is the program that runs at the very first in the booting process. 
It allows us to select the operating system to be loaded from the available systems on the machine. 
If you have ever installed more than one operating system on your machine you may be getting grip on this topic. 
The task of the Boot Manager is to ask users which Operating System they want to load into the machine or choose the default if not selected specifically. 
You may also recollect that timer which when runs out of time, automatically selects the default Operating System. Once the “to-be-loaded” Operating System is selected, Boot Manager loads the Boot Loader and passes control to it. 
A Boot Manager does not load Operating System directly on its own. This is done by Boot Loader.

Some examples of Boot Managers are:

    The BIOS boot manager
    UEFI (Unified Extensible Firmware Interface) boot manager
    GRub(GRand Unified Bootloader) It is both Boot Loader and Boot Manager and is popularly used for Linux – based systems.


Boot Loader: 

Boot Loader is a software program that is responsible for “actually loading” the operating system once the Boot Manager has finished its work.
And by loading Operating System we mean “loading the kernel of the Operating System”.  
The Boot Loader is typically a part of the Operating System itself. Till the point Boot Loader starts loading the OS, there is nothing in the Main Memory of the machine.

Following are a series of tasks that a typical Boot Loader is expected to perform:

    Loading and parsing the Boot Configuration File.
    Loading and initializing the OS’s kernel into the main memory.
    Loading and initializing the other system components and system drivers.
    Finally, finish up the system environment setup and transfer the control to the kernel.

Some examples of Boot Loaders are :

    LILO (Linux Loader): Most popular Boot Loader for Linux – Based Machines
    Windows Boot Loader: Specific up to Windows Machines
    GRub (Boot Loader part): It is a sub-part of GRub Boot Manager.

Possibilities of a combination of Boot Loader and Boot Manager may vary from System to System and according to requirements. 
The specific combination that will be used will also depend on the hardware configuration and availability of other system components.
