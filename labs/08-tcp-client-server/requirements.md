# Lab 08 requirements: persistent TCP client and server

> Paraphrased from archived course instructions. This describes the assignment,
> not a claim that the archived submission satisfies every requirement.

## Goal

Extend the attributed RPI TCP examples so one client can exchange multiple
messages and the server can continue accepting new clients after a connection
ends.

## Required behavior

1. Modify the provided `client.c` and `server.c` examples rather than replacing
   them wholesale. Preserve the original structure and comment out original
   lines when rewriting them.
2. Keep one client/server session active for repeated message and response
   exchanges.
3. Number the messages in sequence on both sides so the output identifies which
   client or server message is being shown.
4. Recognize every capitalization of `exit` on the client.
5. On server startup, reject ports below `1024` and above `49151` with a helpful
   explanation. Only the registered/user-port range is accepted.
6. During communication, dynamically construct and run a shell command that
   demonstrates the same server process and selected port remain in the
   `LISTEN` state. Neither the process name nor the port check may be omitted,
   and the chosen port must not be hard-coded.
7. When the client sends `exit`, close its socket and print a closure message.
8. Close the server's connected socket for that client, keep the listening
   server alive, announce that it is waiting, and accept another connection.

The assignment permits pair programming and requires retaining attribution to
the examples on which the implementation is based.
