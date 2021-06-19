# Bin-Packing-Problem
In the bin-packing problem, we are given n metal objects coming down the pipe, each weighing between 0
and 1 kilogram. We have an infinite supply of unit size bins, each of which can hold 1 kilogram at most.
The objects arrive one at a time and each must be put in a bin, before considering the next item. Therefore,
we do not know what comes next down the pipe, or even the total number of the objects, in advance. Our
goal is to find the smallest number of bins that will hold the n objects.
Bin-packing problem is NP-hard; therefore, we use heuristics to produce an approximate solution to the
problem.
• The first-fit heuristic for bin packing is as follows: For each object, place it into the first empty or
partially filled bin in which it will fit. If no bin that can accommodate the object is found, open a new bin
and put the item within the new bin.
• The best-fit heuristic for bin packing is as follows: For each object, place it into the partially filled bin
with the smallest amount of extra room after the object is packed. If no such bin exists, create a new bin.
In this project, you’re supposed to design and implement algorithms that use binary tree (BST or
other) for the heuristics described above, such that both algorithms can run in O(nlogn) time. Inputs and
outputs of the algorithms will be as follows.
Input: n weights w1, w2, ..., wn (can be read from a txt file)
Output: the number of bins used.
