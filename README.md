LEA1.0 | Scott Jordan
======

Logarithmic Encryption Algorithm v1.0

This uses logarithms to encrypt messages.

It work on the principal that log<sub>MESSAGE</sub>KEY is a decimal number that means nothing to humans.

To decrypt it, simply put the KEY to the power of (1 / ENCRYPTED_MESSAGE).

=======================================
to compile on linux:

# cd to directory

g++ -o encrypt ./encrypt.cpp

g++ -o decrypt ./decrypt.cpp

then run them by:

./encrypt

    OR
    
./decrypt
