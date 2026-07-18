# Systems Programming Coursework

An archive of source code from CSIT 231-03 (Fall 2022), organized by assignment. The programs explore C, Unix process management, signals, interprocess communication, sockets, time handling, and Bash scripting.

The source files are preserved as originally written. Compiled executables, instructor examples, assignment prompts, course materials, and credentials from the original course directory are intentionally excluded.

## Labs

| Lab | Topic | Source | Credit |
| --- | --- | --- | --- |
| 01 | Washer geometry and weight calculations | [`lab1.c`](labs/01-washer-calculator/lab1.c) | Individual |
| 02 | Temperature and unit conversion | [`lab2.c`](labs/02-unit-converter/lab2.c) | Individual |
| 03 | Command-line integer reversal | [`lab3.c`](labs/03-number-reversal/lab3.c) | Individual |
| 04 | Pointer-based number manipulation | [`lab4.c`](labs/04-pointer-number-reversal/lab4.c) | Individual |
| 05 | Process race simulation | [`hundred.c`](labs/05-process-race/hundred.c), [`racer.c`](labs/05-process-race/racer.c) | Individual |
| 06 | Epoch time and birthday calculations in C | [`lab6.c`](labs/06-birthday-time/lab6.c) | Individual |
| 07 | FIFO chat and Unix signal handling | [`lab7.c`](labs/07-fifo-chat/lab7.c) | Pair-programmed with Chris Rojas |
| 08 | TCP client/server communication | [`client.c`](labs/08-tcp-client-server/client.c), [`server.c`](labs/08-tcp-client-server/server.c) | Pair-programmed with Chris Rojas; extends the attributed RPI socket examples in the source comments |
| 09 | Epoch time and birthday calculations in Bash | [`lab9.sh`](labs/09-birthday-shell/lab9.sh) | Individual |

## Final exam exercises

The [`final-exam`](final-exam) directory contains four small exercises covering two-dimensional arrays, shell arguments, interactive input, and signal handling.

## Verification

The archived files were checked on macOS with Clang using C11 mode and with Bash syntax checking. The shell scripts pass `bash -n`. Most C files compile to object files but retain warnings typical of the original coursework. Two files need modernization for current Clang:

- Lab 01 declares `void main()` instead of standard `int main(void)`.
- Lab 08's client performs character operations on the whole buffer rather than indexed characters.

No corrections were applied so this repository remains an accurate copy of the submitted work.

## Notes

- Unix-specific labs are intended for a POSIX-like environment.
- Lab 09 uses GNU `date` options and is best run on Linux.
- This repository does not include a license; all rights are reserved unless stated otherwise in an individual source file.
