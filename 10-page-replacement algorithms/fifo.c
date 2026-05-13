
# Experiment 10: Page Replacement Algorithm

## Aim
To implement FIFO and LRU page replacement algorithms.

## Algorithm

### FIFO
1. Read page reference string.
2. Read number of frames.
3. Replace the oldest page when frame becomes full.
4. Count page faults.

### LRU
1. Read page reference string.
2. Read number of frames.
3. Replace the least recently used page.
4. Count page faults.

## Programs
- fifo.c
- lru.c

## Sample Input
Number of pages: 12

Reference String:
1 2 3 4 1 2 5 1 2 3 4 5

Number of frames: 3

## Sample Output

FIFO:
Total Page Faults = 9

LRU:
Total Page Faults = 10

## Output Screenshots
Available in screenshots folder.
