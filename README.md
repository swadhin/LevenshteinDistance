LevenshteinDistance
===================

A Levenshtein Distance Calculator in C


EASILY REPLACEABLE LETTERS (Assumed for Visual Similarity) :
-----------------------------------------------------------
C <-> D
c <-> d
E <-> F
I <-> P
I <-> J
I <-> T
L <-> U
M <-> N
m <-> n
O <-> Q
o <-> q
p <-> q
U <-> V
u <-> v
V <-> W
v <-> w
X <-> Y
x <-> y

'<->' means TRUE for both ways' transformation.


FILE HIERARCHY :
---------------
=> levenDistance.h (Header File for calculation of Levenshtein Distance)
=> levenDistance.c (Source File for calculation of Levenshtein Distance)
=> mainApp.c (Main Application File to Run and Calculate Levenshtein Distance)
=> README.txt


TO COMPILE :
------------
gcc -Wall -Wextra levenDistance.c mainApp.c -o levenshtein


TO RUN :
-------
1]	./levenshtein
2]	Enter Two Strings separated by a space or newline e.g. gamba gombol
3]	Provide Replacement Costs of w1 & w2
4]	Get the Edit Distance.
