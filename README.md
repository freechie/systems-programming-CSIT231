# Systems Programming Coursework

An archive of source code from CSIT 231-03 (Fall 2022), organized by assignment. The programs explore C, Unix process management, signals, interprocess communication, sockets, time handling, and Bash scripting.

The coursework sources are archived with their original assignment logic. A later maintenance pass applied focused standards-compliance, buffer-handling, formatting, and attribution edits. Each lab now includes a paraphrased requirements summary reconstructed from privately retained course materials. Compiled executables, instructor examples, verbatim assignment prompts, course infrastructure, and credentials from the original course directory are intentionally excluded.

## Labs

Start with the [`labs` index](labs/README.md), which links the source submission and reconstructed requirements for every assignment.

| Lab | Topic | Source | Requirements | Credit |
| --- | --- | --- | --- | --- |
| 01 | Washer geometry and weight calculations | [`lab1.c`](labs/01-washer-calculator/lab1.c) | [Summary](labs/01-washer-calculator/requirements.md) | |
| 02 | Temperature and distance conversion | [`lab2.c`](labs/02-unit-converter/lab2.c) | [Summary](labs/02-unit-converter/requirements.md) | |
| 03 | Command-line integer reversal | [`lab3.c`](labs/03-number-reversal/lab3.c) | [Summary](labs/03-number-reversal/requirements.md) | |
| 04 | Pointer-based number manipulation | [`lab4.c`](labs/04-pointer-number-reversal/lab4.c) | [Summary](labs/04-pointer-number-reversal/requirements.md) | |
| 05 | Process race simulation | [`hundred.c`](labs/05-process-race/hundred.c), [`racer.c`](labs/05-process-race/racer.c) | [Summary](labs/05-process-race/requirements.md) | |
| 06 | Epoch time and birthday calculations in C | [`lab6.c`](labs/06-birthday-time/lab6.c) | [Summary](labs/06-birthday-time/requirements.md) | |
| 07 | FIFO chat and Unix signal handling | [`lab7.c`](labs/07-fifo-chat/lab7.c) | [Summary](labs/07-fifo-chat/requirements.md) | Pair-programmed |
| 08 | Persistent TCP client/server communication | [`client.c`](labs/08-tcp-client-server/client.c), [`server.c`](labs/08-tcp-client-server/server.c) | [Summary](labs/08-tcp-client-server/requirements.md) | Pair-programmed; extends the attributed RPI examples |
| 09 | Epoch time and birthday calculations in Bash | [`lab9.sh`](labs/09-birthday-shell/lab9.sh) | [Summary](labs/09-birthday-shell/requirements.md) | |

## Final exam exercises

The [`final-exam`](final-exam) directory contains four small exercises covering two-dimensional arrays, shell arguments, interactive input, and signal handling.

## Verification

The archived files were checked on macOS with Clang using C11 mode and with Bash syntax checking. All C source files pass Clang C11 syntax checking, although several retain warnings typical of the original coursework. Both shell scripts pass `bash -n`.

The maintenance pass made two compilation-related corrections:

- Lab 01 now uses the standard `int main(void)` entry point and returns a success status.
- Lab 08's client now strips the newline added by `fgets()`, processes indexed buffer characters, and closes its socket before exiting.

These fixes are intentionally narrow; the remaining warnings and original coursework behavior are preserved.

## Notes

- Unix-specific labs are intended for a POSIX-like environment.
- Lab 09 uses GNU `date` options and is best run on Linux.
- Requirement summaries document the assignments and should not be interpreted as a claim that every submitted program fully implements them.
- This repository does not include a license; all rights are reserved unless stated otherwise in an individual source file.
