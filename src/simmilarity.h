#ifndef SIMILARITY_H
#define SIMILARITY_H

#include <stddef.h>

/*
  Similarity functions operate on arrays of tokens (char*), with token counts.
  Each function returns a similarity score in the range [0.0, 1.0].

  - compute_jaccard:
      Uses set-based Jaccard index:
        intersection_size / union_size

  - compute_cosine:
      Uses term-frequency cosine similarity:
        dot(tf1, tf2) / (||tf1|| * ||tf2||)
*/

double compute_jaccard(char **tokens1, int n1, char **tokens2, int n2);

double compute_cosine(char **tokens1, int n1, char **tokens2, int n2);

#endif /* SIMILARITY_H */
