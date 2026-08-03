# Lab 08 implementation notes

These notes condense the useful TCP design questions from the student's
recovered class notes.

## Server lifecycle

The listening socket should be created and bound once:

1. Call `socket`, `bind`, and `listen` during server setup.
2. Put `accept` in an outer loop so a disconnected client can be replaced.
3. Put `read` and `write` in an inner loop for repeated exchanges with the
   current client.
4. When that session ends, close only the connected client socket and return to
   `accept`.
5. Close the listening socket only when the server itself shuts down.

```text
socket -> bind -> listen -> accept -> exchange messages -> close client
                             ^                              |
                             +------------------------------+
```

The client follows the shorter lifecycle `socket -> connect -> exchange ->
close`. The original notes also emphasize that conversation output needs a
sequence number and that the server process must stay alive after a client
leaves.
