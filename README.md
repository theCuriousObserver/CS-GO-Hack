# CS-GO-Hack
A series of hack for Counter Strike: Global Offensive made for our penetration testing assignment.

Our team 2 consists of 4 members:-

1. Pallav Avatarit (pxa156@student.bham.ac.uk)
2. Xinyu Li (xxl123@student.bham.ac.uk)
3. Sruti Nallaparaju (sxn188@student.bham.ac.uk)
4. Jite Yu (jxy133@student.bham.ac.uk)

All of code has been made from cazz YouTube channel. The links for them are as follows:-

1. Aimbot - https://www.youtube.com/watch?v=Nl2PN7TvJZ4
2. Glow and Bhop - https://www.youtube.com/watch?v=TEE05nVHm9A&t=471s
3. Radar - https://www.youtube.com/watch?v=cezbHM9NL90
4. Recoil Control - https://www.youtube.com/watch?v=4TkBd6BiSwE 
5. Skin Change - https://www.youtube.com/watch?v=4OV5RtbhUhk
6. Triggerbot - https://www.youtube.com/watch?v=gzKVqeu5H28
7. Cham - https://www.youtube.com/watch?v=vFHzoIlW7Zs

The main.cpp file is different for all hacks which are provided in the github link - https://github.com/theCuriousObserver/CS-GO-Hack.git.
For all hacks we follow the following steps:-

1. Create an empty project in Visual Studio. 
2. Change the solution configuration from Debug to Release. Also change the Solution Platform from x64 to x86.
3. Go to the property of project: 
    a. In general, change the C++ Language standard to ISO C++ 20.
    b. Make sure the configuration type is set to .exe.
    c. In advanced, change character set to multi-byte.
    d. In linker -> system, make sure the subsystem is set to SUBSYSTEM CONSOLE.
4. Make a file named memory.h and copy paste the contents from memory.h file available in github.

These were the general steps. Now depending on the hack we need to create a main.cpp file and copy paste the contents from main.cpp file in the hack folder.
For Aimbot we also need to create vector.h which is also available in Aimbot folder in github.

5. After all the files are created, build the project and run the .exe file in Release folder in the project. Make sure CS GO is running. 

Resources :-

Memory class is copied from the following website :- https://github.com/cazzwastaken/pro-bhop/blob/master/cheat/memory.h
The offsets are copied from the following website :- https://github.com/frk1/hazedumper/blob/master/csgo.hpp

