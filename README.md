# Win32ML
Win32 Message Logger -- Not machine learning :]


## Constitution

While using this product or repository please keep in mind the
[Code Of Conduct](./CODE_OF_CONDUCT.md).

## Description
This program logs out the various messages a Win32 window receives during its lifetime.  
Whenever a window receives any message, it shows:
 * The HWND pointer which receives the message
 * The UINT message code value (in hexadecimal and decimal formats)
 * The WPARAM value
 * The LPARAM value
 * The **NAME of the MESSAGE**

Obviously the names for the messages which are known are shown and the others are shown by `<UNKNOWN_MESSAGE_VALUE>`.  
MSDN probably does not have any list of all the messages that a window receives. Therefore, all the message names and values were taken from [List of Windows Messages - WineHQ Wiki](https://wiki.winehq.org/List_Of_Windows_Messages).  
Although all the messages from there did not seem to compile (i.e. were undefined) under `g++`. So I searched many of them, some were documented **with the header files** and others were not. The ones for which I could find a header file are kept and the otheres have been *commented* out.  
Therefore, there might be many messages which are not documented and it will be really useful if people add the messages they know about. If you think a message has a particular header associated with it but the message has been commented, please do add the header and uncomment all the messages you think will be available after adding the header.  
The file with all the mapping is [app/src/InitMsgMap.cpp](./app/src/InitMsgMap.cpp).  

**Also while contributing to this repository, strictly keep in mind the [Constitution](#constitution) of the repository and try to abide by the rules and guidelines in the section [Contribution](#contribution).**

## Purpose
Well, personally, I think it is important to learn what messages are tallied to the window and why whenever one uses Win32 API. It can provide different ways to handle a particular task and can make the program more efficient.  
**Also "Why not?"**

## Contribution
Follow the [CONTRIBUTING.md](./CONTRIBUTING.md) while contributing to
this repository.

## Requirements
Requirements to build this project:
 * `g++` (some recent version)
 * A Windows PC.
 * GNU Make (OPTIONAL)
