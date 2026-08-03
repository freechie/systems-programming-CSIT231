# Lab 07 requirements: FIFO chat and signals

> Paraphrased from archived course instructions. This describes the assignment,
> not a claim that the archived submission satisfies every requirement.

## Goal

Extend a half-duplex named-pipe chat program so either of two running instances
can initiate a message, automate replies, detect urgent messages, and preserve a
write-protected conversation log.

## Required behavior

1. Name the source file `lab7.c`. Allow two instances to communicate through a
   FIFO under `/tmp`, using a path other than the instructor's example path.
2. While normally waiting to read, handle `SIGINT` (`Ctrl-C`) by entering write
   mode for one message and then immediately returning to read mode.
3. Allow either instance to initiate a message in this way rather than enforcing
   alternating turns.
4. Handle `SIGTSTP` (`Ctrl-Z`) by enabling automatic replies. Received messages
   must trigger varying responses selected from the three assigned canned
   acknowledgements.
5. Compare incoming text case-insensitively. If a message begins with `HELLO`,
   emit the terminal bell five times.
6. At startup, create a uniquely named conversation file and write its creation
   date and time as the first entry.
7. Append every sent and received message to that file.
8. Treat `exit` as case-insensitive. Before terminating, add a final timestamp,
   close the log, and change its permissions to read-only for its owner (`0400`).

The submitted program may be pair-programmed, but the participants must be
identified in a source comment.
