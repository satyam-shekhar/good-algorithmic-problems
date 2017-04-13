# good-algorithmic-problems
https://code.google.com/codejam/contest/4304486/dashboard#s=p2&a=2

The problem can be visualised as a graph in which each edge is from one kid to its BFF. Observing the various inputs 
and forming graphs from them, it can be observed that graph can contain few connected components, where each component contains
exactly one cycle and every  other nodes in that component are directed towards that cycle.
If cycle contains more than 2 nodes then we can keep only those nodes in one circle(no space for others).
If cycle contains exactly two nodes , then we can add other components to it because both of them are already satisfied.

solution contains two steps 
1)finding the maximum length of cycle.Let it be ans1.
2)For each component having cycle of length 2, finding longest linear chain. Let ans2 will be sum of all such longest chains
   for each components.
3)final ans will be maximum of ans1 and ans2.

This graph is a special type of graph called <a href="https://en.wikipedia.org/wiki/Pseudoforest#Graphs_of_functions">Endofunctions</a> Endofunctions in which "for each x which belongs to set X, y = f(x) also belongs to
set X."
