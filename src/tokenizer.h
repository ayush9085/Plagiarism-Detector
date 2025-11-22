#ifndef TOKENIZER_H
#define TOKENIZER_H

/* 
   Tokenize text into words:
   - convert to lowercase
   - remove punctuation
   - split by spaces
   - remove stopwords (if provided)

   Returns an array of malloc'd tokens.
   Sets out_n to the number of tokens.

   Caller MUST free tokens using tokenizer_free_tokens().
*/
char **tokenize_and_filter(const char *text,
                           char **stopwords,
                           int stop_n,
                           int *out_n);

/* Free an array of tokens returned by tokenize_and_filter() */
void tokenizer_free_tokens(char **tokens, int n);

/* 
   Load stopwords from stopwords.txt
   Returns number of stopwords loaded.
   Allocates a list of words into out_words (malloc'd strings).
*/
int tokenizer_load_stopwords(const char *path, char ***out_words);

/* Free stopword list created by tokenizer_load_stopwords() */
void tokenizer_free_wordlist(char **words, int n);

#endif
